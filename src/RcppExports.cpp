// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// crossover_cpp
NumericMatrix crossover_cpp(const NumericMatrix& selected_parents, int offspring_size);
RcppExport SEXP _BioGA_crossover_cpp(SEXP selected_parentsSEXP, SEXP offspring_sizeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericMatrix& >::type selected_parents(selected_parentsSEXP);
    Rcpp::traits::input_parameter< int >::type offspring_size(offspring_sizeSEXP);
    rcpp_result_gen = Rcpp::wrap(crossover_cpp(selected_parents, offspring_size));
    return rcpp_result_gen;
END_RCPP
}
// evaluate_fitness_cpp
NumericVector evaluate_fitness_cpp(const NumericMatrix& genomic_data, const NumericMatrix& population);
RcppExport SEXP _BioGA_evaluate_fitness_cpp(SEXP genomic_dataSEXP, SEXP populationSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericMatrix& >::type genomic_data(genomic_dataSEXP);
    Rcpp::traits::input_parameter< const NumericMatrix& >::type population(populationSEXP);
    rcpp_result_gen = Rcpp::wrap(evaluate_fitness_cpp(genomic_data, population));
    return rcpp_result_gen;
END_RCPP
}
// initialize_population_cpp
NumericMatrix initialize_population_cpp(const NumericMatrix& genomic_data, int population_size);
RcppExport SEXP _BioGA_initialize_population_cpp(SEXP genomic_dataSEXP, SEXP population_sizeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericMatrix& >::type genomic_data(genomic_dataSEXP);
    Rcpp::traits::input_parameter< int >::type population_size(population_sizeSEXP);
    rcpp_result_gen = Rcpp::wrap(initialize_population_cpp(genomic_data, population_size));
    return rcpp_result_gen;
END_RCPP
}
// mutation_cpp
NumericMatrix mutation_cpp(const NumericMatrix& offspring, double mutation_rate);
RcppExport SEXP _BioGA_mutation_cpp(SEXP offspringSEXP, SEXP mutation_rateSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericMatrix& >::type offspring(offspringSEXP);
    Rcpp::traits::input_parameter< double >::type mutation_rate(mutation_rateSEXP);
    rcpp_result_gen = Rcpp::wrap(mutation_cpp(offspring, mutation_rate));
    return rcpp_result_gen;
END_RCPP
}
// replacement_cpp
NumericMatrix replacement_cpp(const NumericMatrix& population, const NumericMatrix& offspring, int num_to_replace);
RcppExport SEXP _BioGA_replacement_cpp(SEXP populationSEXP, SEXP offspringSEXP, SEXP num_to_replaceSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericMatrix& >::type population(populationSEXP);
    Rcpp::traits::input_parameter< const NumericMatrix& >::type offspring(offspringSEXP);
    Rcpp::traits::input_parameter< int >::type num_to_replace(num_to_replaceSEXP);
    rcpp_result_gen = Rcpp::wrap(replacement_cpp(population, offspring, num_to_replace));
    return rcpp_result_gen;
END_RCPP
}
// selection_cpp
NumericMatrix selection_cpp(const NumericMatrix& population, const NumericVector& fitness, int num_parents);
RcppExport SEXP _BioGA_selection_cpp(SEXP populationSEXP, SEXP fitnessSEXP, SEXP num_parentsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericMatrix& >::type population(populationSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type fitness(fitnessSEXP);
    Rcpp::traits::input_parameter< int >::type num_parents(num_parentsSEXP);
    rcpp_result_gen = Rcpp::wrap(selection_cpp(population, fitness, num_parents));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_BioGA_crossover_cpp", (DL_FUNC) &_BioGA_crossover_cpp, 2},
    {"_BioGA_evaluate_fitness_cpp", (DL_FUNC) &_BioGA_evaluate_fitness_cpp, 2},
    {"_BioGA_initialize_population_cpp", (DL_FUNC) &_BioGA_initialize_population_cpp, 2},
    {"_BioGA_mutation_cpp", (DL_FUNC) &_BioGA_mutation_cpp, 2},
    {"_BioGA_replacement_cpp", (DL_FUNC) &_BioGA_replacement_cpp, 3},
    {"_BioGA_selection_cpp", (DL_FUNC) &_BioGA_selection_cpp, 3},
    {NULL, NULL, 0}
};

RcppExport void R_init_BioGA(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
