#include   <iostream>
using namespace std;

int main()
{
    int edad;
    cout << "Enter your age: ";
    cin >> edad;

    if (edad < 18)
    {
        cout << "You are a minor." << endl;
    }
    else if (edad >= 18)
    {
        cout << "You are an adult." << endl;
    }
    return 0;
}   