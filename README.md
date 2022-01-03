# Custom wrap and as with Modules and Attributes

This Repository contains a demo package which demonstrates:

- Custom `as` and `wrap` handlers using armadillo to convert an R matrix with colnames into a `std::map<std::string, arma::colvec>` and vise-versa
- Using Rcpp Modules to export a `Foo` class (which contains a `std::map<std::string, arma::colvec>` object)
- Using `RCPP_EXPOSED_CLASS(Foo)` to use `Foo` with Rcpp Attributes

# Run It

```
remotes::install_github("BeriJ/RcppFoo")
library(RcppFoo)

A <- matrix(1:9, ncol = 3, dimnames = list(NULL, c("a", "b", "c")))

# Assuring that as and wrap are working:
mapIn_and_mapOut(A)

# Use Foo class with Rcpp Modules
foo_instance_mod <- new(Foo)
str(foo_instance_mod)
print(foo_instance_mod$testmap)
foo_instance_mod$testmap <- A
foo_instance_mod$getMap()

# Use Foo class with Rcpp Attributes
foo_instance_attr <- makeFoo()
str(foo_instance_attr)
setMap(foo_instance_attr, A)
print(foo_instance_attr$testmap)
getMap(foo_instance_attr)

# You can also mix and match as you like
foo <- new(Foo) # This uses Rcpp Modules
setMap(foo, A) # This uses RcppAttributes
foo$getMap() == foo$testmap
```

# Contribute

Feel free to [raise an issue](https://github.com/BerriJ/RcppFoo/issues/new) or create a PR. I'm certainly not an expert in using (R)C++, so I'll be glad to make this code even better with you.