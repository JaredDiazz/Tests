#include <iostream>
using namespace std;

int main() {
    int consumoLuz;
    cout << "Digite o consumo de luz en kWh: ";
    cin >> consumoLuz;
    if (consumoLuz < 100)
    {
        cout << "Tarifa baja" << endl;
    } else if (consumoLuz >= 100 && consumoLuz < 200)
    {
        cout << "Tarifa media" << endl;
    } else if (consumoLuz >= 200)
    {
        cout << "Tarifa alta" << endl;
    } else
    {
        cout << "ingrese un valor valido" << endl;
    }
    
    return 0;
}