#include <iostream>
using namespace std;

int main() {
    int n, suma = 0;

    cout << "Ingresa un numero N: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        suma += i;
    }

    cout << "La suma de los primeros " << n << " numeros es: " << suma << endl;

    return 0;
}