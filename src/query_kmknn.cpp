#include "kmknn.h"
#include "distances.h"
#include "query_knn.h"
#include "query_dist_to_k.h"
#include "range_query.h"

// [[Rcpp::export(rng=false)]]
Rcpp::RObject query_kmknn(Rcpp::NumericMatrix query, Rcpp::NumericMatrix X, Rcpp::NumericMatrix clust_centers, Rcpp::List clust_info, 
    std::string dtype, int nn, bool get_index, bool get_distance) 
{
    if (dtype=="Manhattan") {
        Kmknn<BNManhattan> nn_finder(X, clust_centers, clust_info);
        return query_knn(nn_finder, query, nn, get_index, get_distance);
     } else {
        Kmknn<BNEuclidean> nn_finder(X, clust_centers, clust_info);
        return query_knn(nn_finder, query, nn, get_index, get_distance);
    }
}

// [[Rcpp::export(rng=false)]]
Rcpp::RObject query_dist_to_kmknn(Rcpp::NumericMatrix query, Rcpp::NumericMatrix X, Rcpp::NumericMatrix clust_centers, Rcpp::List clust_info, 
    std::string dtype, int nn)
{
    if (dtype=="Manhattan") {
        Kmknn<BNManhattan> nn_finder(X, clust_centers, clust_info, false);
        return query_dist_to_k(nn_finder, query, nn);
     } else {
        Kmknn<BNEuclidean> nn_finder(X, clust_centers, clust_info, false);
        return query_dist_to_k(nn_finder, query, nn);
    }
}

// [[Rcpp::export(rng=false)]]
Rcpp::RObject range_query_kmknn(Rcpp::NumericMatrix query, Rcpp::NumericMatrix X, Rcpp::NumericMatrix clust_centers, Rcpp::List clust_info,
    std::string dtype, Rcpp::NumericVector dist_thresh, bool get_index, bool get_distance)
{
    if (dtype=="Manhattan") {
        Kmknn<BNManhattan> n_finder(X, clust_centers, clust_info);
        return range_query_exact(n_finder, query, dist_thresh, get_index, get_distance);
     } else {
        Kmknn<BNEuclidean> n_finder(X, clust_centers, clust_info);
        return range_query_exact(n_finder, query, dist_thresh, get_index, get_distance);
    }
}
