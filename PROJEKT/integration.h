#pragma once
#include <functional>

/**
 * @brief Oblicza warto�� ca�ki oznaczonej funkcji f na przedziale [a, b] metod� trapez�w.
 *
 * Metoda numeryczna aproksymuj�ca ca�k� oznaczon� przez podzia� przedzia�u ca�kowania na n podprzedzia��w
 * i sumowanie p�l trapez�w pod wykresem funkcji.
 *
 * @param f Funkcja do ca�kowania, typu std::function<double(double)>
 * @param a Lewa granica ca�kowania
 * @param b Prawa granica ca�kowania
 * @param n Liczba podprzedzia��w (im wi�ksza, tym dok�adniejszy wynik)
 * @return double Przybli�ona warto�� ca�ki oznaczonej
 *
 * @example
 * auto f = [](double x) { return x * x; };
 * double integral = trapezoidalRule(f, 0.0, 1.0, 100);
 * // integral powinno by� bliskie 1/3 ? 0.3333
 */
double trapezoidalRule(std::function<double(double)> f, double a, double b, int n);

