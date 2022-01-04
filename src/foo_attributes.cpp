#include <RcppArmadillo.h>
#include "foo.h"
#include "RcppExtModEx_types.h"

//' @export
// [[Rcpp::export]]
std::map<std::string, arma::colvec> mapIn_and_mapOut(
    const std::map<std::string, arma::colvec> &mymap)
{
    return mymap;
}

//' @export
// [[Rcpp::export]]
Foo makeFoo()
{
    Foo instance;
    return instance;
}

//' @export
// [[Rcpp::export]]
std::map<std::string, arma::colvec> getMap(Foo &instance)
{
    return instance.testmap;
}

//' @export
// [[Rcpp::export]]
void setMap(Foo &instance, const std::map<std::string, arma::colvec> &mymap)
{
    instance.testmap = mymap;
}