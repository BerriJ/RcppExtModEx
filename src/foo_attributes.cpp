#include <RcppArmadillo.h>
#include "foo.h"
#include "RcppFoo_types.h"

// [[Rcpp::export]]
std::map<std::string, arma::colvec> mapIn_and_mapOut(
    const std::map<std::string, arma::colvec> &mymap)
{
    return mymap;
}

// [[Rcpp::export]]
Foo makeFoo()
{
    Foo instance;
    return instance;
}

// [[Rcpp::export]]
std::map<std::string, arma::colvec> getMap(Foo &instance)
{
    return instance.testmap;
}

// [[Rcpp::export]]
void setMap(Foo &instance, const std::map<std::string, arma::colvec> &mymap)
{
    instance.testmap = mymap;
}