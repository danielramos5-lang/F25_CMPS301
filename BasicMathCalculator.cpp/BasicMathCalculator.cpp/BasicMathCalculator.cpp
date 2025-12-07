#include <iostream>
#include <cmath>
#include <string>
#include <limits> // For input validation
using namespace std;

int main() {
    double num1, num2, result;
    string operation;
    char repeat = 'Y';

    cout << "Welcome to the Basic Math Calculator!" << endl;

    while (repeat == 'Y' || repeat == 'y') {
        cout << "\nEnter the first number: ";
        cin >> num1;

        cout << "Enter an operation (+, -, *, /, %, ^, sin, asin, cos, acos, tan, atan, atan2, sqrt, ceil, abs, floor, max, min, log, log10, log2, round): ";
        cin >> operation;

        // For operations that need a second number
        if (operation == "+" || operation == "-" || operation == "*" || operation == "/" ||
            operation == "%" || operation == "^" || operation == "atan2" || operation == "max" || operation == "min") {
            cout << "Enter the second number: ";
            cin >> num2;
        }

        // Perform calculation
        if (operation == "+") {
            result = num1 + num2;
        }
        else if (operation == "-") {
            result = num1 - num2;
        }
        else if (operation == "*") {
            result = num1 * num2;
        }
        else if (operation == "/") {
            if (num2 == 0) {
                cout << "Error: Division by zero!" << endl;
                continue;
            }
            result = num1 / num2;
        }
        else if (operation == "%") {
            result = static_cast<int>(num1) % static_cast<int>(num2);
        }
        else if (operation == "^") {
            result = pow(num1, num2);
        }
        else if (operation == "sin") {
            result = sin(num1);
        }
        else if (operation == "asin") {
            result = asin(num1);
        }
        else if (operation == "cos") {
            result = cos(num1);
        }
        else if (operation == "acos") {
            result = acos(num1);
        }
        else if (operation == "tan") {
            result = tan(num1);
        }
        else if (operation == "atan") {
            result = atan(num1);
        }
        else if (operation == "atan2") {
            result = atan2(num1, num2);
        }
        else if (operation == "sqrt") {
            result = sqrt(num1);
        }
        else if (operation == "ceil") {
            result = ceil(num1);
        }
        else if (operation == "abs") {
            result = fabs(num1);
        }
        else if (operation == "floor") {
            result = floor(num1);
        }
        else if (operation == "max") {
            result = fmax(num1, num2);
        }
        else if (operation == "min") {
            result = fmin(num1, num2);
        }
        else if (operation == "log") {
            result = log(num1);
        }
        else if (operation == "log10") {
            result = log10(num1);
        }
        else if (operation == "log2") {
            result = log2(num1);
        }
        else if (operation == "round") {
            result = round(num1);
        }
        else {
            cout << "Invalid operation!" << endl;
            continue;
        }

        cout << "Result: " << result << endl;

        cout << "\nWould you like to calculate another problem? (Y/N): ";
        cin >> repeat;

        // Clear input buffer in case of invalid input
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    cout << "Thanks for using the Basic Math Calculator!" << endl;
    return 0;
}
