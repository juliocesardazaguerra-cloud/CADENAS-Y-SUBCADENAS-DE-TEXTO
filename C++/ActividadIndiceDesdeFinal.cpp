#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

int main() {
	SetConsoleOutputCP(CP_UTF8);
    int largo;
    string palabra;
    string penultima;
    string primera;
    string ultima;

    cout << "Solicite una palabra:" << endl;
    cin >> palabra;

    largo = palabra.size();

    primera = palabra.substr(0, 1);

    ultima = palabra.substr(largo - 1, 1);

    penultima = palabra.substr(largo - 2, 1);

    cout << "Primera letra: " << primera << endl;
    cout << "Última letra: " << ultima << endl;
    cout << "Segunda letra contada desde el final: " << penultima << endl;

    return 0;
}
