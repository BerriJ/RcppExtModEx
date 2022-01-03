#ifndef foo_h
#define foo_h

#include <RcppArmadillo.h>

class Foo
{
public:
    // Initializer list is optional but recommended as it sets the initial size
    // of the map. If not set, map size will be determined by whatever is left
    // in memory.
    std::map<std::string, arma::colvec> testmap{{{"0", {0}}}};

    // Constructors
    Foo() = default; // Default constructor

    // Methods
    std::map<std::string, arma::colvec> getMap()
    {
        return testmap;
    }
};

#endif