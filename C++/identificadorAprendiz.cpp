#include <iostream>
#include <string>

using namespace std;

int main(){
    string nombre, apellido;
    string identificador1, identificador2; // Corregido el error de dedo aquí
    
    cout << "Ingreso su nombre, por favor: ";
    cin >> nombre;
    
    cout << "Ingreso su apellido, por favor: ";
    cin >> apellido;
    
    // Corregido: se quitó el nombre de la variable de adentro del substr
    identificador1 = nombre.substr(0, 3);
    identificador2 = apellido.substr(0, 3);
    
    cout << identificador1 << identificador2 << endl;
    return 0;
}
