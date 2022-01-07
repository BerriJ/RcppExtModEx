#include <RcppArmadillo.h>
#include "foo.h"
#include "RcppExtModEx_types.h"

//' @title Provide a Matrix and Return a Matrix
//'
//' @description This function demonstrates how a Matrix is passed to C++ as
//' a map. And how the C++ map is returned to R
//' as Matrix.
//'
//' @details Conversion from R Matrix to C++ std::map<std::string, arma::colvec>
//' is handled by Rcpp as and wrap functions defined in RcppExtModEx_types.cpp
//' and RcppExtModEx_types.h.
//'
//' @param mymap A Matrix with column names. The column names are used as keys
//' in the C++ map.
//'
//' @export
// [[Rcpp::export]]
std::map<std::string, arma::colvec> mapIn_and_mapOut(
    const std::map<std::string, arma::colvec> &mymap)
{
    return mymap;
}

//' @title Create an Instance of the Foo Class
//'
//' @description This function demonstrates how a Foo object is created and
//' returned to R.
//'
//' @details Using Foo as C++ return value is possible due to exposing the class
//' with RCPP_EXPOSED_CLASS(Foo) in RcppExtModEx_types.h.
//'
//' @export
// [[Rcpp::export]]
Foo makeFoo()
{
    Foo instance;
    return instance;
}

//' @title Extract the testmap Field of a Foo Class Instance
//'
//' @description This function takes an instance of the Foo class and returns
//' the testmap field.
//'
//' @details What is needed is: 1) exposing Foo by setting
//' RCPP_EXPOSED_CLASS(Foo) in RcppExtModEx_types.h, and 2) creating a
//' custom wrap handler in RcppExtModEx_types.cpp and RcppExtModEx_types.h.
//'
//' @param instance An instance of the Foo class.
//'
//' @export
// [[Rcpp::export]]
std::map<std::string, arma::colvec> getMap(Foo &instance)
{
    return instance.testmap;
}

//' @title Set the testmap Field of a Foo Class Instance
//'
//' @description This function takes an instance of the Foo class assigns mymap
//' to the testmap field.
//'
//' @details This is possible due to: 1) exposing Foo by
//' setting RCPP_EXPOSED_CLASS(Foo) in RcppExtModEx_types.h, and 2) using
//' the custom as handler defined in RcppExtModEx_types.cpp and
//' RcppExtModEx_types.h.
//'
//' @param instance An instance of the Foo class.
//'
//' @param mymap A Matrix with column names. The column names are used as keys
//' in the C++ map.
//'
//' @export
// [[Rcpp::export]]
void setMap(Foo &instance, const std::map<std::string, arma::colvec> &mymap)
{
    instance.testmap = mymap;
}
