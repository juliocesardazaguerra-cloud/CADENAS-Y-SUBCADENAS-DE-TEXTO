#include <iostream>
#include <string> // Agregado para que funcione bien el texto tipo string
// Carnet del aprendiz

using namespace std;

int main(){
    string nombre, documento, programa;
    int ficha;
    
    cout << "Registro de informacion para el carnet" << endl;
    cout << "Nombre Completo: " << endl;
    getline(cin, nombre);
    
    cout << "Numero de documento: " << endl;
    getline(cin,documento);
    
    cout << "Nombre del programa: " << endl;
    getline(cin,programa);
    
    cout << "Numero de la ficha: " << endl;
    cin >> ficha;
    cin.ignore();
	    
    cout << "***********************************" << endl;
    cout << "Carnet del aprendiz" << endl;
    cout << "Nombre: " << nombre << endl;
    cout << "Documento: " << documento << endl;
    cout << "Programa: " << programa << endl;
    cout << "Ficha: " << ficha << endl;
    cout << "***********************************";
    return 0;
}
