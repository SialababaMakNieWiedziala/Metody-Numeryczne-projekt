#include "integration.h"
#include <stdexcept>

double trapezoidalRule(std::function<double(double)> f, double a, double b, int n) {
    if (n <= 0)
        throw std::invalid_argument("Liczba podprzedzia³ów musi byæ wiêksza od 0.");
    if (a == b)
        return 0.0;

    double h = (b - a) / n;
    double result = (f(a) + f(b)) / 2.0;

    for (int i = 1; i < n; ++i)
        result += f(a + i * h);

    return result * h;
}

