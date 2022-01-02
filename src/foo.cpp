#include <RcppArmadillo.h>

class Foo
{
public:
    std::map<std::string, arma::vec> testmap;
    Foo() = default;
};

RCPP_MODULE(FooEx)
{
    using namespace Rcpp;
    class_<Foo>("Foo")
        .constructor()
        .field("testmap", &Foo::testmap);
}
