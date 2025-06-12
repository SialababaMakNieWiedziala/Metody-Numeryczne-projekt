#pragma once
#include <vector>
#include <utility>

/**
 * @brief Oblicza wsp�czynniki prostej aproksymacyjnej metod� najmniejszych kwadrat�w.
 *
 * Dla danych punkt�w (x_i, y_i), znajduje prost� y = ax + b, kt�ra najlepiej aproksymuje dane w sensie najmniejszych kwadrat�w.
 *
 * @param x Wektor warto�ci x (d�ugo�� n)
 * @param y Wektor warto�ci y (d�ugo�� n, taka sama jak x)
 * @return std::pair<double, double> Para (a, b), gdzie:
 *         a � wsp�czynnik kierunkowy prostej,
 *         b � wyraz wolny
 *
 * @example
 * std::vector<double> x = {1, 2, 3, 4};
 * std::vector<double> y = {2, 4, 5, 4};
 * auto [a, b] = linearLeastSquares(x, y);
 * // Otrzymana prosta: y = ax + b
 */
std::pair<double, double> linearLeastSquares(const std::vector<double>& x, const std::vector<double>& y);


