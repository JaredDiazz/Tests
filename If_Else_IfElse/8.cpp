#include <iostream>
using namespace std;   

int main() {
    string username;
    string password;
    cout << "Enter username: ";
    cin >> username;
    cout << "Enter password: ";
    cin >> password;
    if (username == "admin" && password == "1234") {
        cout << "Login successful!" << endl;
    } else {
        cout << "Invalid credentials." << endl;
    }

    return 0;
}