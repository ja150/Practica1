/************************************************/
// Fichero: p1e13.cpp
// Copia una cadena de caracteres detras de otra.
/************************************************/


#include <iostream>
#include <cstring>

using namespace std;

int longitud_cadena(char *p);
void encadenar_cadena(char *p, char *q);

int main(){
	char cadena1[] = {'J', 'u', 'a', 'n','A','\0'};
	char cadena2[] = {'R','U', 'B', 'E', 'N','\0'};;
	char *p=cadena1, *q=cadena2;
	encadenar_cadena(p,q);
	cout << p << endl;
}

/************************************************/
// Fichero: p1e13.cpp
// Tarea: Devuelve la longitud de una cadena
// Recibe: int longitud_cadena(char *p), se le pasa una direccion de memoria la cual está apuntando a un char		
/************************************************/

int longitud_cadena(char *p){
	int contador=0;
	while(*p!='\0'){
		contador++;
		p++;	
	}	
	return contador;	
}

/************************************************/
// Fichero: p1e13.cpp
// Tarea: Concatena una cadena detras de otra
// Recibe: void encadenar_cadena(char *p, char *q), se le pasa una direccion de memoria a ambos la cual está apuntando a un char		
/************************************************/

void encadenar_cadena(char *p, char *q){
	int lcadena1 = longitud_cadena(p);	  // guarda la longitud de la cadena
	p = p + lcadena1;                    // se posiciona en el final de la cadena para ir metiendo a partir de ahi los caracteres de la otra
	while(*q != '\0'){                   
		*p=*q;
		p++;
		q++;
	}
	*p = '\0';			 
}


