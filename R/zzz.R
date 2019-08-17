.onLoad <- function(libname, pkgname) {
  .Call(cshared_init_utils)
}
