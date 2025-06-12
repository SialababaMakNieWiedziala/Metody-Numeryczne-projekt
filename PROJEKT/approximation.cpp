#include "approximation.h"
#include <stdexcept>

std::pair<double, double> linearLeastSquares(const std::vector<double>& x, const std::vector<double>& y) {
    if (x.size() != y.size())
        throw std::invalid_argument("Wektory x i y musz¹ mieæ taki sam rozmiar.");
    if (x.size() < 2)
        throw std::invalid_argument("Za ma³o punktów do aproksymacji liniowej.");

    int n = x.size();
    double sumX = 0, sumY = 0, sumXY = 0, sumX2 = 0;

    for (int i = 0; i < n; ++i) {
        sumX += x[i];
        sumY += y[i];
        sumXY += x[i] * y[i];
        sumX2 += x[i] * x[i];
    }

    double denom = n * sumX2 - sumX * sumX;
    if (denom == 0.0)
        throw std::runtime_error("Dzielenie przez zero w obliczeniach regresji liniowej.");

    double a = (n * sumXY - sumX * sumY) / denom;
    double b = (sumY - a * sumX) / n;
    return { a, b };
}

