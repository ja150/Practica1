/************************************************/
// Fichero: p1e8.cpp
// Indica la posicion en la que aparece
/************************************************/


#include <iostream>
#include <cstring>

using namespace std;

int main(){
	int tam = 50, i;
	char cadena[tam];
	char *p=cadena;
	cout << "Introduce cadena: ";
	cin.getline (cadena, tam);
	
	for(i=0; i<tam; i++){
		if(*p==' '){
			cout << "Te encontré en la posicion" << i <<  endl;
			break;
		}
		p++;	
	}

}
