#include <iostream>
#include <cmath>
using namespace std;


const double PI = 3.14159265359;

// Function to calculate the area of a circle
double calculateArea(double radius) {
    return PI * pow(radius, 2);
}

// Function to calculate the area of a rectangle
double calculateArea(double length, double width) {
    return length * width;
}

// Function to calculate the area of a triangle
double calculateArea(double base, double height, char triangleType) {
    if (triangleType == 'e' || triangleType == 'E') {
        // Calculate area of an equilateral triangle
        return (sqrt(3) / 4) * pow(base, 2);
    } else {
        // Calculate area of a right-angled triangle
        return 0.5 * base * height;
    }
}

int main() {
    char choice;
    do {
        cout << "Choose a shape to calculate its area:\n";
        cout << "1. Circle\n";
        cout << "2. Rectangle\n";
        cout << "3. Triangle (right-angled or equilateral)\n";
        cout << "Enter your choice (1/2/3): ";
        cin >> choice;

        switch (choice) {
            case '1': {
                double radius;
                cout << "Enter the radius of the circle: ";
                cin >> radius;
                double area = calculateArea(radius);
                cout << "Area of the circle: " << area <<endl;
                break;
            }
            case '2': {
                double length, width;
                cout << "Enter the length of the rectangle: ";
                cin >> length;
                cout << "Enter the width of the rectangle:\n ";
                cin >> width;
                double area = calculateArea(length, width);
                std::cout <<"Area of the rectangle: " << area <<endl;
                break;
            }
            case '3': {
                double base, height;
                char triangleType;
                cout << "Enter the base of the triangle: ";
                cin >> base;
                cout << "Enter the height of the triangle: ";
                cin >> height;
                cout << "Is the triangle (E)quilateral or (R)ight-angled? ";
                cin >> triangleType;
                double area = calculateArea(base, height, triangleType);
                cout << "Area of the triangle: " << area <<endl;
                break;
            }
            default:
                cout << "Invalid choice. Please try again.\n";
                break;
        }

        cout << "Do you want to calculate the area of another shape? (Y/N): ";
        cin >> choice;
    } while (choice == 'Y' || choice == 'y');

    return 0;
}

