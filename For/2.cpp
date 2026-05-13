#include <iostream>
using namespace std;

int main() {

    // suma de numeros pares del 1 al 50
    for (int i = 1; i < 50; i++) {
        if (i % 2 == 0) {
            cout << i + 1 << endl;
        }
    }
    return 0;
}