#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <string>
#include <vector>

class Calculator
{
private:
    double memory;
    std::vector<std::string> history;

public:
    Calculator();

    // ==========================
    // Basic Arithmetic
    // ==========================
    double add(double a, double b);
    double subtract(double a, double b);
    double multiply(double a, double b);
    double divide(double a, double b);
    double modulus(int a, int b);
    double power(double base, double exponent);
    double squareRoot(double value);

    // ==========================
    // Scientific Functions
    // ==========================
    long long factorial(int n);
    double absolute(double value);
    double sine(double angle);
    double cosine(double angle);
    double tangent(double angle);
    double logarithm(double value);
    double naturalLog(double value);

    // ==========================
    // Memory Functions
    // ==========================
    void memoryStore(double value);
    double memoryRecall() const;
    void memoryClear();

    // ==========================
    // History Functions
    // ==========================
    void addToHistory(const std::string& expression, double result);
    void showHistory() const;
    void clearHistory();
};

#endif