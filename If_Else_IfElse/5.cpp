#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter the amount of your purchase: ";
    cin >> number;

    if (number > 100) {
        cout << "You get a 10% discount!" << endl;
        cout << "Your total is: " << number * 0.9 << endl;
    } else {
        cout << "No discount for you." << endl;
    }

    return 0;
}