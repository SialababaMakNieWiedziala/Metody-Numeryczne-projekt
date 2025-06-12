# 📐 Projekt: Biblioteka metod numerycznych

## 🧾 Opis
Ten projekt zawiera zaimplementowaną w języku C++ bibliotekę metod numerycznych. Biblioteka obejmuje podstawowe techniki takie jak:

- Aproksymacja metodą najmniejszych kwadratów
- Interpolacja metodą Lagrange’a
- Całkowanie numeryczne (metoda trapezów)
- Rozwiązywanie układów równań liniowych (eliminacja Gaussa)
- Rozwiązywanie równań nieliniowych (metoda bisekcji)
- Rozwiązywanie równań różniczkowych zwyczajnych (metoda Eulera)

## 📁 Struktura katalogów
PROJEKT/
├── include/
│   ├── approximation.h #Aproksymacja liniowa
│   ├── interpolation.h #Interpolacja Lagrange’a
│   ├── integration.h #Całkowanie numeryczne
│   ├── linear_solver.h #Eliminacja Gaussa
│   ├── nonlinear_solver.h #Bisekcja
│   └── ode_solver.h #Euler ODE
│
├── src/
│   ├── approximation.cpp
│   ├── interpolation.cpp
│   ├── integration.cpp
│   ├── linear_solver.cpp
│   ├── nonlinear_solver.cpp
│   └── ode_solver.cpp
│
├── examples/
│   ├── linear_regression_example.cpp  #Przykład użycia regresji liniowej
│   └── ode_solver_example.cpp #Przykład rozwiązania ODE
│
├── tests/
│   └── test_all.cpp #Testy jednostkowe
│
├── README.md


## 📊 Przykłady użycia (folder `examples/`)

- **Regresja liniowa** (`linear_regression_example.cpp`)  
Pokazuje, jak znaleźć linię najlepszego dopasowania do danych punktów.

- **Rozwiązywanie ODE** (`ode_solver_example.cpp`)  
Użycie metody Eulera do rozwiązania równania różniczkowego pierwszego rzędu.

## ⚙️ Kompilacja i środowisko

- Język: C++
- IDE: Visual Studio 2022
- Standard: C++17
- Kompilacja: wystarczy zbudować projekt w Visual Studio
