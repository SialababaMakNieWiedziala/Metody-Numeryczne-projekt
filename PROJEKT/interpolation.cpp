#include "interpolation.h"
#include <stdexcept>

double lagrangeInterpolation(const std::vector<double>& x, const std::vector<double>& y, double xp) {
    if (x.size() != y.size())
        throw std::invalid_argument("Wektory x i y musz� mie� taki sam rozmiar.");
    if (x.empty())
        throw std::invalid_argument("Wektory nie mog� by� puste.");

    int n = x.size();
    double result = 0.0;

    for (int i = 0; i < n; ++i) {
        double term = y[i];
        for (int j = 0; j < n; ++j) {
            if (j != i) {
                double denom = x[i] - x[j];
                if (denom == 0.0)
                    throw std::runtime_error("Powtarzaj�ce si� warto�ci x powoduj� dzielenie przez zero.");
                term *= (xp - x[j]) / denom;
            }
        }
        result += term;
    }

    return result;
}

