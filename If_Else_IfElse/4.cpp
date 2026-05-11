#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter your calification: ";
    cin >> number;

    if (number >= 60) {
        cout << "You passed." << endl;
    } else {
        cout << "You failed." << endl;
    }

    return 0;
}