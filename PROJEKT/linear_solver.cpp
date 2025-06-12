#include "linear_solver.h"
#include <stdexcept>
#include <vector>

std::vector<double> gaussianElimination(std::vector<std::vector<double>> A, std::vector<double> b) {
    int n = A.size();

    // ?? Walidacja danych wejœciowych
    if (n == 0 || A[0].size() != n) {
        throw std::invalid_argument("Macierz A musi byæ kwadratowa.");
    }
    if (b.size() != n) {
        throw std::invalid_argument("Rozmiar wektora b nie zgadza siê z rozmiarem macierzy A.");
    }

    // ?? Eliminacja Gaussa
    for (int i = 0; i < n; ++i) {
        // znajdŸ najwiêkszy element w kolumnie
        double maxEl = std::abs(A[i][i]);
        int maxRow = i;
        for (int k = i + 1; k < n; ++k) {
            if (std::abs(A[k][i]) > maxEl) {
                maxEl = std::abs(A[k][i]);
                maxRow = k;
            }
        }

        std::swap(A[i], A[maxRow]);
        std::swap(b[i], b[maxRow]);

        if (std::abs(A[i][i]) < 1e-12)
            throw std::runtime_error("Dzielenie przez zero lub uk³ad osobliwy.");

        for (int k = i + 1; k < n; ++k) {
            double factor = A[k][i] / A[i][i];
            for (int j = i; j < n; ++j) {
                A[k][j] -= factor * A[i][j];
            }
            b[k] -= factor * b[i];
        }
    }

    // ?? Podstawianie wsteczne
    std::vector<double> x(n);
    for (int i = n - 1; i >= 0; --i) {
        x[i] = b[i];
        for (int j = i + 1; j < n; ++j) {
            x[i] -= A[i][j] * x[j];
        }
        x[i] /= A[i][i];
    }

    return x;
}


