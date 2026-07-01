#include "CalculatorUI.h"

#include <iostream>
#include <string>

using namespace std;

//--------------------------------------------------
// Main Menu
//--------------------------------------------------
void CalculatorUI::displayMenu() const
{
    cout << "\n=========================================\n";
    cout << "              CALCULATOR\n";
    cout << "=========================================\n";
    cout << "1. Basic Arithmetic\n";
    cout << "2. Scientific Functions\n";
    cout << "3. Memory\n";
    cout << "4. History\n";
    cout << "0. Exit\n";
    cout << "=========================================\n";
}

int CalculatorUI::getChoice() const
{
    int choice;

    cout << "Enter choice: ";
    cin >> choice;

    return choice;
}

//--------------------------------------------------
// Basic Operations
//--------------------------------------------------
void CalculatorUI::basicOperations()
{
    int choice;
    double a, b;
    double result = 0;

    cout << "\n========== BASIC OPERATIONS ==========\n";
    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Division\n";
    cout << "5. Modulus\n";
    cout << "6. Power\n";
    cout << "7. Square Root\n";
    cout << "0. Back\n";

    cout << "Choice : ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "First Number : ";
        cin >> a;
        cout << "Second Number: ";
        cin >> b;

        result = calculator.add(a, b);
        cout << "Result = " << result << endl;
        break;

    case 2:
        cout << "First Number : ";
        cin >> a;
        cout << "Second Number: ";
        cin >> b;

        result = calculator.subtract(a, b);
        cout << "Result = " << result << endl;
        break;

    case 3:
        cout << "First Number : ";
        cin >> a;
        cout << "Second Number: ";
        cin >> b;

        result = calculator.multiply(a, b);
        cout << "Result = " << result << endl;
        break;

    case 4:
        cout << "Dividend : ";
        cin >> a;
        cout << "Divisor  : ";
        cin >> b;

        result = calculator.divide(a, b);
        cout << "Result = " << result << endl;
        break;

    case 5:
    {
        int x, y;

        cout << "First Integer : ";
        cin >> x;
        cout << "Second Integer: ";
        cin >> y;

        result = calculator.modulus(x, y);
        cout << "Result = " << result << endl;
        break;
    }

    case 6:
        cout << "Base     : ";
        cin >> a;
        cout << "Exponent : ";
        cin >> b;

        result = calculator.power(a, b);
        cout << "Result = " << result << endl;
        break;

    case 7:
        cout << "Number : ";
        cin >> a;

        result = calculator.squareRoot(a);
        cout << "Result = " << result << endl;
        break;

    case 0:
        return;

    default:
        cout << "Invalid Choice!\n";
    }
}

//--------------------------------------------------
// Scientific Operations
//--------------------------------------------------
void CalculatorUI::scientificOperations()
{
    int choice;

    cout << "\n======= SCIENTIFIC FUNCTIONS =======\n";
    cout << "1. Factorial\n";
    cout << "2. Absolute Value\n";
    cout << "3. Sine\n";
    cout << "4. Cosine\n";
    cout << "5. Tangent\n";
    cout << "6. Logarithm (Base 10)\n";
    cout << "7. Natural Log\n";
    cout << "0. Back\n";

    cout << "Choice : ";
    cin >> choice;

    double value;
    double result = 0;

    switch (choice)
    {
    case 1:
    {
        int n;

        cout << "Enter Number : ";
        cin >> n;

        cout << "Result = "
            << calculator.factorial(n)
            << endl;

        break;
    }

    case 2:
        cout << "Enter Number : ";
        cin >> value;

        result = calculator.absolute(value);

        cout << "Result = " << result << endl;
        break;

    case 3:
        cout << "Angle (Degrees/Radians depending on implementation): ";
        cin >> value;

        result = calculator.sine(value);

        cout << "Result = " << result << endl;
        break;

    case 4:
        cout << "Angle : ";
        cin >> value;

        result = calculator.cosine(value);

        cout << "Result = " << result << endl;
        break;

    case 5:
        cout << "Angle : ";
        cin >> value;

        result = calculator.tangent(value);

        cout << "Result = " << result << endl;
        break;

    case 6:
        cout << "Number : ";
        cin >> value;

        result = calculator.logarithm(value);

        cout << "Result = " << result << endl;
        break;

    case 7:
        cout << "Number : ";
        cin >> value;

        result = calculator.naturalLog(value);

        cout << "Result = " << result << endl;
        break;

    case 0:
        return;

    default:
        cout << "Invalid Choice!\n";
    }
}

//--------------------------------------------------
// Memory
//--------------------------------------------------
void CalculatorUI::memoryOperations()
{
    int choice;

    cout << "\n=========== MEMORY ===========\n";
    cout << "1. Store Value\n";
    cout << "2. Recall Value\n";
    cout << "3. Clear Memory\n";
    cout << "0. Back\n";

    cout << "Choice : ";
    cin >> choice;

    switch (choice)
    {
    case 1:
    {
        double value;

        cout << "Value : ";
        cin >> value;

        calculator.memoryStore(value);

        cout << "Stored Successfully.\n";
        break;
    }

    case 2:
        cout << "Memory = "
            << calculator.memoryRecall()
            << endl;
        break;

    case 3:
        calculator.memoryClear();
        cout << "Memory Cleared.\n";
        break;

    case 0:
        return;

    default:
        cout << "Invalid Choice!\n";
    }
}

//--------------------------------------------------
// History
//--------------------------------------------------
void CalculatorUI::historyOperations()
{
    int choice;

    cout << "\n=========== HISTORY ===========\n";
    cout << "1. Show History\n";
    cout << "2. Clear History\n";
    cout << "0. Back\n";

    cout << "Choice : ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        calculator.showHistory();
        break;

    case 2:
        calculator.clearHistory();
        cout << "History Cleared.\n";
        break;

    case 0:
        return;

    default:
        cout << "Invalid Choice!\n";
    }
}

//--------------------------------------------------
// Run
//--------------------------------------------------
void CalculatorUI::run()
{
    int choice;

    do
    {
        displayMenu();

        choice = getChoice();

        switch (choice)
        {
        case 1:
            basicOperations();
            break;

        case 2:
            scientificOperations();
            break;

        case 3:
            memoryOperations();
            break;

        case 4:
            historyOperations();
            break;

        case 0:
            cout << "\nThank You for Using Calculator!\n";
            break;

        default:
            cout << "\nInvalid Choice!\n";
        }

    } while (choice != 0);
}