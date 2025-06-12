#pragma once
#include <functional>

/**
 * @brief Oblicza wartoœæ ca³ki oznaczonej funkcji f na przedziale [a, b] metod¹ trapezów.
 *
 * Metoda numeryczna aproksymuj¹ca ca³kê oznaczon¹ przez podzia³ przedzia³u ca³kowania na n podprzedzia³ów
 * i sumowanie pól trapezów pod wykresem funkcji.
 *
 * @param f Funkcja do ca³kowania, typu std::function<double(double)>
 * @param a Lewa granica ca³kowania
 * @param b Prawa granica ca³kowania
 * @param n Liczba podprzedzia³ów (im wiêksza, tym dok³adniejszy wynik)
 * @return double Przybli¿ona wartoœæ ca³ki oznaczonej
 *
 * @example
 * auto f = [](double x) { return x * x; };
 * double integral = trapezoidalRule(f, 0.0, 1.0, 100);
 * // integral powinno byæ bliskie 1/3 ? 0.3333
 */
double trapezoidalRule(std::function<double(double)> f, double a, double b, int n);

