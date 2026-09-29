#include <iostream>
#include <string>

using namespace std;
int main(){
	string nombre;
	string usuario;
	
	cout<<"Ingrese su nombre, por favor"<<endl;
	cin >> nombre;
	
	usuario = nombre.substr(0,3);
	cout<<usuario << "_ADSO" << endl;
	
	return 0;
}