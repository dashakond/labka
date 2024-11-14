// main.cpp
#include <iostream>
#include "FuncA.h"

int main() {
    FuncA func;
    double x = 1.0;
    std::cout << "cos(" << x << ") = " << func.calculate(0, x) << std::endl;
    return 0;
}

