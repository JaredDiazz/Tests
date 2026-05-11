#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter the number of the day (1-7): ";
    cin >> number;

    if (number == 1) {
        cout << "Monday- workday" << endl;
    } else if (number == 2) {
        cout << "Tuesday- workday" << endl;
    } else if (number == 3) {
        cout << "Wednesday- workday" << endl;
    } else if (number == 4) {
        cout << "Thursday- workday" << endl;
    } else if (number == 5) {
        cout << "Friday- workday" << endl;
    } else if (number == 6) {
        cout << "Saturday - weekend" << endl;
    } else if (number == 7) {
        cout << "Sunday - weekend" << endl;
    } else {
        cout << "Invalid input. Please enter a number between 1 and 7." << endl;
    }

    return 0;
}