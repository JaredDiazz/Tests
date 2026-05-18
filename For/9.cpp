#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Ingresa un numero:";
    cin >> n;

    if (n <= 0) {
        cout << "Debes ingresar un número mayor a 0." << endl;
    } else {
        int a = 0, b = 1, siguiente;
        for (int i = 1; i <= n; i++) {
            cout << i << ": " << a << endl;

            siguiente = a + b;
            a = b;
            b = siguiente;
        }

        cout << "-------------------------------------------" << endl;
    }

    return 0;
}