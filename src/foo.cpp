#include <anRpackage.h>

class Foo
{
public:
    Foo() = default;
    std::map<std::string, Rcpp::NumericVector> testmap;
};

RCPP_MODULE(FooEx)
{
    using namespace Rcpp;
    class_<Foo>("Foo")
        .constructor()
        .field("testmap", &Foo::testmap);
}