#pragma once
#include <vector>

/**
 * @brief Oblicza wartoœæ interpolacji wielomianowej metod¹ Lagrange’a w zadanym punkcie.
 *
 * Funkcja interpoluje wartoœæ funkcji w punkcie xp na podstawie danych punktów (x, y)
 * u¿ywaj¹c wielomianu Lagrange’a.
 *
 * @param x Wektor wspó³rzêdnych x punktów danych (rozmiar n)
 * @param y Wektor wartoœci funkcji w punktach x (rozmiar n)
 * @param xp Punkt, dla którego chcemy wyznaczyæ wartoœæ interpolowan¹
 * @return double Wartoœæ interpolowana funkcji w punkcie xp
 *
 * @example
 * std::vector<double> x = {1, 2, 3};
 * std::vector<double> y = {2, 3, 5};
 * double yp = lagrangeInterpolation(x, y, 2.5);
 * // yp powinno byæ oko³o 4.0
 */
double lagrangeInterpolation(const std::vector<double>& x, const std::vector<double>& y, double xp);


