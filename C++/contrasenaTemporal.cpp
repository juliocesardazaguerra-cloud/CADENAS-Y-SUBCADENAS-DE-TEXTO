#include<iostream>
#include <string>
#include <windows.h>
using namespace std;
int main() {
	SetConsoleOutputCP(CP_UTF8);
	int anonacimiento;
	string contrasena;
	string nombre;
	cout << "Ingrese su nombre, por favor" << endl;
	cin >> nombre;
	cout << "Ingrese su año de nacimiento, por favor" << endl;
	cin >> anonacimiento;
	contrasena = nombre.substr(0, 2);
	cout << "Su Contrase temporal es: " << contrasena << anonacimiento << endl;
	return 0;
}