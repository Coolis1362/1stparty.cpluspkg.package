#ifndef CPLUS_MATH_H
#define CPLUS_MATH_H

namespace cplus {
    // Integer operations
    inline int add(int a, int b) { return a + b; }
    inline int subtract(int a, int b) { return a - b; }
    inline int multiply(int a, int b) { return a * b; }
    inline int divide(int a, int b) {
        if (b == 0) {
            throw "Division by zero";
        }
        return a / b;
    }

    // Floating-point operations
    inline double add(double a, double b) { return a + b; }
    inline double subtract(double a, double b) { return a - b; }
    inline double multiply(double a, double b) { return a * b; }
    inline double divide(double a, double b) {
        if (b == 0.0) {
            throw "Division by zero";
        }
        return a / b;
    }
}

#endif // CPLUS_MATH_H
