#include <iostream>
using namespace std;

int main() {
    int number;
    int sum = 0;
    int i = 1;

    cout << "Enter a number: ";
    cin >> number;

    while (i <= number) {
        if (i % 2 == 0) {
            sum += i;
        }
        i++;
    }

    cout << "The sum of the even numbers from 1 to " << number 
         << " is: " << sum << endl;
    return 0;
}