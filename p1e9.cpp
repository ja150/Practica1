/************************************************/
// Fichero: p1e9.cpp
// Tarea: Devuelve la longitud de una cadena
// Recibe: int longitud_cadena(char *p), se le pasa una direccion de memoria la cual está apuntando a un char		
/************************************************/



#include <iostream>
#include <cstring>

using namespace std;

int longitud_cadena(char *p);

int main(){
	int b=80;

	char cadena[b], *p=cadena;
	cout << "Introduce cadena: " << endl;
	cin.getline(cadena, b);
	
	cout << longitud_cadena(p);

}

int longitud_cadena(char *p){
	int contador=0;
	while(*p!='\0'){           // repite el bucle hasta que encuentra un \0
		contador++;
		p++;	
	}	
	return contador;	
}
