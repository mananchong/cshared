#include "cshared.h"
#include "utils.h"

SEXP cshared_shared_empty_int = NULL;

// This is new
SEXP strings_tidyverse = NULL;

SEXP cshared_init_utils() {
  cshared_shared_empty_int = Rf_allocVector(INTSXP, 0);
  R_PreserveObject(cshared_shared_empty_int);
  MARK_NOT_MUTABLE(cshared_shared_empty_int);

  // This is new
  strings_tidyverse = Rf_allocVector(STRSXP, 1);
  R_PreserveObject(strings_tidyverse);
  SET_STRING_ELT(strings_tidyverse, 0, Rf_mkChar("tidyverse"));
  MARK_NOT_MUTABLE(strings_tidyverse);

  return R_NilValue;
}
