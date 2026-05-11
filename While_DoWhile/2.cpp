#include <iostream>
using namespace std;

int main() {

    int number;
    int sum = 0;

    cout << "Enter numbers (0 to finish):" << endl;

    do {
        cin >> number;
        sum += number;
    } while (number != 0);

    cout << "The sum is: " << sum << endl;

    return 0;
}