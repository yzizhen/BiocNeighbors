// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// build_annoy
Rcpp::RObject build_annoy(Rcpp::NumericMatrix mat, int ntrees, std::string fname, std::string dtype);
RcppExport SEXP _BiocNeighbors_build_annoy(SEXP matSEXP, SEXP ntreesSEXP, SEXP fnameSEXP, SEXP dtypeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type mat(matSEXP);
    Rcpp::traits::input_parameter< int >::type ntrees(ntreesSEXP);
    Rcpp::traits::input_parameter< std::string >::type fname(fnameSEXP);
    Rcpp::traits::input_parameter< std::string >::type dtype(dtypeSEXP);
    rcpp_result_gen = Rcpp::wrap(build_annoy(mat, ntrees, fname, dtype));
    return rcpp_result_gen;
END_RCPP
}
// build_hnsw
Rcpp::RObject build_hnsw(Rcpp::NumericMatrix mat, int nlinks, int ef_construct, std::string fname, std::string dtype);
RcppExport SEXP _BiocNeighbors_build_hnsw(SEXP matSEXP, SEXP nlinksSEXP, SEXP ef_constructSEXP, SEXP fnameSEXP, SEXP dtypeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type mat(matSEXP);
    Rcpp::traits::input_parameter< int >::type nlinks(nlinksSEXP);
    Rcpp::traits::input_parameter< int >::type ef_construct(ef_constructSEXP);
    Rcpp::traits::input_parameter< std::string >::type fname(fnameSEXP);
    Rcpp::traits::input_parameter< std::string >::type dtype(dtypeSEXP);
    rcpp_result_gen = Rcpp::wrap(build_hnsw(mat, nlinks, ef_construct, fname, dtype));
    return rcpp_result_gen;
END_RCPP
}
// build_vptree
Rcpp::RObject build_vptree(Rcpp::NumericMatrix Mat, std::string dtype);
RcppExport SEXP _BiocNeighbors_build_vptree(SEXP MatSEXP, SEXP dtypeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type Mat(MatSEXP);
    Rcpp::traits::input_parameter< std::string >::type dtype(dtypeSEXP);
    rcpp_result_gen = Rcpp::wrap(build_vptree(Mat, dtype));
    return rcpp_result_gen;
END_RCPP
}
// find_annoy
Rcpp::RObject find_annoy(Rcpp::IntegerVector to_check, int ndims, std::string fname, double search_mult, std::string dtype, int nn, bool get_index, bool get_distance);
RcppExport SEXP _BiocNeighbors_find_annoy(SEXP to_checkSEXP, SEXP ndimsSEXP, SEXP fnameSEXP, SEXP search_multSEXP, SEXP dtypeSEXP, SEXP nnSEXP, SEXP get_indexSEXP, SEXP get_distanceSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type to_check(to_checkSEXP);
    Rcpp::traits::input_parameter< int >::type ndims(ndimsSEXP);
    Rcpp::traits::input_parameter< std::string >::type fname(fnameSEXP);
    Rcpp::traits::input_parameter< double >::type search_mult(search_multSEXP);
    Rcpp::traits::input_parameter< std::string >::type dtype(dtypeSEXP);
    Rcpp::traits::input_parameter< int >::type nn(nnSEXP);
    Rcpp::traits::input_parameter< bool >::type get_index(get_indexSEXP);
    Rcpp::traits::input_parameter< bool >::type get_distance(get_distanceSEXP);
    rcpp_result_gen = Rcpp::wrap(find_annoy(to_check, ndims, fname, search_mult, dtype, nn, get_index, get_distance));
    return rcpp_result_gen;
END_RCPP
}
// find_dist_to_annoy
Rcpp::RObject find_dist_to_annoy(Rcpp::IntegerVector to_check, int ndims, std::string fname, double search_mult, std::string dtype, int nn);
RcppExport SEXP _BiocNeighbors_find_dist_to_annoy(SEXP to_checkSEXP, SEXP ndimsSEXP, SEXP fnameSEXP, SEXP search_multSEXP, SEXP dtypeSEXP, SEXP nnSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type to_check(to_checkSEXP);
    Rcpp::traits::input_parameter< int >::type ndims(ndimsSEXP);
    Rcpp::traits::input_parameter< std::string >::type fname(fnameSEXP);
    Rcpp::traits::input_parameter< double >::type search_mult(search_multSEXP);
    Rcpp::traits::input_parameter< std::string >::type dtype(dtypeSEXP);
    Rcpp::traits::input_parameter< int >::type nn(nnSEXP);
    rcpp_result_gen = Rcpp::wrap(find_dist_to_annoy(to_check, ndims, fname, search_mult, dtype, nn));
    return rcpp_result_gen;
END_RCPP
}
// find_hnsw
Rcpp::RObject find_hnsw(Rcpp::IntegerVector to_check, Rcpp::NumericMatrix vals, std::string fname, int ef_search, std::string dtype, int nn, bool get_index, bool get_distance);
RcppExport SEXP _BiocNeighbors_find_hnsw(SEXP to_checkSEXP, SEXP valsSEXP, SEXP fnameSEXP, SEXP ef_searchSEXP, SEXP dtypeSEXP, SEXP nnSEXP, SEXP get_indexSEXP, SEXP get_distanceSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type to_check(to_checkSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type vals(valsSEXP);
    Rcpp::traits::input_parameter< std::string >::type fname(fnameSEXP);
    Rcpp::traits::input_parameter< int >::type ef_search(ef_searchSEXP);
    Rcpp::traits::input_parameter< std::string >::type dtype(dtypeSEXP);
    Rcpp::traits::input_parameter< int >::type nn(nnSEXP);
    Rcpp::traits::input_parameter< bool >::type get_index(get_indexSEXP);
    Rcpp::traits::input_parameter< bool >::type get_distance(get_distanceSEXP);
    rcpp_result_gen = Rcpp::wrap(find_hnsw(to_check, vals, fname, ef_search, dtype, nn, get_index, get_distance));
    return rcpp_result_gen;
END_RCPP
}
// find_dist_to_hnsw
Rcpp::RObject find_dist_to_hnsw(Rcpp::IntegerVector to_check, Rcpp::NumericMatrix vals, std::string fname, int ef_search, std::string dtype, int nn);
RcppExport SEXP _BiocNeighbors_find_dist_to_hnsw(SEXP to_checkSEXP, SEXP valsSEXP, SEXP fnameSEXP, SEXP ef_searchSEXP, SEXP dtypeSEXP, SEXP nnSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type to_check(to_checkSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type vals(valsSEXP);
    Rcpp::traits::input_parameter< std::string >::type fname(fnameSEXP);
    Rcpp::traits::input_parameter< int >::type ef_search(ef_searchSEXP);
    Rcpp::traits::input_parameter< std::string >::type dtype(dtypeSEXP);
    Rcpp::traits::input_parameter< int >::type nn(nnSEXP);
    rcpp_result_gen = Rcpp::wrap(find_dist_to_hnsw(to_check, vals, fname, ef_search, dtype, nn));
    return rcpp_result_gen;
END_RCPP
}
// find_kmknn
Rcpp::RObject find_kmknn(Rcpp::IntegerVector to_check, Rcpp::NumericMatrix X, Rcpp::NumericMatrix clust_centers, Rcpp::List clust_info, std::string dtype, int nn, bool get_index, bool get_distance);
RcppExport SEXP _BiocNeighbors_find_kmknn(SEXP to_checkSEXP, SEXP XSEXP, SEXP clust_centersSEXP, SEXP clust_infoSEXP, SEXP dtypeSEXP, SEXP nnSEXP, SEXP get_indexSEXP, SEXP get_distanceSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type to_check(to_checkSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type X(XSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type clust_centers(clust_centersSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type clust_info(clust_infoSEXP);
    Rcpp::traits::input_parameter< std::string >::type dtype(dtypeSEXP);
    Rcpp::traits::input_parameter< int >::type nn(nnSEXP);
    Rcpp::traits::input_parameter< bool >::type get_index(get_indexSEXP);
    Rcpp::traits::input_parameter< bool >::type get_distance(get_distanceSEXP);
    rcpp_result_gen = Rcpp::wrap(find_kmknn(to_check, X, clust_centers, clust_info, dtype, nn, get_index, get_distance));
    return rcpp_result_gen;
END_RCPP
}
// find_dist_to_kmknn
Rcpp::RObject find_dist_to_kmknn(Rcpp::IntegerVector to_check, Rcpp::NumericMatrix X, Rcpp::NumericMatrix clust_centers, Rcpp::List clust_info, std::string dtype, int nn);
RcppExport SEXP _BiocNeighbors_find_dist_to_kmknn(SEXP to_checkSEXP, SEXP XSEXP, SEXP clust_centersSEXP, SEXP clust_infoSEXP, SEXP dtypeSEXP, SEXP nnSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type to_check(to_checkSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type X(XSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type clust_centers(clust_centersSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type clust_info(clust_infoSEXP);
    Rcpp::traits::input_parameter< std::string >::type dtype(dtypeSEXP);
    Rcpp::traits::input_parameter< int >::type nn(nnSEXP);
    rcpp_result_gen = Rcpp::wrap(find_dist_to_kmknn(to_check, X, clust_centers, clust_info, dtype, nn));
    return rcpp_result_gen;
END_RCPP
}
// range_find_kmknn
Rcpp::RObject range_find_kmknn(Rcpp::IntegerVector to_check, Rcpp::NumericMatrix X, Rcpp::NumericMatrix clust_centers, Rcpp::List clust_info, std::string dtype, Rcpp::NumericVector dist_thresh, bool get_index, bool get_distance);
RcppExport SEXP _BiocNeighbors_range_find_kmknn(SEXP to_checkSEXP, SEXP XSEXP, SEXP clust_centersSEXP, SEXP clust_infoSEXP, SEXP dtypeSEXP, SEXP dist_threshSEXP, SEXP get_indexSEXP, SEXP get_distanceSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type to_check(to_checkSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type X(XSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type clust_centers(clust_centersSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type clust_info(clust_infoSEXP);
    Rcpp::traits::input_parameter< std::string >::type dtype(dtypeSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type dist_thresh(dist_threshSEXP);
    Rcpp::traits::input_parameter< bool >::type get_index(get_indexSEXP);
    Rcpp::traits::input_parameter< bool >::type get_distance(get_distanceSEXP);
    rcpp_result_gen = Rcpp::wrap(range_find_kmknn(to_check, X, clust_centers, clust_info, dtype, dist_thresh, get_index, get_distance));
    return rcpp_result_gen;
END_RCPP
}
// find_vptree
Rcpp::RObject find_vptree(Rcpp::IntegerVector to_check, Rcpp::NumericMatrix X, Rcpp::List nodes, std::string dtype, int nn, bool get_index, bool get_distance);
RcppExport SEXP _BiocNeighbors_find_vptree(SEXP to_checkSEXP, SEXP XSEXP, SEXP nodesSEXP, SEXP dtypeSEXP, SEXP nnSEXP, SEXP get_indexSEXP, SEXP get_distanceSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type to_check(to_checkSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type X(XSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type nodes(nodesSEXP);
    Rcpp::traits::input_parameter< std::string >::type dtype(dtypeSEXP);
    Rcpp::traits::input_parameter< int >::type nn(nnSEXP);
    Rcpp::traits::input_parameter< bool >::type get_index(get_indexSEXP);
    Rcpp::traits::input_parameter< bool >::type get_distance(get_distanceSEXP);
    rcpp_result_gen = Rcpp::wrap(find_vptree(to_check, X, nodes, dtype, nn, get_index, get_distance));
    return rcpp_result_gen;
END_RCPP
}
// find_dist_to_vptree
Rcpp::RObject find_dist_to_vptree(Rcpp::IntegerVector to_check, Rcpp::NumericMatrix X, Rcpp::List nodes, std::string dtype, int nn);
RcppExport SEXP _BiocNeighbors_find_dist_to_vptree(SEXP to_checkSEXP, SEXP XSEXP, SEXP nodesSEXP, SEXP dtypeSEXP, SEXP nnSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type to_check(to_checkSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type X(XSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type nodes(nodesSEXP);
    Rcpp::traits::input_parameter< std::string >::type dtype(dtypeSEXP);
    Rcpp::traits::input_parameter< int >::type nn(nnSEXP);
    rcpp_result_gen = Rcpp::wrap(find_dist_to_vptree(to_check, X, nodes, dtype, nn));
    return rcpp_result_gen;
END_RCPP
}
// range_find_vptree
Rcpp::RObject range_find_vptree(Rcpp::IntegerVector to_check, Rcpp::NumericMatrix X, Rcpp::List nodes, std::string dtype, Rcpp::NumericVector dist_thresh, bool get_index, bool get_distance);
RcppExport SEXP _BiocNeighbors_range_find_vptree(SEXP to_checkSEXP, SEXP XSEXP, SEXP nodesSEXP, SEXP dtypeSEXP, SEXP dist_threshSEXP, SEXP get_indexSEXP, SEXP get_distanceSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type to_check(to_checkSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type X(XSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type nodes(nodesSEXP);
    Rcpp::traits::input_parameter< std::string >::type dtype(dtypeSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type dist_thresh(dist_threshSEXP);
    Rcpp::traits::input_parameter< bool >::type get_index(get_indexSEXP);
    Rcpp::traits::input_parameter< bool >::type get_distance(get_distanceSEXP);
    rcpp_result_gen = Rcpp::wrap(range_find_vptree(to_check, X, nodes, dtype, dist_thresh, get_index, get_distance));
    return rcpp_result_gen;
END_RCPP
}
// query_annoy
Rcpp::RObject query_annoy(Rcpp::NumericMatrix query, int ndims, std::string fname, double search_mult, std::string dtype, int nn, bool get_index, bool get_distance);
RcppExport SEXP _BiocNeighbors_query_annoy(SEXP querySEXP, SEXP ndimsSEXP, SEXP fnameSEXP, SEXP search_multSEXP, SEXP dtypeSEXP, SEXP nnSEXP, SEXP get_indexSEXP, SEXP get_distanceSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type query(querySEXP);
    Rcpp::traits::input_parameter< int >::type ndims(ndimsSEXP);
    Rcpp::traits::input_parameter< std::string >::type fname(fnameSEXP);
    Rcpp::traits::input_parameter< double >::type search_mult(search_multSEXP);
    Rcpp::traits::input_parameter< std::string >::type dtype(dtypeSEXP);
    Rcpp::traits::input_parameter< int >::type nn(nnSEXP);
    Rcpp::traits::input_parameter< bool >::type get_index(get_indexSEXP);
    Rcpp::traits::input_parameter< bool >::type get_distance(get_distanceSEXP);
    rcpp_result_gen = Rcpp::wrap(query_annoy(query, ndims, fname, search_mult, dtype, nn, get_index, get_distance));
    return rcpp_result_gen;
END_RCPP
}
// query_dist_to_annoy
Rcpp::RObject query_dist_to_annoy(Rcpp::NumericMatrix query, int ndims, std::string fname, double search_mult, std::string dtype, int nn);
RcppExport SEXP _BiocNeighbors_query_dist_to_annoy(SEXP querySEXP, SEXP ndimsSEXP, SEXP fnameSEXP, SEXP search_multSEXP, SEXP dtypeSEXP, SEXP nnSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type query(querySEXP);
    Rcpp::traits::input_parameter< int >::type ndims(ndimsSEXP);
    Rcpp::traits::input_parameter< std::string >::type fname(fnameSEXP);
    Rcpp::traits::input_parameter< double >::type search_mult(search_multSEXP);
    Rcpp::traits::input_parameter< std::string >::type dtype(dtypeSEXP);
    Rcpp::traits::input_parameter< int >::type nn(nnSEXP);
    rcpp_result_gen = Rcpp::wrap(query_dist_to_annoy(query, ndims, fname, search_mult, dtype, nn));
    return rcpp_result_gen;
END_RCPP
}
// query_hnsw
SEXP query_hnsw(Rcpp::NumericMatrix query, Rcpp::NumericMatrix vals, std::string fname, int ef_search, std::string dtype, int nn, bool get_index, bool get_distance);
RcppExport SEXP _BiocNeighbors_query_hnsw(SEXP querySEXP, SEXP valsSEXP, SEXP fnameSEXP, SEXP ef_searchSEXP, SEXP dtypeSEXP, SEXP nnSEXP, SEXP get_indexSEXP, SEXP get_distanceSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type query(querySEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type vals(valsSEXP);
    Rcpp::traits::input_parameter< std::string >::type fname(fnameSEXP);
    Rcpp::traits::input_parameter< int >::type ef_search(ef_searchSEXP);
    Rcpp::traits::input_parameter< std::string >::type dtype(dtypeSEXP);
    Rcpp::traits::input_parameter< int >::type nn(nnSEXP);
    Rcpp::traits::input_parameter< bool >::type get_index(get_indexSEXP);
    Rcpp::traits::input_parameter< bool >::type get_distance(get_distanceSEXP);
    rcpp_result_gen = Rcpp::wrap(query_hnsw(query, vals, fname, ef_search, dtype, nn, get_index, get_distance));
    return rcpp_result_gen;
END_RCPP
}
// query_dist_to_hnsw
SEXP query_dist_to_hnsw(Rcpp::NumericMatrix query, Rcpp::NumericMatrix vals, std::string fname, int ef_search, std::string dtype, int nn);
RcppExport SEXP _BiocNeighbors_query_dist_to_hnsw(SEXP querySEXP, SEXP valsSEXP, SEXP fnameSEXP, SEXP ef_searchSEXP, SEXP dtypeSEXP, SEXP nnSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type query(querySEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type vals(valsSEXP);
    Rcpp::traits::input_parameter< std::string >::type fname(fnameSEXP);
    Rcpp::traits::input_parameter< int >::type ef_search(ef_searchSEXP);
    Rcpp::traits::input_parameter< std::string >::type dtype(dtypeSEXP);
    Rcpp::traits::input_parameter< int >::type nn(nnSEXP);
    rcpp_result_gen = Rcpp::wrap(query_dist_to_hnsw(query, vals, fname, ef_search, dtype, nn));
    return rcpp_result_gen;
END_RCPP
}
// query_kmknn
Rcpp::RObject query_kmknn(Rcpp::NumericMatrix query, Rcpp::NumericMatrix X, Rcpp::NumericMatrix clust_centers, Rcpp::List clust_info, std::string dtype, int nn, bool get_index, bool get_distance);
RcppExport SEXP _BiocNeighbors_query_kmknn(SEXP querySEXP, SEXP XSEXP, SEXP clust_centersSEXP, SEXP clust_infoSEXP, SEXP dtypeSEXP, SEXP nnSEXP, SEXP get_indexSEXP, SEXP get_distanceSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type query(querySEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type X(XSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type clust_centers(clust_centersSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type clust_info(clust_infoSEXP);
    Rcpp::traits::input_parameter< std::string >::type dtype(dtypeSEXP);
    Rcpp::traits::input_parameter< int >::type nn(nnSEXP);
    Rcpp::traits::input_parameter< bool >::type get_index(get_indexSEXP);
    Rcpp::traits::input_parameter< bool >::type get_distance(get_distanceSEXP);
    rcpp_result_gen = Rcpp::wrap(query_kmknn(query, X, clust_centers, clust_info, dtype, nn, get_index, get_distance));
    return rcpp_result_gen;
END_RCPP
}
// query_dist_to_kmknn
Rcpp::RObject query_dist_to_kmknn(Rcpp::NumericMatrix query, Rcpp::NumericMatrix X, Rcpp::NumericMatrix clust_centers, Rcpp::List clust_info, std::string dtype, int nn);
RcppExport SEXP _BiocNeighbors_query_dist_to_kmknn(SEXP querySEXP, SEXP XSEXP, SEXP clust_centersSEXP, SEXP clust_infoSEXP, SEXP dtypeSEXP, SEXP nnSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type query(querySEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type X(XSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type clust_centers(clust_centersSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type clust_info(clust_infoSEXP);
    Rcpp::traits::input_parameter< std::string >::type dtype(dtypeSEXP);
    Rcpp::traits::input_parameter< int >::type nn(nnSEXP);
    rcpp_result_gen = Rcpp::wrap(query_dist_to_kmknn(query, X, clust_centers, clust_info, dtype, nn));
    return rcpp_result_gen;
END_RCPP
}
// range_query_kmknn
Rcpp::RObject range_query_kmknn(Rcpp::NumericMatrix query, Rcpp::NumericMatrix X, Rcpp::NumericMatrix clust_centers, Rcpp::List clust_info, std::string dtype, Rcpp::NumericVector dist_thresh, bool get_index, bool get_distance);
RcppExport SEXP _BiocNeighbors_range_query_kmknn(SEXP querySEXP, SEXP XSEXP, SEXP clust_centersSEXP, SEXP clust_infoSEXP, SEXP dtypeSEXP, SEXP dist_threshSEXP, SEXP get_indexSEXP, SEXP get_distanceSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type query(querySEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type X(XSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type clust_centers(clust_centersSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type clust_info(clust_infoSEXP);
    Rcpp::traits::input_parameter< std::string >::type dtype(dtypeSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type dist_thresh(dist_threshSEXP);
    Rcpp::traits::input_parameter< bool >::type get_index(get_indexSEXP);
    Rcpp::traits::input_parameter< bool >::type get_distance(get_distanceSEXP);
    rcpp_result_gen = Rcpp::wrap(range_query_kmknn(query, X, clust_centers, clust_info, dtype, dist_thresh, get_index, get_distance));
    return rcpp_result_gen;
END_RCPP
}
// query_vptree
Rcpp::RObject query_vptree(Rcpp::NumericMatrix query, Rcpp::NumericMatrix X, Rcpp::List nodes, std::string dtype, int nn, bool get_index, bool get_distance);
RcppExport SEXP _BiocNeighbors_query_vptree(SEXP querySEXP, SEXP XSEXP, SEXP nodesSEXP, SEXP dtypeSEXP, SEXP nnSEXP, SEXP get_indexSEXP, SEXP get_distanceSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type query(querySEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type X(XSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type nodes(nodesSEXP);
    Rcpp::traits::input_parameter< std::string >::type dtype(dtypeSEXP);
    Rcpp::traits::input_parameter< int >::type nn(nnSEXP);
    Rcpp::traits::input_parameter< bool >::type get_index(get_indexSEXP);
    Rcpp::traits::input_parameter< bool >::type get_distance(get_distanceSEXP);
    rcpp_result_gen = Rcpp::wrap(query_vptree(query, X, nodes, dtype, nn, get_index, get_distance));
    return rcpp_result_gen;
END_RCPP
}
// query_dist_to_vptree
Rcpp::RObject query_dist_to_vptree(Rcpp::NumericMatrix query, Rcpp::NumericMatrix X, Rcpp::List nodes, std::string dtype, int nn);
RcppExport SEXP _BiocNeighbors_query_dist_to_vptree(SEXP querySEXP, SEXP XSEXP, SEXP nodesSEXP, SEXP dtypeSEXP, SEXP nnSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type query(querySEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type X(XSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type nodes(nodesSEXP);
    Rcpp::traits::input_parameter< std::string >::type dtype(dtypeSEXP);
    Rcpp::traits::input_parameter< int >::type nn(nnSEXP);
    rcpp_result_gen = Rcpp::wrap(query_dist_to_vptree(query, X, nodes, dtype, nn));
    return rcpp_result_gen;
END_RCPP
}
// range_query_vptree
Rcpp::RObject range_query_vptree(Rcpp::NumericMatrix query, Rcpp::NumericMatrix X, Rcpp::List nodes, std::string dtype, Rcpp::NumericVector dist_thresh, bool get_index, bool get_distance);
RcppExport SEXP _BiocNeighbors_range_query_vptree(SEXP querySEXP, SEXP XSEXP, SEXP nodesSEXP, SEXP dtypeSEXP, SEXP dist_threshSEXP, SEXP get_indexSEXP, SEXP get_distanceSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type query(querySEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type X(XSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type nodes(nodesSEXP);
    Rcpp::traits::input_parameter< std::string >::type dtype(dtypeSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type dist_thresh(dist_threshSEXP);
    Rcpp::traits::input_parameter< bool >::type get_index(get_indexSEXP);
    Rcpp::traits::input_parameter< bool >::type get_distance(get_distanceSEXP);
    rcpp_result_gen = Rcpp::wrap(range_query_vptree(query, X, nodes, dtype, dist_thresh, get_index, get_distance));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_BiocNeighbors_build_annoy", (DL_FUNC) &_BiocNeighbors_build_annoy, 4},
    {"_BiocNeighbors_build_hnsw", (DL_FUNC) &_BiocNeighbors_build_hnsw, 5},
    {"_BiocNeighbors_build_vptree", (DL_FUNC) &_BiocNeighbors_build_vptree, 2},
    {"_BiocNeighbors_find_annoy", (DL_FUNC) &_BiocNeighbors_find_annoy, 8},
    {"_BiocNeighbors_find_dist_to_annoy", (DL_FUNC) &_BiocNeighbors_find_dist_to_annoy, 6},
    {"_BiocNeighbors_find_hnsw", (DL_FUNC) &_BiocNeighbors_find_hnsw, 8},
    {"_BiocNeighbors_find_dist_to_hnsw", (DL_FUNC) &_BiocNeighbors_find_dist_to_hnsw, 6},
    {"_BiocNeighbors_find_kmknn", (DL_FUNC) &_BiocNeighbors_find_kmknn, 8},
    {"_BiocNeighbors_find_dist_to_kmknn", (DL_FUNC) &_BiocNeighbors_find_dist_to_kmknn, 6},
    {"_BiocNeighbors_range_find_kmknn", (DL_FUNC) &_BiocNeighbors_range_find_kmknn, 8},
    {"_BiocNeighbors_find_vptree", (DL_FUNC) &_BiocNeighbors_find_vptree, 7},
    {"_BiocNeighbors_find_dist_to_vptree", (DL_FUNC) &_BiocNeighbors_find_dist_to_vptree, 5},
    {"_BiocNeighbors_range_find_vptree", (DL_FUNC) &_BiocNeighbors_range_find_vptree, 7},
    {"_BiocNeighbors_query_annoy", (DL_FUNC) &_BiocNeighbors_query_annoy, 8},
    {"_BiocNeighbors_query_dist_to_annoy", (DL_FUNC) &_BiocNeighbors_query_dist_to_annoy, 6},
    {"_BiocNeighbors_query_hnsw", (DL_FUNC) &_BiocNeighbors_query_hnsw, 8},
    {"_BiocNeighbors_query_dist_to_hnsw", (DL_FUNC) &_BiocNeighbors_query_dist_to_hnsw, 6},
    {"_BiocNeighbors_query_kmknn", (DL_FUNC) &_BiocNeighbors_query_kmknn, 8},
    {"_BiocNeighbors_query_dist_to_kmknn", (DL_FUNC) &_BiocNeighbors_query_dist_to_kmknn, 6},
    {"_BiocNeighbors_range_query_kmknn", (DL_FUNC) &_BiocNeighbors_range_query_kmknn, 8},
    {"_BiocNeighbors_query_vptree", (DL_FUNC) &_BiocNeighbors_query_vptree, 7},
    {"_BiocNeighbors_query_dist_to_vptree", (DL_FUNC) &_BiocNeighbors_query_dist_to_vptree, 5},
    {"_BiocNeighbors_range_query_vptree", (DL_FUNC) &_BiocNeighbors_range_query_vptree, 7},
    {NULL, NULL, 0}
};

RcppExport void R_init_BiocNeighbors(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
