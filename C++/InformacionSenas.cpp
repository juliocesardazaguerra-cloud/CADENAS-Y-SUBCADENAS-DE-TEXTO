#include <iostream>
#include <string>

using namespace std;

int main() {
    string centro, programa, competencia, resultado;
    
    cout << "Ingrese el Centro de formación: " << endl;
    getline(cin, centro);
    cout << "Ingrese el Programa de formación: " << endl;
    getline(cin, programa);
    cout << "Ingrese la Competencia: " << endl;
    getline(cin, competencia);
    cout << "Ingrese el Resultado de aprendizaje: " << endl;
    getline(cin, resultado);
    
    cout << "\n==================================================" << endl;
    cout << "             INFORMACIÓN DEL PROCESO              " << endl;
    cout << "==================================================" << endl;
    cout << "CENTRO:      " << centro << endl;
    cout << "PROGRAMA:    " << programa << endl;
    cout << "COMPETENCIA: " << competencia << endl;
    cout << "RESULTADO:   " << resultado << endl;
    cout << "==================================================" << endl;
    
    return 0;
}
