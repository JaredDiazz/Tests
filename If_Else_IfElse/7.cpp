#include <iostream>
using namespace std;

int main() {
    double number;
    cout << "Enter the temperature: ";
    cin >> number;

    if (number < 15) {
        cout << "The temperature is freezing." << endl;
    } else if (number >= 15 && number <= 30) {
        cout << "The temperature is moderate." << endl;
    } else {
        cout << "The temperature is hot." << endl;
    }

    return 0;
}