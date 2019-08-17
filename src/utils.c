#include "cshared.h"
#include "utils.h"

SEXP cshared_shared_empty_int = NULL;

SEXP cshared_init_utils() {
  cshared_shared_empty_int = Rf_allocVector(INTSXP, 0);
  R_PreserveObject(cshared_shared_empty_int);
  MARK_NOT_MUTABLE(cshared_shared_empty_int);

  Rprintf("Initialized!");

  return R_NilValue;
}
