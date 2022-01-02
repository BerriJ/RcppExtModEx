#include <RcppArmadillo.h>

// [[Rcpp::export]]
std::map<std::string, arma::vec> in_and_out(std::map<std::string, arma::vec> &map)
{
    return map;
}