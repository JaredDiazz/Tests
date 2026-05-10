#include   <iostream>
using namespace std;

int main()
{
    int edad;
    cout << "Ingrese su edad: ";
    cin >> edad;

    if (edad < 18)
    {
        cout << "Eres menor de edad." << endl;
    }
    else if (edad >= 18)
    {
        cout << "Eres un adulto." << endl;
    }
    return 0;
}   