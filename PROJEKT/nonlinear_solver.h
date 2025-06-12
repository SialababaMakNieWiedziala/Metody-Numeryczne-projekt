#pragma once
#include <functional>

/**
 * @brief Rozwi�zuje r�wnanie nieliniowe f(x) = 0 metod� po�owienia (bisection).
 *
 * Metoda polega na iteracyjnym zaw�aniu przedzia�u [a, b], w kt�rym funkcja zmienia znak,
 * a� do osi�gni�cia dok�adno�ci okre�lonej przez tol.
 *
 * @param f Funkcja, dla kt�rej szukamy miejsca zerowego (std::function<double(double)>)
 * @param a Lewa granica przedzia�u pocz�tkowego, gdzie f(a) * f(b) < 0
 * @param b Prawa granica przedzia�u pocz�tkowego
 * @param tol Dok�adno�� (tolerancja) rozwi�zania � kryterium zako�czenia iteracji
 * @return double Przybli�ona warto�� miejsca zerowego funkcji f na przedziale [a, b]
 *
 * @example
 * auto f = [](double x) { return x*x - 2; };
 * double root = bisection(f, 0.0, 2.0, 1e-6);
 * // root b�dzie bliskie sqrt(2) ? 1.4142
 */
double bisection(std::function<double(double)> f, double a, double b, double tol);


