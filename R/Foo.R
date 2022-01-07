#' @name Foo
#' @title Foo class
#' @description This class demonstrates how to expose a C++ class to R
#' using Rcpp Modules.
#' @field testmap A std::map<std::string, arma::colvec> on the C++ side,
#' a Matrix with colnames in R.
#' @details The "testmap" field is a C++ std::map<std::string, arma::colvec>
#' object. It is exposed to R as a Matrix. Conversion between C++ and R is
#' handled by custom as and wrap handlers defined in RcppExtModEx_types.cpp
#' and RcppExtModEx_types.h. The class itself is exposed to R using Rcpp Modules
#' see foo_module.cpp.
#' @importFrom Rcpp loadModule
#' @export Foo
loadModule("FooEx", TRUE)