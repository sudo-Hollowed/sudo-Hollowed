#include <iostream>
#include <string>
#include <limits>

using namespace std;

// Function to perform addition
double add(double a, double b) {
    return a + b;
}

// Function to perform subtraction
double subtract(double a, double b) {
    return a - b;
}

// Function to perform multiplication
double multiply(double a, double b) {
    return a * b;
}

// Function to perform division
double divide(double a, double b) {
    if (b == 0) {
        throw "Error: Division by zero!";
    }
    return a / b;
}

// Function to get valid input from the user
double getValidInput(const string& prompt) {
    double num;
    while (true) {
        cout << prompt;
        cin >> num;
        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits <double>::max(), '\n');
            cout << "Invalid input. Please enter a valid number.\n";
        } else {
            break;
        }
    }
    return num;
}

int main() {
    double num1, num2;
    char op;

    cout << "Welcome to the Command-Line Calculator!\n";

    // Get input from the user
    num1 = getValidInput("Enter the first number: ");
    cout << "Enter the operation (+, -, *, /): ";
    cin >> op;
    num2 = getValidInput("Enter the second number: ");

    // Perform the operation based on the operator entered
    try {
        double result;
        switch (op) {
            case '+':
                result = add(num1, num2);
                break;
            case '-':
                result = subtract(num1, num2);
                break;
            case '*':
                result = multiply(num1, num2);
                break;
            case '/':
                result = divide(num1, num2);
                break;
            default:
                throw "Invalid operator!";
        }
        cout << "Result: " << result << endl;
    } catch (const char* msg) {
        cout << msg << endl;
    }
    std::cout << '\n';
	std::cout <<"Press Enter to exit...." ;
	std::cin.ignore();
	std::cin.get();


    cout << "Thank you for using the Command-Line Calculator!\n";

    return 0;
}