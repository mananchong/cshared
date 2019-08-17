#include "cshared.h"
#include "utils.h" // To access `cshared_shared_empty_int`

SEXP cshared_get_shared_objects() {
  SEXP out = PROTECT(Rf_allocVector(VECSXP, 2));
  SET_VECTOR_ELT(out, 0, cshared_shared_empty_int);
  SET_VECTOR_ELT(out, 1, strings_tidyverse);

  UNPROTECT(1);
  return out;
}
