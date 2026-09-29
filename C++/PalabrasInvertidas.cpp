#include <iostream>
#include <string>

using namespace std;

int main() {
    string palabra;
    
    cout << "Ingrese una palabra de exactamente 4 letras: " << endl;
    cin >> palabra;
    
    // .substr(posición, cantidad)
    string letra0 = palabra.substr(0, 1);
    string letra1 = palabra.substr(1, 1);
    string letra2 = palabra.substr(2, 1);
    string letra3 = palabra.substr(3, 1);
    
    cout << "Palabra invertida: " << letra3 << letra2 << letra1 << letra0 << endl;
    
    return 0;
}
