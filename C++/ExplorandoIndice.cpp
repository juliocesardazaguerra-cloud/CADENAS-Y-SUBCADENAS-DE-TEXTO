#include<iostream>
#include <string>
#include <windows.h>
using namespace std;
int main() {
	SetConsoleOutputCP(CP_UTF8);
	
	string palabra;
	string penultimocaracter;
	string primercaracter;
	string tercercaracter;
	string ultimocaracter;
	
	palabra = "PROGRAMADOR";
	primercaracter = palabra.substr(0, 1);
	tercercaracter = palabra.substr(2, 1);
	penultimocaracter = palabra.substr(9, 1);
	ultimocaracter = palabra.substr(10, 1);
	
	cout << "***********************************" << endl;
	cout << "Palabra: PROGRAMADOR" << endl;
	cout << "Primer Caracter: " << primercaracter << endl;
	cout << "Tercer Carácter: " << tercercaracter << endl;
	cout << "Penúltimo Carácter: " << penultimocaracter << endl;
	cout << "Último Carácter: " << ultimocaracter << endl;
	return 0;
}