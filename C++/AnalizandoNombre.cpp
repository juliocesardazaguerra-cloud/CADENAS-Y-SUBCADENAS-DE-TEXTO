#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

int main() {
	
	SetConsoleOutputCP(CP_UTF8);
	
    string nombreCompleto;
    int totalLetras;

    cout << "Solicite el nombre completo del usuario:" << endl;
    // Usamos getline para poder leer nombres con espacios intermedios
    getline(cin, nombreCompleto);

    totalLetras = nombreCompleto.size();

    cout << "• Cantidad de letras: " << totalLetras << endl;

    // Primera letra (posición 0, tomamos 1) y última letra (posición total-1, tomamos 1)
    cout << "• Primera letra: " << nombreCompleto.substr(0, 1) << endl;
    cout << "  Última letra: " << nombreCompleto.substr(totalLetras - 1, 1) << endl;

    // Tres primeras letras (posición 0, tomamos 3)
    cout << "• Tres primeras letras: " << nombreCompleto.substr(0, 3) << endl;
    
    // Tres últimas letras (empezamos 3 posiciones antes del final y tomamos 3)
    cout << "  Tres últimas letras: " << nombreCompleto.substr(totalLetras - 3, 3) << endl;

    return 0;
}
