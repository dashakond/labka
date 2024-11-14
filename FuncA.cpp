// FuncA.cpp
#include "FuncA.h"
#include <cmath>

double FuncA::calculate(int n, double x) {
    double result = 0.0;
    for (int i = 0; i < 3; ++i) {
        result += pow(-1, i) * pow(x, 2 * i) / tgamma(2 * i + 1);
    }
    return result;
}


