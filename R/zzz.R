## usethis namespace: start
#' @useDynLib RcppExtModEx, .registration = TRUE
#' @import Rcpp methods
## usethis namespace: end
NULL

#' @name Foo
#' @title Foo class
#' @importFrom Rcpp loadModule
#' @export Foo
loadModule("FooEx", TRUE)