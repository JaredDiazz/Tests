#include <iostream>
using namespace std;
int main() {
    int option;

    do {
        cout << "Menu:\n";
        cout << "1. Option 1\n";
        cout << "2. Option 2\n";
        cout << "3. Option 3\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> option;

        switch (option) {
            case 1:
                cout << "You selected Option 1.\n";
                break;
            case 2:
                cout << "You selected Option 2.\n";
                break;
            case 3:
                cout << "You selected Option 3.\n";
                break;
            case 4:
                cout << "Exiting the program. Goodbye!\n";
                break;
            default:
                cout << "Invalid option. Please try again.\n";
        }
    } while (option != 4);

    return 0;
}