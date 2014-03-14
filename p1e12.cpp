/************************************************/
// Fichero: p1e12.cpp
// Copia una cadena de caracteres en otra .
/************************************************/



#include <iostream>
#include <cstring>

using namespace std;

void copiar_cadena(char *p, char *q);

int main(){
	char cadena1[] = {'R','U', 'B', 'E', 'N','\0'};
	char cadena2[20];
	char *p=cadena2, *q=cadena1;
	copiar_cadena(p, q);
	cout << p << endl;
}

/*****************************************************************/
// Funcion: copiar_cadena
// Tarea: copiar una cadena en otra
// Recibe: char *p, char *q
// *p y *q reciben una direccion de memoria de cada cadena	
/*****************************************************************/

void copiar_cadena(char *p, char *q){
	while(*q!='\0'){	
		*p=*q;
		p++;
		q++;
	}
	*p = '\0';	
}
