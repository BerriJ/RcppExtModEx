
#ifndef RcppExtModEx_types_h
#define RcppExtModEx_types_h

#include <RcppArmadillo.h>

// forward declarations
namespace Rcpp
{
  template <>
  std::map<std::string, arma::colvec> as(SEXP matsexp);
  template <>
  SEXP wrap(const std::map<std::string, arma::colvec> &mymap);
}

#include "foo.h"

// Expose online class
RCPP_EXPOSED_CLASS(Foo)

#endif