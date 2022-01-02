// [[Rcpp::depends(RcppArmadillo)]]
#include <RcppArmadillo.h>

// forward declarations
namespace Rcpp
{
    template <>
    inline std::map<std::string, arma::vec> as(SEXP matsexp)
    {
        Rcpp::NumericMatrix mat(matsexp);

        std::vector<std::string> cn = Rcpp::as<std::vector<std::string>>(Rcpp::colnames(mat));

        std::map<std::string, arma::vec> map;

        for (int n = 0; n < mat.ncol(); n++)
        {
            map[cn[n]] = mat.column(n);
        }

        return map;
    }

    template <>
    inline SEXP wrap(const std::map<std::string, arma::vec> &map)
    {
        Rcpp::NumericMatrix mat(map.begin()->second.n_elem, map.size());
        // Get all keys of the map
        std::vector<std::string> keys;
        for (auto const &x : map)
        {
            keys.push_back(x.first);
        }
        // Get all values of the map
        std::vector<arma::vec> values;
        for (auto const &x : map)
        {
            values.push_back(x.second);
        }
        // Fill the matrix
        for (int n = 0; n < mat.ncol(); n++)
        {
            for (int m = 0; m < mat.nrow(); m++)
            {
                mat(m, n) = values[n](m);
            }
        }
        // Set column names
        Rcpp::CharacterVector colnames(keys.size());
        for (int n = 0; n < keys.size(); n++)
        {
            colnames[n] = keys[n];
        }
        Rcpp::colnames(mat) = colnames;

        return Rcpp::wrap(mat);
    }
}