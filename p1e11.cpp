/************************************************/
// Fichero: p1e11.cpp
// Compara si dos cadenas son iguales,mayor o menor en codigo ASCII
/************************************************/


#include <iostream>
#include <cstring>

using namespace std;

int comparar_cadenas(char *pcadena1, char *pcadena2, int tam_cadena1);
void averigua_cadena(char *pcadena1, char *pcadena2, int tam_cadena1);
int longitud_cadena(char *p);

int main(){
	char cadena1[] = {'H','O','L','A', '\0'};
	char cadena2[] = {'H','O','L','A', '\0'};
	char *pcadena1 = cadena1, *pcadena2 = cadena2;
	int ecadena1 =  longitud_cadena(pcadena1);
	int ecadena2 =  longitud_cadena(pcadena2);
	if(ecadena1 > ecadena2){                                                       //compruebo si las cadenas son de la misma longitud
		cout << "la primera cadena es mayor" << endl;	
	}else{
		if(ecadena1 < ecadena2){
			cout << "la primera cadena es menor" << endl;					
		}else{
			averigua_cadena(pcadena1,pcadena2, ecadena1);		
		}
	}
}

/************************************************/
// Funcion: comparar_cadenas
// Tarea: compara las cadenas y retorna el valor
/************************************************/
int comparar_cadenas(char *pcadena1, char *pcadena2, int tam_cadena1){
	int resultado;	
	char *prueba1 = pcadena1;
	char *prueba2 = pcadena2;
	while(pcadena1 != prueba1 + tam_cadena1){
		resultado = (int)*pcadena1 - (int)*pcadena2;
		if(resultado != 0){
			break;		
		}else{
			pcadena1++;
			pcadena2++;
		}		
	}
	return resultado;	
}

/************************************************/
// Funcion: averigua_cadena
// Tarea: con el valor returnado de comparar_cadenas comprueba que valor es y dice como son
/************************************************/
void averigua_cadena(char *pcadena1, char *pcadena2, int tam_cadena1){
	int cadena = comparar_cadenas(pcadena1,pcadena2, tam_cadena1);
	if(cadena == 0){
		cout << "Las cadenas son iguales" << endl;
	}
	if(cadena < 0){
		cout << "La primera cadena es menor" << endl;	
	}
	if(cadena > 0){
		cout << "La primera cadena es mayor" << endl;	
	}
	
}

/************************************************/
// Funcion: longitud_cadena
// Tarea: retorna la longitud de la cadena pasada
/************************************************/
int longitud_cadena(char *p){
	int contador=0;
	while(*p!='\0'){
		contador++;
		p++;	
	}	
	return contador;	
}
