#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

int main() {
	SetConsoleOutputCP(CP_UTF8);
    string nombre, programa, ciudad;
    int edad;
    
    cout << "Ingrese su nombre: ";
    getline(cin, nombre);
    cout << "Ingrese su edad: ";
    cin >> edad;
    cin.ignore(); // Limpia el buffer para poder usar getline después de un número
    cout << "Ingrese su programa de formación: ";
    getline(cin, programa);
    cout << "Ingrese su ciudad: ";
    getline(cin, ciudad);
    
    cout << "=================================" << endl;
    cout << "       PERFIL DEL APRENDIZ       " << endl;
    cout << "=================================" << endl;
    cout << "Nombre: " << nombre << endl;
    cout << "Edad: " << edad << endl;
    cout << "Programa: " << programa << endl;
    cout << "Ciudad: " << ciudad << endl;
    cout << "=================================" << endl;
    
    return 0;
}
