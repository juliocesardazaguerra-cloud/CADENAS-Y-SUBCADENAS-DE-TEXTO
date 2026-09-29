#include <iostream>
#include <string>

using namespace std;
int main() {

    string palabra;
    string resultado;

    palabra = "PROGRAMADOR";

    resultado = palabra.substr(3, 5);

    cout << resultado <<endl;

    return 0;
}