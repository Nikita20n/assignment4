#include <iostream>
using namespace std;

// Function to add two numbers
int mathOperation(int a, int b) {
    return a + b;
}

// Function to subtract two numbers
int mathOperation(int a, int b, char operation) {
    if (operation == '-') {
        return a - b;
    } else {
        cout << "Invalid operation!";
        return 0;
    }
}

// Function to multiply two numbers
double mathOperation(double a, double b) {
    return a * b;
}

// Function to divide two numbers
double mathOperation(double a, double b, char operation) {
    if (operation == '/') {
        if (b != 0) {
            return a / b;
        } else {
            cout << "Cannot divide by zero!";
            return 0;
        }
    } else {
        cout << "Invalid operation!";
        return 0;
    }
}

int main() {
    int intA = 10, intB = 5;
    double doubleA = 6.5, doubleB = 2.5;

    // Addition
    cout << "Addition: " << mathOperation(intA, intB) <<endl;

    // Subtraction
    char subtractionOp = '-';
    cout << "Subtraction: " << mathOperation(intA, intB, subtractionOp) <<endl;

    // Multiplication
    cout << "Multiplication: " << mathOperation(doubleA, doubleB) <<endl;

    // Division
    char divisionOp = '/';
    cout << "Division: " << mathOperation(doubleA, doubleB, divisionOp)<<endl;

    return 0;
}

