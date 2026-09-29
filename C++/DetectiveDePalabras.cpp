#include <iostream>
#include <string>

using namespace std;

int main() {
    string palabra;
    int tamano;
    
    cout << "Por favor, ingresa una palabra:" << endl;
    cin >> palabra;

    tamano = palabra.size();
    
    cout << "Cantidad de caracteres: " << tamano << endl;
    cout << "Primera letra (posicion 1): " << palabra.substr(0, 1) << endl;
    cout << "Ultima letra (posicion " << tamano << "): " << palabra.substr(tamano - 1, 1) << endl;
    
    return 0;
}
