#include <iostream>
using namespace std;

int main() {
    int n, suma = 0;

    cout << "Ingresa un nmero N: ";
    cin >> n;

    for (int i = 2; i <= n; i += 2) {
        suma += i;
    }

    cout << "La suma de los numeros pares del 1 al " << n << " es: " << suma << endl;

    return 0;
}