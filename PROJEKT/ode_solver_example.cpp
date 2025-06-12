#include <iostream>
#include <vector>
#include "ode_solver.h"

int main() {
    // y' = x + y, y(0) = 1, rozwi¹zanie metod¹ Eulera
    auto f = [](double x, double y) { return x + y; };
    double x0 = 0.0, y0 = 1.0, h = 0.1;
    int n = 10;

    try {
        std::vector<double> result = eulerMethod(f, x0, y0, h, n);
        std::cout << "Rozwiazanie rownania rozniczkowego (Euler):\n";
        for (int i = 0; i <= n; ++i) {
            std::cout << "x = " << x0 + i * h << ", y = " << result[i] << '\n';
        }
    }
    catch (const std::exception& e) {
        std::cerr << "Blad: " << e.what() << std::endl;
    }

    return 0;
}

// Numeryczne rozwi¹zywanie równania ró¿niczkowego metod¹ Eulera. Praktyczne wyœwietlanie wyników iteracji.