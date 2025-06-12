#pragma once
#include <functional>

/**
 * @brief Rozwi¹zuje równanie nieliniowe f(x) = 0 metod¹ po³owienia (bisection).
 *
 * Metoda polega na iteracyjnym zawê¿aniu przedzia³u [a, b], w którym funkcja zmienia znak,
 * a¿ do osi¹gniêcia dok³adnoœci okreœlonej przez tol.
 *
 * @param f Funkcja, dla której szukamy miejsca zerowego (std::function<double(double)>)
 * @param a Lewa granica przedzia³u pocz¹tkowego, gdzie f(a) * f(b) < 0
 * @param b Prawa granica przedzia³u pocz¹tkowego
 * @param tol Dok³adnoœæ (tolerancja) rozwi¹zania – kryterium zakoñczenia iteracji
 * @return double Przybli¿ona wartoœæ miejsca zerowego funkcji f na przedziale [a, b]
 *
 * @example
 * auto f = [](double x) { return x*x - 2; };
 * double root = bisection(f, 0.0, 2.0, 1e-6);
 * // root bêdzie bliskie sqrt(2) ? 1.4142
 */
double bisection(std::function<double(double)> f, double a, double b, double tol);


