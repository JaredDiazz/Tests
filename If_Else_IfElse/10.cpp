#include <iostream>
using namespace std;

int main() {
    float weight;
    // Prompt the user to enter the weight of the package
    cout << "Enter the weight of the package (in kg): ";
    cin >> weight;

    if  (weight <= 5) {
        cout << "The price is $5" << endl;
    } else if (weight >= 6 && weight <= 10) {
        cout << "The price is $10" << endl;
    } else if (weight >= 11) {
        cout << "The price is $15" << endl;
    } else {
        cout << "Invalid weight." << endl;
    }

    return 0;
}