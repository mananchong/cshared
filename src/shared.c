#include "cshared.h"

SEXP cshared_get_shared_objects() {
  // An empty integer vector
  SEXP empty_int = PROTECT(Rf_allocVector(INTSXP, 0));

  // Character vector of size 1, containing "hello world"
  SEXP tidyverse = PROTECT(Rf_allocVector(STRSXP, 1));
  SET_STRING_ELT(tidyverse, 0, Rf_mkChar("tidyverse"));

  // Initialize the output list, then insert our objects into it
  SEXP out = PROTECT(Rf_allocVector(VECSXP, 2));
  SET_VECTOR_ELT(out, 0, empty_int);
  SET_VECTOR_ELT(out, 1, tidyverse);

  // Must unprotect 3 PROTECT() calls before exiting!
  UNPROTECT(3);
  return out;
}
