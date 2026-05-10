#include    <iostream>
using namespace std;

int main()
{
    int numero;
    cout << "Enter a number: ";
    cin >> numero;
    if (numero % 2 == 0)
        cout << "The number is even." << endl;
    else
        cout << "The number is odd." << endl;
    return 0;
}