
#include <Rcpp.h>

// forward declarations
namespace Rcpp {
  template <> std::map<std::string, NumericVector> as(SEXP matsexp);
  template <> SEXP wrap(const std::map<std::string, NumericVector> & mymap);
}
