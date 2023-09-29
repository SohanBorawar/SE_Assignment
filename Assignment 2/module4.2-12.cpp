#include <iostream>
#include <cmath>
using namespace std;
const double PI = 3.14159265359;

// Function to calculate the area of a rectangle
double calculateArea(double length, double breadth) {
    return length * breadth;
}

// Function to calculate the area of a triangle
double calculateArea(double base, double height, char shape) {
    if (shape == 'T' || shape == 't') {
        return 0.5 * base * height;
    } else {
        cout << "Invalid shape code for triangle." << endl;
        return 0.0;
    }
}

// Function to calculate the area of a circle
double calculateArea(double radius, char shape) {
    if (shape == 'C' || shape == 'c') {
        return PI * radius * radius;
    } else {
        cout << "Invalid shape code for circle." << endl;
        return 0.0;
    }
}

int main() {
    char shape;
    cout << "Enter the shape code (R for rectangle, T for triangle, C for circle): ";
    cin >> shape;

    double area = 0.0;

    if (shape == 'R' || shape == 'r') {
        double length, breadth;
        cout << "Enter length and breadth of rectangle: ";
        cin >> length >> breadth;
        area = calculateArea(length, breadth);
    } else if (shape == 'T' || shape == 't') {
        double base, height;
        cout << "Enter base and height of triangle: ";
        cin >> base >> height;
        area = calculateArea(base, height, 'T');
    } else if (shape == 'C' || shape == 'c') {
        double radius;
        cout << "Enter the radius of circle: ";
        cin >> radius;
        area = calculateArea(radius, 'C');
    } else {
        cout << "Invalid shape code." << endl;
        return 1;
    }

    cout << "Area of the shape: " << area << endl;

    return 0;
}
