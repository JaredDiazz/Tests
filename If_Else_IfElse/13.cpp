#include <iostream>
using namespace std;

int main() {
    int calification;
    cout << "Enter the calification: ";
    cin >> calification;
    if (calification >= 90) {
        cout << "You got a A" << endl;
    } else if (calification >= 80) {
        cout << "You got a B" << endl;
    } else if (calification >= 70) {
        cout << "You got a C" << endl;
    } else if (calification >= 60) {
        cout << "You got a D" << endl;
    } else {
        cout << "You got a F" << endl;
    }

    return 0;
}