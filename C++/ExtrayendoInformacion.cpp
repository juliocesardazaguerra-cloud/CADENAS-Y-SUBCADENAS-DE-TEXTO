#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

int main() {
	SetConsoleOutputCP(CP_UTF8);
    string palabra = "DESARROLLADOR";
    string resultado;

    // .substr(posición_inicial, cuántas_letras_tomar)
    resultado = palabra.substr(5, 4);

    cout << "Subcadena extraída: " << resultado << endl;

    return 0;
}
