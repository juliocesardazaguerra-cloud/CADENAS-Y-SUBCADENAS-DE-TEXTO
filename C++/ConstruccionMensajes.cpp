#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

int main() {
	SetConsoleOutputCP(CP_UTF8);
    string nombre;
    
    cout << "Ingrese su nombre: " << endl;
    getline(cin, nombre); // Para leer nombres completos con espacios
    
    cout << "Estimado/a " << nombre << ", le damos una cordial bienvenida a nuestra plataforma institucional." << endl;
    
    return 0;
}
