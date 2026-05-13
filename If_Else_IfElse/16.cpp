#include <iostream>
using namespace std;

int main() {
    int count = 3;
    string user, pass;
    cout << "Enter username: ";
    cin >> user;    
    cout << "Enter password: ";
    cin >> pass;
    for (size_t i = 1; i < count; i++)
    {
        if (user == "admin" && pass == "admin123") {
            cout << "Welcome admin!" << endl;
            break;
        }
        else {
            cout << "Invalid username or password. Try again." << endl;
            cout << "Enter username: ";
            cin >> user;    
            cout << "Enter password: ";
            cin >> pass;
        }
    }
    return 0;
}