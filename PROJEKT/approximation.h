#pragma once
#include <vector>
#include <utility>

/**
 * @brief Oblicza wspó³czynniki prostej aproksymacyjnej metod¹ najmniejszych kwadratów.
 *
 * Dla danych punktów (x_i, y_i), znajduje prost¹ y = ax + b, która najlepiej aproksymuje dane w sensie najmniejszych kwadratów.
 *
 * @param x Wektor wartoœci x (d³ugoœæ n)
 * @param y Wektor wartoœci y (d³ugoœæ n, taka sama jak x)
 * @return std::pair<double, double> Para (a, b), gdzie:
 *         a – wspó³czynnik kierunkowy prostej,
 *         b – wyraz wolny
 *
 * @example
 * std::vector<double> x = {1, 2, 3, 4};
 * std::vector<double> y = {2, 4, 5, 4};
 * auto [a, b] = linearLeastSquares(x, y);
 * // Otrzymana prosta: y = ax + b
 */
std::pair<double, double> linearLeastSquares(const std::vector<double>& x, const std::vector<double>& y);


