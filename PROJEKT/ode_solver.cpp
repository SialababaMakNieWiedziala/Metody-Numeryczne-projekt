#include "ode_solver.h"
#include <stdexcept>

std::vector<double> eulerMethod(std::function<double(double, double)> f, double x0, double y0, double h, int n) {
    if (n < 0)
        throw std::invalid_argument("Liczba kroków n musi byæ nieujemna.");
    if (h <= 0)
        throw std::invalid_argument("Krok h musi byæ wiêkszy od 0.");

    std::vector<double> ys;
    ys.push_back(y0);
    double x = x0;

    for (int i = 0; i < n; ++i) {
        y0 += h * f(x, y0);
        x += h;
        ys.push_back(y0);
    }

    return ys;
}

