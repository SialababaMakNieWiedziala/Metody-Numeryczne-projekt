#pragma once
#include <functional>
#include <vector>

/**
 * @brief Rozwi�zuje r�wnanie r�niczkowe y' = f(x, y) metod� Eulera.
 *
 * Metoda Eulera to prosty spos�b numerycznego rozwi�zywania r�wna� r�niczkowych zwyczajnych,
 * polegaj�cy na iteracyjnym przybli�aniu warto�ci y na kolejnych punktach siatki.
 *
 * @param f Funkcja okre�laj�ca pochodn� y' = f(x, y)
 * @param x0 Punkt startowy (pocz�tkowa warto�� zmiennej niezale�nej x)
 * @param y0 Warto�� pocz�tkowa funkcji y w punkcie x0
 * @param h Krok ca�kowania (odleg�o�� mi�dzy kolejnymi punktami siatki)
 * @param n Liczba krok�w (ile kolejnych punkt�w ma zosta� wyliczonych)
 * @return std::vector<double> Wektor warto�ci y na kolejnych punktach x0, x0 + h, ..., x0 + n*h
 *
 * @example
 * auto f = [](double x, double y) { return x + y; };
 * std::vector<double> wynik = eulerMethod(f, 0.0, 1.0, 0.1, 10);
 * // wynik zawiera przybli�one warto�ci y w punktach 0.0, 0.1, ..., 1.0
 */
std::vector<double> eulerMethod(std::function<double(double, double)> f, double x0, double y0, double h, int n);

