// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppEigen.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// run_single_dichotomous
List run_single_dichotomous(NumericVector model, Eigen::MatrixXd data, Eigen::MatrixXd pr, NumericVector options1, IntegerVector options2);
RcppExport SEXP _ToxicR_run_single_dichotomous(SEXP modelSEXP, SEXP dataSEXP, SEXP prSEXP, SEXP options1SEXP, SEXP options2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type model(modelSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type data(dataSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type pr(prSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type options1(options1SEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type options2(options2SEXP);
    rcpp_result_gen = Rcpp::wrap(run_single_dichotomous(model, data, pr, options1, options2));
    return rcpp_result_gen;
END_RCPP
}
// run_continuous_single
List run_continuous_single(IntegerVector model, Eigen::MatrixXd Y, Eigen::MatrixXd X, Eigen::MatrixXd prior, NumericVector options, IntegerVector dist_type);
RcppExport SEXP _ToxicR_run_continuous_single(SEXP modelSEXP, SEXP YSEXP, SEXP XSEXP, SEXP priorSEXP, SEXP optionsSEXP, SEXP dist_typeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type model(modelSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type Y(YSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type X(XSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type prior(priorSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type options(optionsSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type dist_type(dist_typeSEXP);
    rcpp_result_gen = Rcpp::wrap(run_continuous_single(model, Y, X, prior, options, dist_type));
    return rcpp_result_gen;
END_RCPP
}
// run_continuous_ma_laplace
List run_continuous_ma_laplace(List model_priors, NumericVector model_type, NumericVector dist_type, Eigen::MatrixXd Y, Eigen::MatrixXd X, NumericVector options);
RcppExport SEXP _ToxicR_run_continuous_ma_laplace(SEXP model_priorsSEXP, SEXP model_typeSEXP, SEXP dist_typeSEXP, SEXP YSEXP, SEXP XSEXP, SEXP optionsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type model_priors(model_priorsSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type model_type(model_typeSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type dist_type(dist_typeSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type Y(YSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type X(XSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type options(optionsSEXP);
    rcpp_result_gen = Rcpp::wrap(run_continuous_ma_laplace(model_priors, model_type, dist_type, Y, X, options));
    return rcpp_result_gen;
END_RCPP
}
// run_continuous_ma_mcmc
List run_continuous_ma_mcmc(List model_priors, NumericVector model_type, NumericVector dist_type, Eigen::MatrixXd Y, Eigen::MatrixXd X, NumericVector options);
RcppExport SEXP _ToxicR_run_continuous_ma_mcmc(SEXP model_priorsSEXP, SEXP model_typeSEXP, SEXP dist_typeSEXP, SEXP YSEXP, SEXP XSEXP, SEXP optionsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type model_priors(model_priorsSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type model_type(model_typeSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type dist_type(dist_typeSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type Y(YSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type X(XSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type options(optionsSEXP);
    rcpp_result_gen = Rcpp::wrap(run_continuous_ma_mcmc(model_priors, model_type, dist_type, Y, X, options));
    return rcpp_result_gen;
END_RCPP
}
// run_ma_dichotomous
List run_ma_dichotomous(Eigen::MatrixXd data, List priors, NumericVector models, NumericVector model_p, bool is_MCMC, NumericVector options1, IntegerVector options2);
RcppExport SEXP _ToxicR_run_ma_dichotomous(SEXP dataSEXP, SEXP priorsSEXP, SEXP modelsSEXP, SEXP model_pSEXP, SEXP is_MCMCSEXP, SEXP options1SEXP, SEXP options2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type data(dataSEXP);
    Rcpp::traits::input_parameter< List >::type priors(priorsSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type models(modelsSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type model_p(model_pSEXP);
    Rcpp::traits::input_parameter< bool >::type is_MCMC(is_MCMCSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type options1(options1SEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type options2(options2SEXP);
    rcpp_result_gen = Rcpp::wrap(run_ma_dichotomous(data, priors, models, model_p, is_MCMC, options1, options2));
    return rcpp_result_gen;
END_RCPP
}
// run_dichotomous_single_mcmc
List run_dichotomous_single_mcmc(NumericVector model, Eigen::MatrixXd Y, Eigen::MatrixXd D, Eigen::MatrixXd pr, NumericVector options);
RcppExport SEXP _ToxicR_run_dichotomous_single_mcmc(SEXP modelSEXP, SEXP YSEXP, SEXP DSEXP, SEXP prSEXP, SEXP optionsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type model(modelSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type Y(YSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type D(DSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type pr(prSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type options(optionsSEXP);
    rcpp_result_gen = Rcpp::wrap(run_dichotomous_single_mcmc(model, Y, D, pr, options));
    return rcpp_result_gen;
END_RCPP
}
// run_continuous_single_mcmc
List run_continuous_single_mcmc(NumericVector model, Eigen::MatrixXd Y, Eigen::MatrixXd D, Eigen::MatrixXd priors, NumericVector options, bool is_logNormal, bool suff_stat);
RcppExport SEXP _ToxicR_run_continuous_single_mcmc(SEXP modelSEXP, SEXP YSEXP, SEXP DSEXP, SEXP priorsSEXP, SEXP optionsSEXP, SEXP is_logNormalSEXP, SEXP suff_statSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type model(modelSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type Y(YSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type D(DSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type priors(priorsSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type options(optionsSEXP);
    Rcpp::traits::input_parameter< bool >::type is_logNormal(is_logNormalSEXP);
    Rcpp::traits::input_parameter< bool >::type suff_stat(suff_statSEXP);
    rcpp_result_gen = Rcpp::wrap(run_continuous_single_mcmc(model, Y, D, priors, options, is_logNormal, suff_stat));
    return rcpp_result_gen;
END_RCPP
}
// polyk
NumericVector polyk(NumericVector dose, NumericVector tumor, NumericVector daysOnStudy);
RcppExport SEXP _ToxicR_polyk(SEXP doseSEXP, SEXP tumorSEXP, SEXP daysOnStudySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type dose(doseSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type tumor(tumorSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type daysOnStudy(daysOnStudySEXP);
    rcpp_result_gen = Rcpp::wrap(polyk(dose, tumor, daysOnStudy));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_ToxicR_run_single_dichotomous", (DL_FUNC) &_ToxicR_run_single_dichotomous, 5},
    {"_ToxicR_run_continuous_single", (DL_FUNC) &_ToxicR_run_continuous_single, 6},
    {"_ToxicR_run_continuous_ma_laplace", (DL_FUNC) &_ToxicR_run_continuous_ma_laplace, 6},
    {"_ToxicR_run_continuous_ma_mcmc", (DL_FUNC) &_ToxicR_run_continuous_ma_mcmc, 6},
    {"_ToxicR_run_ma_dichotomous", (DL_FUNC) &_ToxicR_run_ma_dichotomous, 7},
    {"_ToxicR_run_dichotomous_single_mcmc", (DL_FUNC) &_ToxicR_run_dichotomous_single_mcmc, 5},
    {"_ToxicR_run_continuous_single_mcmc", (DL_FUNC) &_ToxicR_run_continuous_single_mcmc, 7},
    {"_ToxicR_polyk", (DL_FUNC) &_ToxicR_polyk, 3},
    {NULL, NULL, 0}
};

RcppExport void R_init_ToxicR(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}