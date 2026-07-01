#ifndef CALCULATOR_UI_H
#define CALCULATOR_UI_H

#include "Calculator.h"

class CalculatorUI
{
private:
    Calculator calculator;

public:
    void displayMenu() const;
    int getChoice() const;

    void basicOperations();
    void scientificOperations();
    void memoryOperations();
    void historyOperations();

    void run();
};

#endif