// Generated by cpp11: do not edit by hand


#include "cpp11/declarations.hpp"

// escapeExamples.cpp
std::string escapeExamples(std::string x);
extern "C" SEXP _roxygen2_escapeExamples(SEXP x) {
  BEGIN_CPP11
    return cpp11::as_sexp(escapeExamples(cpp11::unmove(cpp11::as_cpp<std::string>(x))));
  END_CPP11
}
// isComplete.cpp
int findEndOfTag(std::string string, bool is_code);
extern "C" SEXP _roxygen2_findEndOfTag(SEXP string, SEXP is_code) {
  BEGIN_CPP11
    return cpp11::as_sexp(findEndOfTag(cpp11::unmove(cpp11::as_cpp<std::string>(string)), cpp11::unmove(cpp11::as_cpp<bool>(is_code))));
  END_CPP11
}
// isComplete.cpp
bool rdComplete(std::string string, bool is_code);
extern "C" SEXP _roxygen2_rdComplete(SEXP string, SEXP is_code) {
  BEGIN_CPP11
    return cpp11::as_sexp(rdComplete(cpp11::unmove(cpp11::as_cpp<std::string>(string)), cpp11::unmove(cpp11::as_cpp<bool>(is_code))));
  END_CPP11
}
// leadingSpaces.cpp
cpp11::integers leadingSpaces(cpp11::strings lines);
extern "C" SEXP _roxygen2_leadingSpaces(SEXP lines) {
  BEGIN_CPP11
    return cpp11::as_sexp(leadingSpaces(cpp11::unmove(cpp11::as_cpp<cpp11::strings>(lines))));
  END_CPP11
}
// parser2.cpp
cpp11::list tokenise_block(cpp11::strings lines, std::string file, int offset);
extern "C" SEXP _roxygen2_tokenise_block(SEXP lines, SEXP file, SEXP offset) {
  BEGIN_CPP11
    return cpp11::as_sexp(tokenise_block(cpp11::unmove(cpp11::as_cpp<cpp11::strings>(lines)), cpp11::unmove(cpp11::as_cpp<std::string>(file)), cpp11::unmove(cpp11::as_cpp<int>(offset))));
  END_CPP11
}
// parser2.cpp
cpp11::strings find_includes(std::string path);
extern "C" SEXP _roxygen2_find_includes(SEXP path) {
  BEGIN_CPP11
    return cpp11::as_sexp(find_includes(cpp11::unmove(cpp11::as_cpp<std::string>(path))));
  END_CPP11
}
// wrapUsage.cpp
std::string wrapUsage(std::string string, int width, int indent);
extern "C" SEXP _roxygen2_wrapUsage(SEXP string, SEXP width, SEXP indent) {
  BEGIN_CPP11
    return cpp11::as_sexp(wrapUsage(cpp11::unmove(cpp11::as_cpp<std::string>(string)), cpp11::unmove(cpp11::as_cpp<int>(width)), cpp11::unmove(cpp11::as_cpp<int>(indent))));
  END_CPP11
}

extern "C" {
/* .Call calls */
extern SEXP _roxygen2_escapeExamples(SEXP);
extern SEXP _roxygen2_find_includes(SEXP);
extern SEXP _roxygen2_findEndOfTag(SEXP, SEXP);
extern SEXP _roxygen2_leadingSpaces(SEXP);
extern SEXP _roxygen2_rdComplete(SEXP, SEXP);
extern SEXP _roxygen2_tokenise_block(SEXP, SEXP, SEXP);
extern SEXP _roxygen2_wrapUsage(SEXP, SEXP, SEXP);

static const R_CallMethodDef CallEntries[] = {
    {"_roxygen2_escapeExamples", (DL_FUNC) &_roxygen2_escapeExamples, 1},
    {"_roxygen2_find_includes",  (DL_FUNC) &_roxygen2_find_includes,  1},
    {"_roxygen2_findEndOfTag",   (DL_FUNC) &_roxygen2_findEndOfTag,   2},
    {"_roxygen2_leadingSpaces",  (DL_FUNC) &_roxygen2_leadingSpaces,  1},
    {"_roxygen2_rdComplete",     (DL_FUNC) &_roxygen2_rdComplete,     2},
    {"_roxygen2_tokenise_block", (DL_FUNC) &_roxygen2_tokenise_block, 3},
    {"_roxygen2_wrapUsage",      (DL_FUNC) &_roxygen2_wrapUsage,      3},
    {NULL, NULL, 0}
};
}

extern "C" void R_init_roxygen2(DllInfo* dll){
  R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
  R_useDynamicSymbols(dll, FALSE);
}

