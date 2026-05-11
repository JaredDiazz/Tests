#include <iostream>
#include <random>
using namespace std;

int main() {
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(1, 100);

    int number = dis(gen);
    cout << "Enter a number between 1 and 100: ";
    int guess;
    do {guess = 0; // Initialize guess to a value that is not equal to number
        cin >> guess;
        if (guess < number) {
            cout << "Too low! Try again: ";
        } else if (guess > number) {
            cout << "Too high! Try again: ";
        } else {
            cout << "Congratulations! You guessed the number: " << number << endl;
        }
    } while (guess != number);
    
    return 0;
}