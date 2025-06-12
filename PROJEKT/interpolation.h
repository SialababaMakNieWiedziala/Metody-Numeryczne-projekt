#pragma once
#include <vector>

/**
 * @brief Oblicza warto�� interpolacji wielomianowej metod� Lagrange�a w zadanym punkcie.
 *
 * Funkcja interpoluje warto�� funkcji w punkcie xp na podstawie danych punkt�w (x, y)
 * u�ywaj�c wielomianu Lagrange�a.
 *
 * @param x Wektor wsp�rz�dnych x punkt�w danych (rozmiar n)
 * @param y Wektor warto�ci funkcji w punktach x (rozmiar n)
 * @param xp Punkt, dla kt�rego chcemy wyznaczy� warto�� interpolowan�
 * @return double Warto�� interpolowana funkcji w punkcie xp
 *
 * @example
 * std::vector<double> x = {1, 2, 3};
 * std::vector<double> y = {2, 3, 5};
 * double yp = lagrangeInterpolation(x, y, 2.5);
 * // yp powinno by� oko�o 4.0
 */
double lagrangeInterpolation(const std::vector<double>& x, const std::vector<double>& y, double xp);


