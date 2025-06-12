#include "nonlinear_solver.h"
#include <stdexcept>

double bisection(std::function<double(double)> f, double a, double b, double tol) {
    if (f(a) * f(b) >= 0)
        throw std::invalid_argument("Funkcja musi zmieniaæ znak na przedziale [a, b].");
    if (tol <= 0)
        throw std::invalid_argument("Tolerancja musi byæ wiêksza od 0.");

    double c;
    while ((b - a) / 2 > tol) {
        c = (a + b) / 2;
        double fc = f(c);
        if (fc == 0.0)
            return c;
        else if (fc * f(a) < 0)
            b = c;
        else
            a = c;
    }
    return (a + b) / 2;
}

