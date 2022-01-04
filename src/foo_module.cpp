#include <RcppArmadillo.h>
#include "foo.h"
#include "RcppExtModEx_types.h"

RCPP_MODULE(FooEx)
{
    using namespace Rcpp;
    class_<Foo>("Foo")
        .constructor()
        .method("getMap", &Foo::getMap)
        .field("testmap", &Foo::testmap);
}