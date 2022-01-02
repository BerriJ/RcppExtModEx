## usethis namespace: start
#' @useDynLib anRpackage, .registration = TRUE
#' @import Rcpp methods
## usethis namespace: end
NULL

#' @name Foo
#' @title Foo class
#' @importFrom Rcpp loadModule
#' @export Foo
loadModule("FooEx", TRUE)