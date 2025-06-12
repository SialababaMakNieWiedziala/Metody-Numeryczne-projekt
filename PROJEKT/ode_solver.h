#pragma once
#include <functional>
#include <vector>

/**
 * @brief Rozwi¹zuje równanie ró¿niczkowe y' = f(x, y) metod¹ Eulera.
 *
 * Metoda Eulera to prosty sposób numerycznego rozwi¹zywania równañ ró¿niczkowych zwyczajnych,
 * polegaj¹cy na iteracyjnym przybli¿aniu wartoœci y na kolejnych punktach siatki.
 *
 * @param f Funkcja okreœlaj¹ca pochodn¹ y' = f(x, y)
 * @param x0 Punkt startowy (pocz¹tkowa wartoœæ zmiennej niezale¿nej x)
 * @param y0 Wartoœæ pocz¹tkowa funkcji y w punkcie x0
 * @param h Krok ca³kowania (odleg³oœæ miêdzy kolejnymi punktami siatki)
 * @param n Liczba kroków (ile kolejnych punktów ma zostaæ wyliczonych)
 * @return std::vector<double> Wektor wartoœci y na kolejnych punktach x0, x0 + h, ..., x0 + n*h
 *
 * @example
 * auto f = [](double x, double y) { return x + y; };
 * std::vector<double> wynik = eulerMethod(f, 0.0, 1.0, 0.1, 10);
 * // wynik zawiera przybli¿one wartoœci y w punktach 0.0, 0.1, ..., 1.0
 */
std::vector<double> eulerMethod(std::function<double(double, double)> f, double x0, double y0, double h, int n);

