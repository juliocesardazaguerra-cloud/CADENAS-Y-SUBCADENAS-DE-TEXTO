#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

int main() {
	 SetConsoleOutputCP(CP_UTF8);
    // Variables para almacenar los datos del aprendiz
    string nombreCompleto;
    string documento;
    int edad;
    string ciudad;
    string programa;
    string ficha;
    string correo;

    // Entrada de datos
    cout << "=== SISTEMA DE REGISTRO DEL APRENDIZ ===" << endl;
    
    cout << "Ingrese su nombre completo: ";
    getline(cin, nombreCompleto);
    
    cout << "Ingrese su documento de identidad: ";
    getline(cin, documento);
    
    cout << "Ingrese su edad: ";
    cin >> edad;
    cin.ignore(); // Limpiar el búfer para poder usar getline después
    
    cout << "Ingrese su ciudad: ";
    getline(cin, ciudad);
    
    cout << "Ingrese su programa de formacion: ";
    getline(cin, programa);
    
    cout << "Ingrese su numero de ficha: ";
    getline(cin, ficha);
    
    cout << "Ingrese su correo electronico: ";
    getline(cin, correo);

    // Procesamiento de datos de texto (Strings)
    int totalCaracteres = nombreCompleto.length();
    
    char primeraLetra = nombreCompleto[0];
    char ultimaLetra = nombreCompleto[totalCaracteres - 1];
    
    // Subcadena de las tres primeras letras
    string tresPrimeras = nombreCompleto.substr(0, 3);
    
    // Subcadena para la contraseña (2 primeras letras del nombre + 4 últimos dígitos del documento)
    string dosPrimerasNombre = nombreCompleto.substr(0, 2);
    string ultimosCuatroDoc = "";
    if (documento.length() >= 4) {
        ultimosCuatroDoc = documento.substr(documento.length() - 4);
    } else {
        ultimosCuatroDoc = documento; // Por si el documento tiene menos de 4 caracteres
    }
    string contrasenaTemporal = dosPrimerasNombre + ultimosCuatroDoc;

    // Salida de datos - Ficha Decorada
    cout << "\n=============================================" << endl;
    cout << "         FICHA DE REGISTRO DEL APRENDIZ      " << endl;
    cout << "=============================================" << endl;
    cout << " Nombre Completo: " << nombreCompleto << endl;
    cout << " Documento:       " << documento << endl;
    cout << " Edad:            " << edad << " anos" << endl;
    cout << " Ciudad:          " << ciudad << endl;
    cout << " Programa:        " << programa << endl;
    cout << " Ficha:           " << ficha << endl;
    cout << " Correo:          " << correo << endl;
    cout << "=============================================" << endl;

    // Mostrar el procesamiento de la información
    cout << "\n=============================================" << endl;
    cout << "            REPORTE DE INFORMACION           " << endl;
    cout << "=============================================" << endl;
    cout << "1. Cantidad total de caracteres del nombre: " << totalCaracteres << endl;
    cout << "2. Primera letra: '" << primeraLetra << "' | Ultima letra: '" << ultimaLetra << "'" << endl;
    cout << "3. Tres primeras letras del nombre: " << tresPrimeras << endl;
    cout << "4. Contrasena temporal generada: " << contrasenaTemporal << endl;
    cout << "=============================================" << endl;

    return 0;
}
