#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    int sum1 = abs(100 - num1);
    int sum2 = abs(100 - num2);

    if (sum1 < sum2) {
        cout << num1 << " is closer to 100." << endl;
    } else if (sum1 > sum2) {
        cout << num2 << " is closer to 100." << endl;
    } else {
        cout << "Both numbers are equally close to 100." << endl;
    }

    return 0;
}