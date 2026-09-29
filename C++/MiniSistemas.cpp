#include <iostream>
#include <string>

using namespace std;

int main() {
    string nombre, correo, ciudad, programa;
    int edad;
    
    cout << "Ingrese su nombre: ";
    getline(cin, nombre);
    cout << "Ingrese su edad: ";
    cin >> edad;
    cin.ignore(); // Limpia la memoria para que el siguiente getline no se salte
    cout << "Ingrese su correo electrónico: ";
    getline(cin, correo);
    cout << "Ingrese su ciudad: ";
    getline(cin, ciudad);
    cout << "Ingrese su programa: ";
    getline(cin, programa);
    
    cout << "\n**************************************************" << endl;
    cout << "*                 SISTEMA APRENDIZ               *" << endl;
    cout << "**************************************************" << endl;
    cout << "* Nombre:   " << nombre << endl;
    cout << "* Edad:     " << edad << " años" << endl;
    cout << "* Correo:   " << correo << endl;
    cout << "* Ciudad:   " << ciudad << endl;
    cout << "* Programa: " << programa << endl;
    cout << "**************************************************" << endl;
    
    return 0;
}
