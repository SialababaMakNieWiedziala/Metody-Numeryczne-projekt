#include <iostream>
#include <vector>
#include "approximation.h"

int main() {
    std::vector<double> x = { 1, 2, 3, 4, 5 };
    std::vector<double> y = { 2.2, 4.1, 6.0, 8.1, 10.1 };

    try {
        auto result = linearLeastSquares(x, y);
        double a = result.first;
        double b = result.second;
        std::cout << "Funkcja aproksymujaca: y = " << a << " * x + " << b << std::endl;
    }
    catch (const std::exception& e) {
        std::cerr << "Blad: " << e.what() << std::endl;
    }

    return 0;
}
// U¿ycie regresji liniowej do aproksymacji punktów pomiarowych. Obs³ugê wyj¹tków.