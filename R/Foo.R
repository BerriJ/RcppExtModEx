#' @name Foo
#' @title Foo class
#' @description This class demonstrates how to expose a C++ class to R
#' using Rcpp Modules. The class contains a field "testmap". The latter
#' is a std::map<std::string, arma::colvec> and is exposed to R as a Matrix.
#' Conversion between C++ and R is handled by custom as and wrap handlers
#' defined in RcppExtModEx_types.cpp and RcppExtModEx_types.h.
#' @importFrom Rcpp loadModule
#' @export Foo
loadModule("FooEx", TRUE)