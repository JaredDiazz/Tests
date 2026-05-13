#include <iostream>
using namespace std;

int main() {
    int side1, side2, side3;
    cout << "Enter the lengths of the three sides of the triangle: ";
    cin >> side1 >> side2 >> side3;

    if (side1 == side2 && side2 == side3) {
        cout << "The triangle is an equilateral triangle." << endl;
    } else if (side1 == side2 || side2 == side3 || side1 == side3) {
        cout << "The triangle is an isosceles triangle." << endl;
    } else {
        cout << "The triangle is a scalene triangle." << endl;
    }

    return 0;
}