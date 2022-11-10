// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// ct_condition_cla
Rcpp::NumericVector ct_condition_cla(const Rcpp::NumericVector& y, double t, const Rcpp::List& ll, const Rcpp::NumericVector& mm, const Rcpp::NumericMatrix& Q, std::string method, double atol, double rtol);
RcppExport SEXP _secsse_ct_condition_cla(SEXP ySEXP, SEXP tSEXP, SEXP llSEXP, SEXP mmSEXP, SEXP QSEXP, SEXP methodSEXP, SEXP atolSEXP, SEXP rtolSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type y(ySEXP);
    Rcpp::traits::input_parameter< double >::type t(tSEXP);
    Rcpp::traits::input_parameter< const Rcpp::List& >::type ll(llSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type mm(mmSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix& >::type Q(QSEXP);
    Rcpp::traits::input_parameter< std::string >::type method(methodSEXP);
    Rcpp::traits::input_parameter< double >::type atol(atolSEXP);
    Rcpp::traits::input_parameter< double >::type rtol(rtolSEXP);
    rcpp_result_gen = Rcpp::wrap(ct_condition_cla(y, t, ll, mm, Q, method, atol, rtol));
    return rcpp_result_gen;
END_RCPP
}
// cla_calThruNodes_cpp
Rcpp::List cla_calThruNodes_cpp(const Rcpp::NumericVector& ances, const Rcpp::NumericMatrix& states_R, const Rcpp::NumericMatrix& forTime_R, const Rcpp::List& lambdas, const Rcpp::NumericVector& mus, const Rcpp::NumericMatrix& Q, std::string method, double atol, double rtol, bool is_complete_tree);
RcppExport SEXP _secsse_cla_calThruNodes_cpp(SEXP ancesSEXP, SEXP states_RSEXP, SEXP forTime_RSEXP, SEXP lambdasSEXP, SEXP musSEXP, SEXP QSEXP, SEXP methodSEXP, SEXP atolSEXP, SEXP rtolSEXP, SEXP is_complete_treeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type ances(ancesSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix& >::type states_R(states_RSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix& >::type forTime_R(forTime_RSEXP);
    Rcpp::traits::input_parameter< const Rcpp::List& >::type lambdas(lambdasSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type mus(musSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix& >::type Q(QSEXP);
    Rcpp::traits::input_parameter< std::string >::type method(methodSEXP);
    Rcpp::traits::input_parameter< double >::type atol(atolSEXP);
    Rcpp::traits::input_parameter< double >::type rtol(rtolSEXP);
    Rcpp::traits::input_parameter< bool >::type is_complete_tree(is_complete_treeSEXP);
    rcpp_result_gen = Rcpp::wrap(cla_calThruNodes_cpp(ances, states_R, forTime_R, lambdas, mus, Q, method, atol, rtol, is_complete_tree));
    return rcpp_result_gen;
END_RCPP
}
// calc_cla_ll_threaded
Rcpp::List calc_cla_ll_threaded(const Rcpp::NumericVector& ances, const Rcpp::NumericMatrix& states_R, const Rcpp::NumericMatrix& forTime_R, const Rcpp::List& lambdas_R, const Rcpp::NumericVector& mus_R, const Rcpp::NumericMatrix& Q, int num_threads, std::string method, bool is_complete_tree);
RcppExport SEXP _secsse_calc_cla_ll_threaded(SEXP ancesSEXP, SEXP states_RSEXP, SEXP forTime_RSEXP, SEXP lambdas_RSEXP, SEXP mus_RSEXP, SEXP QSEXP, SEXP num_threadsSEXP, SEXP methodSEXP, SEXP is_complete_treeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type ances(ancesSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix& >::type states_R(states_RSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix& >::type forTime_R(forTime_RSEXP);
    Rcpp::traits::input_parameter< const Rcpp::List& >::type lambdas_R(lambdas_RSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type mus_R(mus_RSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix& >::type Q(QSEXP);
    Rcpp::traits::input_parameter< int >::type num_threads(num_threadsSEXP);
    Rcpp::traits::input_parameter< std::string >::type method(methodSEXP);
    Rcpp::traits::input_parameter< bool >::type is_complete_tree(is_complete_treeSEXP);
    rcpp_result_gen = Rcpp::wrap(calc_cla_ll_threaded(ances, states_R, forTime_R, lambdas_R, mus_R, Q, num_threads, method, is_complete_tree));
    return rcpp_result_gen;
END_RCPP
}
// cla_calThruNodes_timezones_cpp
Rcpp::List cla_calThruNodes_timezones_cpp(const Rcpp::NumericVector& ances, const Rcpp::NumericMatrix& states_R, const Rcpp::NumericMatrix& forTime_R, const Rcpp::List& lambdas1, const Rcpp::NumericVector& mus1, const Rcpp::NumericMatrix& Q1, const Rcpp::List& lambdas2, const Rcpp::NumericVector& mus2, const Rcpp::NumericMatrix& Q2, double crit_t, std::string method, double atol, double rtol, bool is_complete_tree);
RcppExport SEXP _secsse_cla_calThruNodes_timezones_cpp(SEXP ancesSEXP, SEXP states_RSEXP, SEXP forTime_RSEXP, SEXP lambdas1SEXP, SEXP mus1SEXP, SEXP Q1SEXP, SEXP lambdas2SEXP, SEXP mus2SEXP, SEXP Q2SEXP, SEXP crit_tSEXP, SEXP methodSEXP, SEXP atolSEXP, SEXP rtolSEXP, SEXP is_complete_treeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type ances(ancesSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix& >::type states_R(states_RSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix& >::type forTime_R(forTime_RSEXP);
    Rcpp::traits::input_parameter< const Rcpp::List& >::type lambdas1(lambdas1SEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type mus1(mus1SEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix& >::type Q1(Q1SEXP);
    Rcpp::traits::input_parameter< const Rcpp::List& >::type lambdas2(lambdas2SEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type mus2(mus2SEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix& >::type Q2(Q2SEXP);
    Rcpp::traits::input_parameter< double >::type crit_t(crit_tSEXP);
    Rcpp::traits::input_parameter< std::string >::type method(methodSEXP);
    Rcpp::traits::input_parameter< double >::type atol(atolSEXP);
    Rcpp::traits::input_parameter< double >::type rtol(rtolSEXP);
    Rcpp::traits::input_parameter< bool >::type is_complete_tree(is_complete_treeSEXP);
    rcpp_result_gen = Rcpp::wrap(cla_calThruNodes_timezones_cpp(ances, states_R, forTime_R, lambdas1, mus1, Q1, lambdas2, mus2, Q2, crit_t, method, atol, rtol, is_complete_tree));
    return rcpp_result_gen;
END_RCPP
}
// calThruNodes_cpp
Rcpp::List calThruNodes_cpp(const NumericVector& ances, const NumericMatrix& states_R, const NumericMatrix& forTime_R, const NumericVector& lambdas, const NumericVector& mus, const NumericMatrix& Q, int num_threads, double abstol, double reltol, std::string method, bool is_complete_tree);
RcppExport SEXP _secsse_calThruNodes_cpp(SEXP ancesSEXP, SEXP states_RSEXP, SEXP forTime_RSEXP, SEXP lambdasSEXP, SEXP musSEXP, SEXP QSEXP, SEXP num_threadsSEXP, SEXP abstolSEXP, SEXP reltolSEXP, SEXP methodSEXP, SEXP is_complete_treeSEXP) {
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
    Rcpp::traits::input_parameter< double >::type abstol(abstolSEXP);
    Rcpp::traits::input_parameter< double >::type reltol(reltolSEXP);
    Rcpp::traits::input_parameter< std::string >::type method(methodSEXP);
    Rcpp::traits::input_parameter< bool >::type is_complete_tree(is_complete_treeSEXP);
    rcpp_result_gen = Rcpp::wrap(calThruNodes_cpp(ances, states_R, forTime_R, lambdas, mus, Q, num_threads, abstol, reltol, method, is_complete_tree));
    return rcpp_result_gen;
END_RCPP
}
// ct_condition
Rcpp::NumericVector ct_condition(const Rcpp::NumericVector& y, const double t, const Rcpp::NumericVector& ll, const Rcpp::NumericVector& mm, const Rcpp::NumericMatrix& Q, const std::string& method, double atol, double rtol);
RcppExport SEXP _secsse_ct_condition(SEXP ySEXP, SEXP tSEXP, SEXP llSEXP, SEXP mmSEXP, SEXP QSEXP, SEXP methodSEXP, SEXP atolSEXP, SEXP rtolSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const double >::type t(tSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type ll(llSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type mm(mmSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix& >::type Q(QSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type method(methodSEXP);
    Rcpp::traits::input_parameter< double >::type atol(atolSEXP);
    Rcpp::traits::input_parameter< double >::type rtol(rtolSEXP);
    rcpp_result_gen = Rcpp::wrap(ct_condition(y, t, ll, mm, Q, method, atol, rtol));
    return rcpp_result_gen;
END_RCPP
}
// calc_ll_threaded
Rcpp::List calc_ll_threaded(const Rcpp::NumericVector& ll, const Rcpp::NumericVector& mm, const Rcpp::NumericMatrix& Q, const Rcpp::NumericVector& ances, const Rcpp::NumericMatrix& for_time, const Rcpp::NumericMatrix& states, int num_threads, std::string method, bool is_complete_tree);
RcppExport SEXP _secsse_calc_ll_threaded(SEXP llSEXP, SEXP mmSEXP, SEXP QSEXP, SEXP ancesSEXP, SEXP for_timeSEXP, SEXP statesSEXP, SEXP num_threadsSEXP, SEXP methodSEXP, SEXP is_complete_treeSEXP) {
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
    Rcpp::traits::input_parameter< std::string >::type method(methodSEXP);
    Rcpp::traits::input_parameter< bool >::type is_complete_tree(is_complete_treeSEXP);
    rcpp_result_gen = Rcpp::wrap(calc_ll_threaded(ll, mm, Q, ances, for_time, states, num_threads, method, is_complete_tree));
    return rcpp_result_gen;
END_RCPP
}
// calThruNodes_timezones_cpp
Rcpp::List calThruNodes_timezones_cpp(const NumericVector& ances, const NumericMatrix& states_R, const NumericMatrix& forTime_R, const NumericVector& lambdas1, const NumericVector& mus1, const NumericMatrix& Q1, const NumericVector& lambdas2, const NumericVector& mus2, const NumericMatrix& Q2, const double crit_t, int num_threads, double abstol, double reltol, std::string method, bool is_complete_tree);
RcppExport SEXP _secsse_calThruNodes_timezones_cpp(SEXP ancesSEXP, SEXP states_RSEXP, SEXP forTime_RSEXP, SEXP lambdas1SEXP, SEXP mus1SEXP, SEXP Q1SEXP, SEXP lambdas2SEXP, SEXP mus2SEXP, SEXP Q2SEXP, SEXP crit_tSEXP, SEXP num_threadsSEXP, SEXP abstolSEXP, SEXP reltolSEXP, SEXP methodSEXP, SEXP is_complete_treeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericVector& >::type ances(ancesSEXP);
    Rcpp::traits::input_parameter< const NumericMatrix& >::type states_R(states_RSEXP);
    Rcpp::traits::input_parameter< const NumericMatrix& >::type forTime_R(forTime_RSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type lambdas1(lambdas1SEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type mus1(mus1SEXP);
    Rcpp::traits::input_parameter< const NumericMatrix& >::type Q1(Q1SEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type lambdas2(lambdas2SEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type mus2(mus2SEXP);
    Rcpp::traits::input_parameter< const NumericMatrix& >::type Q2(Q2SEXP);
    Rcpp::traits::input_parameter< const double >::type crit_t(crit_tSEXP);
    Rcpp::traits::input_parameter< int >::type num_threads(num_threadsSEXP);
    Rcpp::traits::input_parameter< double >::type abstol(abstolSEXP);
    Rcpp::traits::input_parameter< double >::type reltol(reltolSEXP);
    Rcpp::traits::input_parameter< std::string >::type method(methodSEXP);
    Rcpp::traits::input_parameter< bool >::type is_complete_tree(is_complete_treeSEXP);
    rcpp_result_gen = Rcpp::wrap(calThruNodes_timezones_cpp(ances, states_R, forTime_R, lambdas1, mus1, Q1, lambdas2, mus2, Q2, crit_t, num_threads, abstol, reltol, method, is_complete_tree));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_secsse_ct_condition_cla", (DL_FUNC) &_secsse_ct_condition_cla, 8},
    {"_secsse_cla_calThruNodes_cpp", (DL_FUNC) &_secsse_cla_calThruNodes_cpp, 10},
    {"_secsse_calc_cla_ll_threaded", (DL_FUNC) &_secsse_calc_cla_ll_threaded, 9},
    {"_secsse_cla_calThruNodes_timezones_cpp", (DL_FUNC) &_secsse_cla_calThruNodes_timezones_cpp, 14},
    {"_secsse_calThruNodes_cpp", (DL_FUNC) &_secsse_calThruNodes_cpp, 11},
    {"_secsse_ct_condition", (DL_FUNC) &_secsse_ct_condition, 8},
    {"_secsse_calc_ll_threaded", (DL_FUNC) &_secsse_calc_ll_threaded, 9},
    {"_secsse_calThruNodes_timezones_cpp", (DL_FUNC) &_secsse_calThruNodes_timezones_cpp, 15},
    {NULL, NULL, 0}
};

RcppExport void R_init_secsse(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
