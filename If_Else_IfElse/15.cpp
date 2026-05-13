#include <iostream>
using namespace std;

int main() {
    int velocity;
    cout << "Enter the velocity of the car (Km/h): ";
    cin >> velocity;

    if (velocity >= 60 && velocity <= 79) {
        cout << "You are speeding! You received a traffic ticket!" << endl;
    } else if (velocity >= 80) {
        cout << "You are speeding! You received a most several traffic ticket!" << endl;
    } else {
        cout << "You are driving at a safe speed." << endl;
    }

    return 0;
}