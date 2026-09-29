#include <iostream>
#include <string>

using namespace std;

int main() {
	
    string palabra, primeraMitad;
    int largo, puntoMedio;
    
    cout << "Solicite cualquier palabra: " << endl;
    cin >> palabra;
    
    largo = palabra.size();
    puntoMedio = largo / 2; // División entera (ej. 11 / 2 = 5)
    
    // .substr(posición_inicial, cuántas_letras_tomar)
    primeraMitad = palabra.substr(0, puntoMedio);
    
    cout << "La primera mitad de la palabra es: " << primeraMitad << endl;
    
    return 0;
}
