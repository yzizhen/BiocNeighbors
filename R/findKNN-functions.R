#' Find nearest neighbors
#' 
#' Find the nearest neighbors of each point in a dataset, using a variety of algorithms.
#' 
#' @param X A numeric matrix where rows correspond to data points and columns correspond to variables (i.e., dimensions).
#' @param k A positive integer scalar specifying the number of nearest neighbors to retrieve.
#' @param get.index A logical scalar indicating whether the indices of the nearest neighbors should be recorded.
#' @param get.distance A logical scalar indicating whether distances to the nearest neighbors should be recorded.
#' @param last An integer scalar specifying the number of furthest neighbors for which statistics should be returned.
#' @param BPPARAM A \linkS4class{BiocParallelParam} object indicating how the search should be parallelized.
#' @param precomputed A \linkS4class{BiocNeighborIndex} object of the appropriate class, generated from \code{X}.
#' For \code{findExhaustive}, this should be a \linkS4class{ExhaustiveIndex} from \code{\link{buildExhaustive}};
#' For \code{findKmknn}, this should be a \linkS4class{KmknnIndex} from \code{\link{buildKmknn}};
#' for \code{findVptree}, this should be a \linkS4class{VptreeIndex} from \code{\link{buildVptree}};
#' for \code{findAnnoy}, this should be a \linkS4class{AnnoyIndex} from \code{\link{buildAnnoy}};
#' and for \code{findHnsw}, this should be a \linkS4class{HnswIndex} from \code{\link{buildHnsw}}.
#' @param subset A vector indicating the rows of \code{X} for which the nearest neighbors should be identified.
#' @param raw.index A logial scalar indicating whether raw column indices should be returned, 
#' see \code{?"\link{BiocNeighbors-raw-index}"}.
#' This argument is ignored for \code{findAnnoy} and \code{findHnsw}.
#' @param warn.ties Logical scalar indicating whether a warning should be raised if any of the \code{k+1} neighbors have tied distances.
#' This argument is ignored for \code{findAnnoy} and \code{findHnsw}.
#' @param ... Further arguments to pass to the respective \code{build*} function for each algorithm.
#' This includes \code{distance}, a string specifying whether \code{"Euclidean"} or \code{"Manhattan"} distances are to be used.
#' 
#' @details
#' All of these functions identify points in \code{X} that are the \code{k} nearest neighbors of each other point.
#' \code{findAnnoy} and \code{findHnsw} perform an approximate search, while \code{findKmknn} and \code{findVptree} are exact.
#' The upper bound for \code{k} is set at the number of points in \code{X} minus 1.
#' 
#' By default, nearest neighbors are identified for all data points within \code{X}.
#' If \code{subset} is specified, nearest neighbors are only detected for the points in the subset.
#' This yields the same result as (but is more efficient than) subsetting the output matrices after running \code{findKmknn} with \code{subset=NULL}.
#' 
#' Turning off \code{get.index} or \code{get.distance} will not return the corresponding matrices in the output.
#' This may provide a slight speed boost when these returned values are not of interest.
#' Using \code{BPPARAM} will also split the search across multiple workers, which should increase speed proportionally (in theory) to the number of cores.
#' 
#' Setting \code{last} will return indices and/or distances for the \code{k - last + 1}-th closest neighbor to the \code{k}-th neighbor.
#' This can be used to improve memory efficiency, e.g., by only returning statistics for the \code{k}-th nearest neighbor by setting \code{last=1}.
#' Note that this is entirely orthogonal to \code{subset}.
#' 
#' If multiple queries are to be performed to the same \code{X}, it may be beneficial to build the index from \code{X} (e.g., with \code{\link{buildKmknn}}).
#' The resulting BiocNeighborIndex object can be supplied as \code{precomputed} to multiple function calls, avoiding the need to repeat index construction in each call.
#' Note that when \code{precomputed} is supplied, the value of \code{X} is completely ignored.
#' 
#' For exact methods, see comments in \code{?"\link{BiocNeighbors-ties}"} regarding the warnings when tied distances are observed.
#' For approximate methods, see comments in \code{\link{buildAnnoy}} and \code{\link{buildHnsw}} about the (lack of) randomness in the search results.
#' 
#' @return
#' A list is returned containing:
#' \itemize{
#'     \item \code{index}, if \code{get.index=TRUE}.
#'     This is an integer matrix where each row corresponds to a point (denoted here as \eqn{i}) in \code{X}.
#'     The row for \eqn{i} contains the row indices of \code{X} that are the nearest neighbors to point \eqn{i}, sorted by increasing distance from \eqn{i}.
#'     \item \code{distance}, if \code{get.distance=TRUE}.
#'     This is a numeric matrix where each row corresponds to a point (as above) and contains the sorted distances of the neighbors from \eqn{i}.
#' }
#' Each matrix contains \code{last} columns.
#' If \code{subset} is not \code{NULL}, each row of the above matrices refers to a point in the subset, in the same order as supplied in \code{subset}.
#' 
#' See \code{?"\link{BiocNeighbors-raw-index}"} for an explanation of the output when \code{raw.index=TRUE} for the functions that support it.
#' 
#' @author
#' Aaron Lun
#' 
#' @seealso
#' \code{\link{buildExhaustive}}, 
#' \code{\link{buildKmknn}}, 
#' \code{\link{buildVptree}},
#' \code{\link{buildAnnoy}},
#' or \code{\link{buildHnsw}} to build an index ahead of time.
#' 
#' See \code{?"\link{BiocNeighbors-algorithms}"} for an overview of the available algorithms.
#' 
#' @examples
#' Y <- matrix(rnorm(100000), ncol=20)
#' 
#' out <- findExhaustive(Y, k=8)
#' head(out$index)
#' head(out$distance)
#' 
#' out1 <- findKmknn(Y, k=8)
#' head(out1$index)
#' head(out1$distance)
#' 
#' out2 <- findVptree(Y, k=8)
#' head(out2$index)
#' head(out2$distance)
#' 
#' out3 <- findAnnoy(Y, k=8)
#' head(out3$index)
#' head(out3$distance)
#' 
#' out4 <- findHnsw(Y, k=8)
#' head(out4$index)
#' head(out4$distance)
#'
#' @name findKNN-functions
NULL

#' @export
#' @rdname findKNN-functions
#' @importFrom BiocParallel SerialParam 
findAnnoy <- function(X, k, get.index=TRUE, get.distance=TRUE, last=k,
    BPPARAM=SerialParam(), precomputed=NULL, subset=NULL, raw.index=NA, warn.ties=NA, ...)
{
    .template_find_knn(X, k, get.index=get.index, get.distance=get.distance, 
        last=last, BPPARAM=BPPARAM, precomputed=precomputed, subset=subset, 
        exact=FALSE, warn.ties=FALSE, raw.index=FALSE,
        buildFUN=buildAnnoy, searchFUN=find_annoy, searchArgsFUN=.find_annoy_args, ...)
}

#' @export
#' @rdname findKNN-functions
#' @importFrom BiocParallel SerialParam
findHnsw <- function(X, k, get.index=TRUE, get.distance=TRUE, last=k, 
    BPPARAM=SerialParam(), precomputed=NULL, subset=NULL, raw.index=NA, warn.ties=NA, ...)
{
    .template_find_knn(X, k, get.index=get.index, get.distance=get.distance, 
        last=last, BPPARAM=BPPARAM, precomputed=precomputed, subset=subset, 
        exact=FALSE, warn.ties=FALSE, raw.index=FALSE,
        buildFUN=buildHnsw, searchFUN=find_hnsw, searchArgsFUN=.find_hnsw_args, ...)
}

#' @export
#' @rdname findKNN-functions
#' @importFrom BiocParallel SerialParam 
findKmknn <- function(X, k, get.index=TRUE, get.distance=TRUE, last=k,
    BPPARAM=SerialParam(), precomputed=NULL, subset=NULL, raw.index=FALSE, warn.ties=TRUE, ...)
{
    .template_find_knn(X, k, get.index=get.index, get.distance=get.distance, 
        last=last, BPPARAM=BPPARAM, precomputed=precomputed, subset=subset, 
        exact=TRUE, warn.ties=warn.ties, raw.index=raw.index, 
        buildFUN=buildKmknn, searchFUN=find_kmknn, searchArgsFUN=.find_kmknn_args, ...) 
}

#' @export
#' @rdname findKNN-functions
#' @importFrom BiocParallel SerialParam 
findVptree <- function(X, k, get.index=TRUE, get.distance=TRUE, last=k, 
    BPPARAM=SerialParam(), precomputed=NULL, subset=NULL, raw.index=FALSE, warn.ties=TRUE, ...)
{
    .template_find_knn(X, k, get.index=get.index, get.distance=get.distance, 
        last=last, BPPARAM=BPPARAM, precomputed=precomputed, subset=subset, 
        exact=TRUE, warn.ties=warn.ties, raw.index=raw.index, 
        buildFUN=buildVptree, searchFUN=find_vptree, searchArgsFUN=.find_vptree_args, ...)
}

#' @export
#' @rdname findKNN-functions
#' @importFrom BiocParallel SerialParam 
findExhaustive <- function(X, k, get.index=TRUE, get.distance=TRUE, last=k, 
    BPPARAM=SerialParam(), precomputed=NULL, subset=NULL, raw.index=FALSE, warn.ties=TRUE, ...)
{
    .template_find_knn(X, k, get.index=get.index, get.distance=get.distance, 
        last=last, BPPARAM=BPPARAM, precomputed=precomputed, subset=subset, 
        exact=TRUE, warn.ties=warn.ties, raw.index=raw.index, 
        buildFUN=buildExhaustive, searchFUN=find_exhaustive, searchArgsFUN=.find_exhaustive_args, ...)
}

