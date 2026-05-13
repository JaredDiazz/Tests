#include <iostream>
using namespace std;

int main() {
    string pass1, pass2;
    cout << "Enter password: ";
    cin >> pass1;
    cout << "Re-enter password: ";
    cin >> pass2;
    if (pass1 == pass2) {
        cout << "Password accepted." << endl;
    } else {
        cout << "Passwords do not match. Try again." << endl;
    }
    return 0;
}