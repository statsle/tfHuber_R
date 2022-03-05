// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// sgn
int sgn(const double x);
RcppExport SEXP _adaHuber_sgn(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const double >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(sgn(x));
    return rcpp_result_gen;
END_RCPP
}
// f1
double f1(const double x, const arma::vec& resSq, const int n, const double rhs);
RcppExport SEXP _adaHuber_f1(SEXP xSEXP, SEXP resSqSEXP, SEXP nSEXP, SEXP rhsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const double >::type x(xSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type resSq(resSqSEXP);
    Rcpp::traits::input_parameter< const int >::type n(nSEXP);
    Rcpp::traits::input_parameter< const double >::type rhs(rhsSEXP);
    rcpp_result_gen = Rcpp::wrap(f1(x, resSq, n, rhs));
    return rcpp_result_gen;
END_RCPP
}
// rootf1
double rootf1(const arma::vec& resSq, const int n, const double rhs, double low, double up, const double tol, const int maxIte);
RcppExport SEXP _adaHuber_rootf1(SEXP resSqSEXP, SEXP nSEXP, SEXP rhsSEXP, SEXP lowSEXP, SEXP upSEXP, SEXP tolSEXP, SEXP maxIteSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type resSq(resSqSEXP);
    Rcpp::traits::input_parameter< const int >::type n(nSEXP);
    Rcpp::traits::input_parameter< const double >::type rhs(rhsSEXP);
    Rcpp::traits::input_parameter< double >::type low(lowSEXP);
    Rcpp::traits::input_parameter< double >::type up(upSEXP);
    Rcpp::traits::input_parameter< const double >::type tol(tolSEXP);
    Rcpp::traits::input_parameter< const int >::type maxIte(maxIteSEXP);
    rcpp_result_gen = Rcpp::wrap(rootf1(resSq, n, rhs, low, up, tol, maxIte));
    return rcpp_result_gen;
END_RCPP
}
// huberDer
double huberDer(const arma::vec& res, const double tau, const int n);
RcppExport SEXP _adaHuber_huberDer(SEXP resSEXP, SEXP tauSEXP, SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type res(resSEXP);
    Rcpp::traits::input_parameter< const double >::type tau(tauSEXP);
    Rcpp::traits::input_parameter< const int >::type n(nSEXP);
    rcpp_result_gen = Rcpp::wrap(huberDer(res, tau, n));
    return rcpp_result_gen;
END_RCPP
}
// huberMean
double huberMean(arma::vec X, const int n, const double tol, const int iteMax);
RcppExport SEXP _adaHuber_huberMean(SEXP XSEXP, SEXP nSEXP, SEXP tolSEXP, SEXP iteMaxSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type X(XSEXP);
    Rcpp::traits::input_parameter< const int >::type n(nSEXP);
    Rcpp::traits::input_parameter< const double >::type tol(tolSEXP);
    Rcpp::traits::input_parameter< const int >::type iteMax(iteMaxSEXP);
    rcpp_result_gen = Rcpp::wrap(huberMean(X, n, tol, iteMax));
    return rcpp_result_gen;
END_RCPP
}
// huberMeanList
Rcpp::List huberMeanList(arma::vec X, const double tol, const int iteMax);
RcppExport SEXP _adaHuber_huberMeanList(SEXP XSEXP, SEXP tolSEXP, SEXP iteMaxSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type X(XSEXP);
    Rcpp::traits::input_parameter< const double >::type tol(tolSEXP);
    Rcpp::traits::input_parameter< const int >::type iteMax(iteMaxSEXP);
    rcpp_result_gen = Rcpp::wrap(huberMeanList(X, tol, iteMax));
    return rcpp_result_gen;
END_RCPP
}
// huberMeanVec
arma::vec huberMeanVec(const arma::mat& X, const int n, const int p, const double epsilon, const int iteMax);
RcppExport SEXP _adaHuber_huberMeanVec(SEXP XSEXP, SEXP nSEXP, SEXP pSEXP, SEXP epsilonSEXP, SEXP iteMaxSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const int >::type n(nSEXP);
    Rcpp::traits::input_parameter< const int >::type p(pSEXP);
    Rcpp::traits::input_parameter< const double >::type epsilon(epsilonSEXP);
    Rcpp::traits::input_parameter< const int >::type iteMax(iteMaxSEXP);
    rcpp_result_gen = Rcpp::wrap(huberMeanVec(X, n, p, epsilon, iteMax));
    return rcpp_result_gen;
END_RCPP
}
// hMeanCov
double hMeanCov(const arma::vec& Z, const int n, const int d, const int N, double rhs, const double epsilon, const int iteMax);
RcppExport SEXP _adaHuber_hMeanCov(SEXP ZSEXP, SEXP nSEXP, SEXP dSEXP, SEXP NSEXP, SEXP rhsSEXP, SEXP epsilonSEXP, SEXP iteMaxSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type Z(ZSEXP);
    Rcpp::traits::input_parameter< const int >::type n(nSEXP);
    Rcpp::traits::input_parameter< const int >::type d(dSEXP);
    Rcpp::traits::input_parameter< const int >::type N(NSEXP);
    Rcpp::traits::input_parameter< double >::type rhs(rhsSEXP);
    Rcpp::traits::input_parameter< const double >::type epsilon(epsilonSEXP);
    Rcpp::traits::input_parameter< const int >::type iteMax(iteMaxSEXP);
    rcpp_result_gen = Rcpp::wrap(hMeanCov(Z, n, d, N, rhs, epsilon, iteMax));
    return rcpp_result_gen;
END_RCPP
}
// huberCov
Rcpp::List huberCov(const arma::mat& X, const double epsilon, const int iteMax);
RcppExport SEXP _adaHuber_huberCov(SEXP XSEXP, SEXP epsilonSEXP, SEXP iteMaxSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const double >::type epsilon(epsilonSEXP);
    Rcpp::traits::input_parameter< const int >::type iteMax(iteMaxSEXP);
    rcpp_result_gen = Rcpp::wrap(huberCov(X, epsilon, iteMax));
    return rcpp_result_gen;
END_RCPP
}
// mad
double mad(const arma::vec& x);
RcppExport SEXP _adaHuber_mad(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(mad(x));
    return rcpp_result_gen;
END_RCPP
}
// standardize
arma::mat standardize(arma::mat X, const arma::rowvec& mx, const arma::vec& sx1, const int p);
RcppExport SEXP _adaHuber_standardize(SEXP XSEXP, SEXP mxSEXP, SEXP sx1SEXP, SEXP pSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::rowvec& >::type mx(mxSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type sx1(sx1SEXP);
    Rcpp::traits::input_parameter< const int >::type p(pSEXP);
    rcpp_result_gen = Rcpp::wrap(standardize(X, mx, sx1, p));
    return rcpp_result_gen;
END_RCPP
}
// updateHuber
void updateHuber(const arma::mat& Z, const arma::vec& res, arma::vec& der, arma::vec& grad, const int n, const double tau, const double n1);
RcppExport SEXP _adaHuber_updateHuber(SEXP ZSEXP, SEXP resSEXP, SEXP derSEXP, SEXP gradSEXP, SEXP nSEXP, SEXP tauSEXP, SEXP n1SEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type Z(ZSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type res(resSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type der(derSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type grad(gradSEXP);
    Rcpp::traits::input_parameter< const int >::type n(nSEXP);
    Rcpp::traits::input_parameter< const double >::type tau(tauSEXP);
    Rcpp::traits::input_parameter< const double >::type n1(n1SEXP);
    updateHuber(Z, res, der, grad, n, tau, n1);
    return R_NilValue;
END_RCPP
}
// adaHuberReg
Rcpp::List adaHuberReg(const arma::mat& X, arma::vec Y, const double epsilon, const int iteMax);
RcppExport SEXP _adaHuber_adaHuberReg(SEXP XSEXP, SEXP YSEXP, SEXP epsilonSEXP, SEXP iteMaxSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type Y(YSEXP);
    Rcpp::traits::input_parameter< const double >::type epsilon(epsilonSEXP);
    Rcpp::traits::input_parameter< const int >::type iteMax(iteMaxSEXP);
    rcpp_result_gen = Rcpp::wrap(adaHuberReg(X, Y, epsilon, iteMax));
    return rcpp_result_gen;
END_RCPP
}
// huberReg
Rcpp::List huberReg(const arma::mat& X, arma::vec Y, const double epsilon, const double constTau, const int iteMax);
RcppExport SEXP _adaHuber_huberReg(SEXP XSEXP, SEXP YSEXP, SEXP epsilonSEXP, SEXP constTauSEXP, SEXP iteMaxSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type Y(YSEXP);
    Rcpp::traits::input_parameter< const double >::type epsilon(epsilonSEXP);
    Rcpp::traits::input_parameter< const double >::type constTau(constTauSEXP);
    Rcpp::traits::input_parameter< const int >::type iteMax(iteMaxSEXP);
    rcpp_result_gen = Rcpp::wrap(huberReg(X, Y, epsilon, constTau, iteMax));
    return rcpp_result_gen;
END_RCPP
}
// softThresh
arma::vec softThresh(const arma::vec& x, const arma::vec& lambda, const int p);
RcppExport SEXP _adaHuber_softThresh(SEXP xSEXP, SEXP lambdaSEXP, SEXP pSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< const int >::type p(pSEXP);
    rcpp_result_gen = Rcpp::wrap(softThresh(x, lambda, p));
    return rcpp_result_gen;
END_RCPP
}
// cmptLambdaLasso
arma::vec cmptLambdaLasso(const double lambda, const int p);
RcppExport SEXP _adaHuber_cmptLambdaLasso(SEXP lambdaSEXP, SEXP pSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const double >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< const int >::type p(pSEXP);
    rcpp_result_gen = Rcpp::wrap(cmptLambdaLasso(lambda, p));
    return rcpp_result_gen;
END_RCPP
}
// lossHuber
double lossHuber(const arma::mat& Z, const arma::vec& Y, const arma::vec& beta, const double n1, const double tau);
RcppExport SEXP _adaHuber_lossHuber(SEXP ZSEXP, SEXP YSEXP, SEXP betaSEXP, SEXP n1SEXP, SEXP tauSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type Z(ZSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type Y(YSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< const double >::type n1(n1SEXP);
    Rcpp::traits::input_parameter< const double >::type tau(tauSEXP);
    rcpp_result_gen = Rcpp::wrap(lossHuber(Z, Y, beta, n1, tau));
    return rcpp_result_gen;
END_RCPP
}
// updateHuberHd
double updateHuberHd(const arma::mat& Z, const arma::vec& Y, const arma::vec& beta, arma::vec& grad, const double n1, const double tau);
RcppExport SEXP _adaHuber_updateHuberHd(SEXP ZSEXP, SEXP YSEXP, SEXP betaSEXP, SEXP gradSEXP, SEXP n1SEXP, SEXP tauSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type Z(ZSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type Y(YSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type grad(gradSEXP);
    Rcpp::traits::input_parameter< const double >::type n1(n1SEXP);
    Rcpp::traits::input_parameter< const double >::type tau(tauSEXP);
    rcpp_result_gen = Rcpp::wrap(updateHuberHd(Z, Y, beta, grad, n1, tau));
    return rcpp_result_gen;
END_RCPP
}
// lamm
double lamm(const arma::mat& Z, const arma::vec& Y, const arma::vec& Lambda, arma::vec& beta, const double tau, const double phi, const double gamma, const int p, const double n1);
RcppExport SEXP _adaHuber_lamm(SEXP ZSEXP, SEXP YSEXP, SEXP LambdaSEXP, SEXP betaSEXP, SEXP tauSEXP, SEXP phiSEXP, SEXP gammaSEXP, SEXP pSEXP, SEXP n1SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type Z(ZSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type Y(YSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type Lambda(LambdaSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< const double >::type tau(tauSEXP);
    Rcpp::traits::input_parameter< const double >::type phi(phiSEXP);
    Rcpp::traits::input_parameter< const double >::type gamma(gammaSEXP);
    Rcpp::traits::input_parameter< const int >::type p(pSEXP);
    Rcpp::traits::input_parameter< const double >::type n1(n1SEXP);
    rcpp_result_gen = Rcpp::wrap(lamm(Z, Y, Lambda, beta, tau, phi, gamma, p, n1));
    return rcpp_result_gen;
END_RCPP
}
// huberLasso
arma::vec huberLasso(const arma::mat& Z, const arma::vec& Y, const double lambda, const double tau, const int p, const double n1, const double phi0, const double gamma, const double epsilon, const int iteMax);
RcppExport SEXP _adaHuber_huberLasso(SEXP ZSEXP, SEXP YSEXP, SEXP lambdaSEXP, SEXP tauSEXP, SEXP pSEXP, SEXP n1SEXP, SEXP phi0SEXP, SEXP gammaSEXP, SEXP epsilonSEXP, SEXP iteMaxSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type Z(ZSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type Y(YSEXP);
    Rcpp::traits::input_parameter< const double >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< const double >::type tau(tauSEXP);
    Rcpp::traits::input_parameter< const int >::type p(pSEXP);
    Rcpp::traits::input_parameter< const double >::type n1(n1SEXP);
    Rcpp::traits::input_parameter< const double >::type phi0(phi0SEXP);
    Rcpp::traits::input_parameter< const double >::type gamma(gammaSEXP);
    Rcpp::traits::input_parameter< const double >::type epsilon(epsilonSEXP);
    Rcpp::traits::input_parameter< const int >::type iteMax(iteMaxSEXP);
    rcpp_result_gen = Rcpp::wrap(huberLasso(Z, Y, lambda, tau, p, n1, phi0, gamma, epsilon, iteMax));
    return rcpp_result_gen;
END_RCPP
}
// huberLassoList
Rcpp::List huberLassoList(const arma::mat& X, arma::vec& Y, const double lambda, const double tau, const double phi0, const double gamma, const double epsilon, const int iteMax);
RcppExport SEXP _adaHuber_huberLassoList(SEXP XSEXP, SEXP YSEXP, SEXP lambdaSEXP, SEXP tauSEXP, SEXP phi0SEXP, SEXP gammaSEXP, SEXP epsilonSEXP, SEXP iteMaxSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type Y(YSEXP);
    Rcpp::traits::input_parameter< const double >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< const double >::type tau(tauSEXP);
    Rcpp::traits::input_parameter< const double >::type phi0(phi0SEXP);
    Rcpp::traits::input_parameter< const double >::type gamma(gammaSEXP);
    Rcpp::traits::input_parameter< const double >::type epsilon(epsilonSEXP);
    Rcpp::traits::input_parameter< const int >::type iteMax(iteMaxSEXP);
    rcpp_result_gen = Rcpp::wrap(huberLassoList(X, Y, lambda, tau, phi0, gamma, epsilon, iteMax));
    return rcpp_result_gen;
END_RCPP
}
// sparsity
int sparsity(const arma::vec& x);
RcppExport SEXP _adaHuber_sparsity(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(sparsity(x));
    return rcpp_result_gen;
END_RCPP
}
// adaHuberLasso
arma::vec adaHuberLasso(const arma::mat& Z, const arma::vec& Y, const double lambda, const int p, const double phi0, const double gamma, const double epsilon, const int iteMax);
RcppExport SEXP _adaHuber_adaHuberLasso(SEXP ZSEXP, SEXP YSEXP, SEXP lambdaSEXP, SEXP pSEXP, SEXP phi0SEXP, SEXP gammaSEXP, SEXP epsilonSEXP, SEXP iteMaxSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type Z(ZSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type Y(YSEXP);
    Rcpp::traits::input_parameter< const double >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< const int >::type p(pSEXP);
    Rcpp::traits::input_parameter< const double >::type phi0(phi0SEXP);
    Rcpp::traits::input_parameter< const double >::type gamma(gammaSEXP);
    Rcpp::traits::input_parameter< const double >::type epsilon(epsilonSEXP);
    Rcpp::traits::input_parameter< const int >::type iteMax(iteMaxSEXP);
    rcpp_result_gen = Rcpp::wrap(adaHuberLasso(Z, Y, lambda, p, phi0, gamma, epsilon, iteMax));
    return rcpp_result_gen;
END_RCPP
}
// adaHuberLassoList
Rcpp::List adaHuberLassoList(const arma::mat& X, arma::vec& Y, const double lambda, const double phi0, const double gamma, const double epsilon, const int iteMax);
RcppExport SEXP _adaHuber_adaHuberLassoList(SEXP XSEXP, SEXP YSEXP, SEXP lambdaSEXP, SEXP phi0SEXP, SEXP gammaSEXP, SEXP epsilonSEXP, SEXP iteMaxSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type Y(YSEXP);
    Rcpp::traits::input_parameter< const double >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< const double >::type phi0(phi0SEXP);
    Rcpp::traits::input_parameter< const double >::type gamma(gammaSEXP);
    Rcpp::traits::input_parameter< const double >::type epsilon(epsilonSEXP);
    Rcpp::traits::input_parameter< const int >::type iteMax(iteMaxSEXP);
    rcpp_result_gen = Rcpp::wrap(adaHuberLassoList(X, Y, lambda, phi0, gamma, epsilon, iteMax));
    return rcpp_result_gen;
END_RCPP
}
// lossL2
double lossL2(const arma::mat& Z, const arma::vec& Y, const arma::vec& beta);
RcppExport SEXP _adaHuber_lossL2(SEXP ZSEXP, SEXP YSEXP, SEXP betaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type Z(ZSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type Y(YSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type beta(betaSEXP);
    rcpp_result_gen = Rcpp::wrap(lossL2(Z, Y, beta));
    return rcpp_result_gen;
END_RCPP
}
// cvAdaHuberLasso
Rcpp::List cvAdaHuberLasso(const arma::mat& X, arma::vec& Y, const arma::vec& lambdaSeq, const arma::vec& folds, const int kfolds, const double phi0, const double gamma, const double epsilon, const int iteMax);
RcppExport SEXP _adaHuber_cvAdaHuberLasso(SEXP XSEXP, SEXP YSEXP, SEXP lambdaSeqSEXP, SEXP foldsSEXP, SEXP kfoldsSEXP, SEXP phi0SEXP, SEXP gammaSEXP, SEXP epsilonSEXP, SEXP iteMaxSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type Y(YSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type lambdaSeq(lambdaSeqSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type folds(foldsSEXP);
    Rcpp::traits::input_parameter< const int >::type kfolds(kfoldsSEXP);
    Rcpp::traits::input_parameter< const double >::type phi0(phi0SEXP);
    Rcpp::traits::input_parameter< const double >::type gamma(gammaSEXP);
    Rcpp::traits::input_parameter< const double >::type epsilon(epsilonSEXP);
    Rcpp::traits::input_parameter< const int >::type iteMax(iteMaxSEXP);
    rcpp_result_gen = Rcpp::wrap(cvAdaHuberLasso(X, Y, lambdaSeq, folds, kfolds, phi0, gamma, epsilon, iteMax));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_adaHuber_sgn", (DL_FUNC) &_adaHuber_sgn, 1},
    {"_adaHuber_f1", (DL_FUNC) &_adaHuber_f1, 4},
    {"_adaHuber_rootf1", (DL_FUNC) &_adaHuber_rootf1, 7},
    {"_adaHuber_huberDer", (DL_FUNC) &_adaHuber_huberDer, 3},
    {"_adaHuber_huberMean", (DL_FUNC) &_adaHuber_huberMean, 4},
    {"_adaHuber_huberMeanList", (DL_FUNC) &_adaHuber_huberMeanList, 3},
    {"_adaHuber_huberMeanVec", (DL_FUNC) &_adaHuber_huberMeanVec, 5},
    {"_adaHuber_hMeanCov", (DL_FUNC) &_adaHuber_hMeanCov, 7},
    {"_adaHuber_huberCov", (DL_FUNC) &_adaHuber_huberCov, 3},
    {"_adaHuber_mad", (DL_FUNC) &_adaHuber_mad, 1},
    {"_adaHuber_standardize", (DL_FUNC) &_adaHuber_standardize, 4},
    {"_adaHuber_updateHuber", (DL_FUNC) &_adaHuber_updateHuber, 7},
    {"_adaHuber_adaHuberReg", (DL_FUNC) &_adaHuber_adaHuberReg, 4},
    {"_adaHuber_huberReg", (DL_FUNC) &_adaHuber_huberReg, 5},
    {"_adaHuber_softThresh", (DL_FUNC) &_adaHuber_softThresh, 3},
    {"_adaHuber_cmptLambdaLasso", (DL_FUNC) &_adaHuber_cmptLambdaLasso, 2},
    {"_adaHuber_lossHuber", (DL_FUNC) &_adaHuber_lossHuber, 5},
    {"_adaHuber_updateHuberHd", (DL_FUNC) &_adaHuber_updateHuberHd, 6},
    {"_adaHuber_lamm", (DL_FUNC) &_adaHuber_lamm, 9},
    {"_adaHuber_huberLasso", (DL_FUNC) &_adaHuber_huberLasso, 10},
    {"_adaHuber_huberLassoList", (DL_FUNC) &_adaHuber_huberLassoList, 8},
    {"_adaHuber_sparsity", (DL_FUNC) &_adaHuber_sparsity, 1},
    {"_adaHuber_adaHuberLasso", (DL_FUNC) &_adaHuber_adaHuberLasso, 8},
    {"_adaHuber_adaHuberLassoList", (DL_FUNC) &_adaHuber_adaHuberLassoList, 7},
    {"_adaHuber_lossL2", (DL_FUNC) &_adaHuber_lossL2, 3},
    {"_adaHuber_cvAdaHuberLasso", (DL_FUNC) &_adaHuber_cvAdaHuberLasso, 9},
    {NULL, NULL, 0}
};

RcppExport void R_init_adaHuber(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
