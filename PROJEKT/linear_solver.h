#pragma once
#include <vector>

/**
 * @brief Rozwi¹zuje uk³ad równañ liniowych Ax = b metod¹ eliminacji Gaussa.
 *
 * Funkcja przyjmuje macierz wspó³czynników A oraz wektor wyrazów wolnych b,
 * i zwraca wektor rozwi¹zañ x, spe³niaj¹cy równanie Ax = b.
 * Metoda eliminacji Gaussa polega na przekszta³ceniu macierzy A do postaci schodkowej,
 * a nastêpnie obliczeniu rozwi¹zania przez podstawianie wsteczne.
 *
 * @param A Macierz wspó³czynników uk³adu (wymiar n x n)
 * @param b Wektor wyrazów wolnych (wymiar n)
 * @return std::vector<double> Wektor rozwi¹zañ x uk³adu równañ
 *
 * @example
 * std::vector<std::vector<double>> A = {{2, 1}, {5, 7}};
 * std::vector<double> b = {11, 13};
 * std::vector<double> x = gaussianElimination(A, b);
 * // x powinno byæ oko³o {7.1111, -3.2222}
 */
std::vector<double> gaussianElimination(std::vector<std::vector<double>> A, std::vector<double> b);


