#include <cassert>
#include <cmath>
#include <iostream>
#include <stdexcept>
#include <vector>

#include "approximation.h"
#include "interpolation.h"
#include "integration.h"
#include "linear_solver.h"
#include "nonlinear_solver.h"
#include "ode_solver.h"

bool approxEqual(double a, double b, double eps = 1e-6) {
    return std::abs(a - b) < eps;
}

// Aproksymacja
void test_linearLeastSquares() {
    std::vector<double> x = { 1, 2, 3 };
    std::vector<double> y = { 2, 4, 6 };
    auto result = linearLeastSquares(x, y);
    double a = result.first;
    double b = result.second;

    assert(approxEqual(a, 2.0));
    assert(approxEqual(b, 0.0));

    // B³¹d: ró¿ne rozmiary wektorów
    try {
        linearLeastSquares({ 1, 2 }, { 3 });
        assert(false); // Powinien zostaæ rzucony wyj¹tek
    }
    catch (const std::invalid_argument&) {
        // OK
    }
}

// Interpolacja
void test_lagrangeInterpolation() {
    std::vector<double> x = { 1, 2, 3 };
    std::vector<double> y = { 2, 3, 5 };
    double yp = lagrangeInterpolation(x, y, 2.0);
    assert(approxEqual(yp, 3.0));

    try {
        lagrangeInterpolation({ 1, 2 }, { 3 }, 2.0);
        assert(false);
    }
    catch (const std::invalid_argument&) {
        // OK
    }
}

// Ca³kowanie
void test_trapezoidalRule() {
    auto f = [](double x) { return x * x; };
    double result = trapezoidalRule(f, 0, 1, 100);
    assert(approxEqual(result, 1.0 / 3.0, 1e-2));

    try {
        trapezoidalRule(f, 0, 1, 0);
        assert(false);
    }
    catch (const std::invalid_argument&) {
        // OK
    }
}

// Uk³ad równañ liniowych
void test_gaussianElimination() {
    std::vector<std::vector<double>> A = { {2, 1}, {5, 7} };
    std::vector<double> b = { 11, 13 };
    auto x = gaussianElimination(A, b);
    assert(approxEqual(x[0], 7.1111, 1e-3));
    assert(approxEqual(x[1], -3.2222, 1e-3));

    try {
        gaussianElimination({ {1, 2, 3}, {4, 5, 6} }, { 7, 8 });
        assert(false);
    }
    catch (const std::invalid_argument&) {
        // OK
    }
}

// Równanie nieliniowe
void test_bisection() {
    auto f = [](double x) { return x * x - 2; };
    double root = bisection(f, 0.0, 2.0, 1e-6);
    assert(approxEqual(root, std::sqrt(2), 1e-4));

    try {
        bisection(f, 2.0, 3.0, 1e-6);
        assert(false);
    }
    catch (const std::invalid_argument&) {
        // OK
    }
}

// Równania ró¿niczkowe
void test_eulerMethod() {
    auto f = [](double x, double y) { return x + y; };
    auto result = eulerMethod(f, 0.0, 1.0, 0.1, 10);
    assert(result.size() == 11);
    assert(approxEqual(result[1], 1.1));
}

int main() {
    test_linearLeastSquares();
    test_lagrangeInterpolation();
    test_trapezoidalRule();
    test_gaussianElimination();
    test_bisection();
    test_eulerMethod();

    std::cout << "Wszystkie testy zakonczone pomyslnie!" << std::endl;
    return 0;
}


