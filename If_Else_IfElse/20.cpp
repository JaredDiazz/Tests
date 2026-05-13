#include <iostream>
using namespace std;

int main() {
    int edad, infracciones, experiencia;
    cout << "Ingrese la edad del conductor: ";
    cin >> edad;    
    cout << "Ingrese el numero de infracciones cometidas: ";
    cin >> infracciones;
    cout << "Ingrese la experiencia del conductor: ";
    cin >> experiencia;

    if (edad < 18) {
        cout << "El conductor no es apto para conducir." << endl;
    } else if (infracciones > 3) {
        cout << "El conductor no es apto para conducir." << endl;
    } else if (experiencia < 2) {
        cout << "El conductor no es apto para conducir." << endl;
    } else {
        cout << "El conductor es apto para conducir." << endl;
    }
    
    return 0;
}