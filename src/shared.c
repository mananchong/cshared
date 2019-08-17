#include "cshared.h"
#include "utils.h" // To access `cshared_shared_empty_int`

SEXP cshared_get_shared_objects() {
  // Character vector of size 1, containing "hello world"
  SEXP tidyverse = PROTECT(Rf_allocVector(STRSXP, 1));
  SET_STRING_ELT(tidyverse, 0, Rf_mkChar("tidyverse"));

  SEXP out = PROTECT(Rf_allocVector(VECSXP, 2));
  SET_VECTOR_ELT(out, 0, cshared_shared_empty_int); // <- using it here!
  SET_VECTOR_ELT(out, 1, tidyverse);

  UNPROTECT(2);
  return out;
}
