/************************************************/
// Fichero: p1e8.cpp
// Lee una cadena y muestra la cadena sin la primera palabra
/************************************************/



#include <iostream>
#include <cstring>

using namespace std;

int main(){
	int tam=50,i;
	char cadena[tam];
	char *p=cadena;
	int posicion;

	cout << "Introduce cadena" << endl;
	cin.getline(cadena, tam);      // almacena la cadena
	
	for(i=0; i<=tam; i++){
		if(*p==' '){              // si encuentra un espacio, se pone en la siguiente posicion y sale del bucle
			p++;
			break;	
		}	
		p++;
	}
	cout << p;                     // muestra el resto de la cadena a donde esta apuntando p
	cout << endl;
}
