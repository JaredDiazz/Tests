#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Enter your age: ";
    cin >> age;
    if (age <= 4) {
        cout << "You not paid." << endl;
    } else if (age >= 5 && age <= 12) {
        cout << "You paid $5." << endl;
    } else {
        cout << "You paid $10." << endl;
    }

    return 0;
}