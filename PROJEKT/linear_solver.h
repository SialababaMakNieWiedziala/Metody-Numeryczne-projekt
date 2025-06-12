#pragma once
#include <vector>

/**
 * @brief Rozwi�zuje uk�ad r�wna� liniowych Ax = b metod� eliminacji Gaussa.
 *
 * Funkcja przyjmuje macierz wsp�czynnik�w A oraz wektor wyraz�w wolnych b,
 * i zwraca wektor rozwi�za� x, spe�niaj�cy r�wnanie Ax = b.
 * Metoda eliminacji Gaussa polega na przekszta�ceniu macierzy A do postaci schodkowej,
 * a nast�pnie obliczeniu rozwi�zania przez podstawianie wsteczne.
 *
 * @param A Macierz wsp�czynnik�w uk�adu (wymiar n x n)
 * @param b Wektor wyraz�w wolnych (wymiar n)
 * @return std::vector<double> Wektor rozwi�za� x uk�adu r�wna�
 *
 * @example
 * std::vector<std::vector<double>> A = {{2, 1}, {5, 7}};
 * std::vector<double> b = {11, 13};
 * std::vector<double> x = gaussianElimination(A, b);
 * // x powinno by� oko�o {7.1111, -3.2222}
 */
std::vector<double> gaussianElimination(std::vector<std::vector<double>> A, std::vector<double> b);


