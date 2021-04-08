// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// calc_ll_threaded
Rcpp::List calc_ll_threaded(const Rcpp::NumericVector& ll, const Rcpp::NumericVector& mm, const Rcpp::NumericMatrix& Q, const Rcpp::NumericVector& ances, const Rcpp::NumericMatrix& for_time, const Rcpp::NumericMatrix& states, int num_threads);
RcppExport SEXP _secsseCPP_calc_ll_threaded(SEXP llSEXP, SEXP mmSEXP, SEXP QSEXP, SEXP ancesSEXP, SEXP for_timeSEXP, SEXP statesSEXP, SEXP num_threadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type ll(llSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type mm(mmSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix& >::type Q(QSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type ances(ancesSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix& >::type for_time(for_timeSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix& >::type states(statesSEXP);
    Rcpp::traits::input_parameter< int >::type num_threads(num_threadsSEXP);
    rcpp_result_gen = Rcpp::wrap(calc_ll_threaded(ll, mm, Q, ances, for_time, states, num_threads));
    return rcpp_result_gen;
END_RCPP
}
// calThruNodes_cpp
Rcpp::List calThruNodes_cpp(const NumericVector& ances, const NumericMatrix& states_R, const NumericMatrix& forTime_R, const NumericVector& lambdas, const NumericVector& mus, const NumericMatrix& Q, int num_threads);
RcppExport SEXP _secsseCPP_calThruNodes_cpp(SEXP ancesSEXP, SEXP states_RSEXP, SEXP forTime_RSEXP, SEXP lambdasSEXP, SEXP musSEXP, SEXP QSEXP, SEXP num_threadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericVector& >::type ances(ancesSEXP);
    Rcpp::traits::input_parameter< const NumericMatrix& >::type states_R(states_RSEXP);
    Rcpp::traits::input_parameter< const NumericMatrix& >::type forTime_R(forTime_RSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type lambdas(lambdasSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type mus(musSEXP);
    Rcpp::traits::input_parameter< const NumericMatrix& >::type Q(QSEXP);
    Rcpp::traits::input_parameter< int >::type num_threads(num_threadsSEXP);
    rcpp_result_gen = Rcpp::wrap(calThruNodes_cpp(ances, states_R, forTime_R, lambdas, mus, Q, num_threads));
    return rcpp_result_gen;
END_RCPP
}
// calc_cla_ll_threaded
Rcpp::List calc_cla_ll_threaded(const Rcpp::NumericVector& ances, const Rcpp::NumericMatrix& states_R, const Rcpp::NumericMatrix& forTime_R, const Rcpp::List& lambdas, const Rcpp::NumericVector& mus, const Rcpp::NumericMatrix& Q, int num_threads);
RcppExport SEXP _secsseCPP_calc_cla_ll_threaded(SEXP ancesSEXP, SEXP states_RSEXP, SEXP forTime_RSEXP, SEXP lambdasSEXP, SEXP musSEXP, SEXP QSEXP, SEXP num_threadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type ances(ancesSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix& >::type states_R(states_RSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix& >::type forTime_R(forTime_RSEXP);
    Rcpp::traits::input_parameter< const Rcpp::List& >::type lambdas(lambdasSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type mus(musSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix& >::type Q(QSEXP);
    Rcpp::traits::input_parameter< int >::type num_threads(num_threadsSEXP);
    rcpp_result_gen = Rcpp::wrap(calc_cla_ll_threaded(ances, states_R, forTime_R, lambdas, mus, Q, num_threads));
    return rcpp_result_gen;
END_RCPP
}
// cla_calThruNodes_cpp
Rcpp::List cla_calThruNodes_cpp(const Rcpp::NumericVector& ances, const Rcpp::NumericMatrix& states_R, const Rcpp::NumericMatrix& forTime_R, const Rcpp::List& lambdas, const Rcpp::NumericVector& mus, const Rcpp::NumericMatrix& Q);
RcppExport SEXP _secsseCPP_cla_calThruNodes_cpp(SEXP ancesSEXP, SEXP states_RSEXP, SEXP forTime_RSEXP, SEXP lambdasSEXP, SEXP musSEXP, SEXP QSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type ances(ancesSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix& >::type states_R(states_RSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix& >::type forTime_R(forTime_RSEXP);
    Rcpp::traits::input_parameter< const Rcpp::List& >::type lambdas(lambdasSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type mus(musSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix& >::type Q(QSEXP);
    rcpp_result_gen = Rcpp::wrap(cla_calThruNodes_cpp(ances, states_R, forTime_R, lambdas, mus, Q));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_secsseCPP_calc_ll_threaded", (DL_FUNC) &_secsseCPP_calc_ll_threaded, 7},
    {"_secsseCPP_calThruNodes_cpp", (DL_FUNC) &_secsseCPP_calThruNodes_cpp, 7},
    {"_secsseCPP_calc_cla_ll_threaded", (DL_FUNC) &_secsseCPP_calc_cla_ll_threaded, 7},
    {"_secsseCPP_cla_calThruNodes_cpp", (DL_FUNC) &_secsseCPP_cla_calThruNodes_cpp, 6},
    {NULL, NULL, 0}
};

RcppExport void R_init_secsseCPP(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
