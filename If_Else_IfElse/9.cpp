#include <iostream>
using namespace std;

int main() {
    int number;
    int classAbsent;

    cout << "Enter your grade average: ";
    cin >> number;
    cout << "Enter the number of classes you missed: ";
    cin >> classAbsent;

    if (number >= 70 && classAbsent <= 3) {
        cout << "You are eligible for the scholarship." << endl;
    } else {
        cout << "You are not eligible for the scholarship." << endl;
    }

    return 0;
}