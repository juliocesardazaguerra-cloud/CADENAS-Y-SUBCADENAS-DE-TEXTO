#include<iostream>
#include <string>
#include <windows.h>
using namespace std;

int main() {
	SetConsoleOutputCP(CP_UTF8);
	
	string ciudad;
	int edad;
	string nombre;
	string programa;
	
	cout << "Ingrese su nombre, por favor" << endl;
	cin >> nombre;
	cout << "Ingrese su edad, por favor" << endl;
	cin >> edad;
	cout << "Ingrese su programa, por favor" << endl;
	cin >> programa;
	cout << "Ingrese su ciudad, por favor" << endl;
	cin >> ciudad;
	cout << "************************************" << endl;
	cout << nombre << " | " << programa << " | " << ciudad << endl;
	return 0;
}