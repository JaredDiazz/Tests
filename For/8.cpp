#include <iostream>
using namespace std;

int main() {
    cout << "Numeros divisibles por 3 y por 5 (del 1 al 100):" << endl;
    int contador = 0;
    for (int i = 1; i <= 100; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            cout << i << " ";
            contador++;
        }
    }

    cout << "Total encontrados: " << contador << endl;

    return 0;
}