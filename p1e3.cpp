/************************************************/
// Fichero: p1e3.cpp
// Mete numeros aleatorios en un vector de 1000 y si encuentra un valor negativo lo cambia a positivo
/************************************************/



#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;

int main() {
	const int max = 50;
	int v[1000], i, *p=v, valor=0, ran = 0, random = 0;
	srand(time(0)); // Hace que el rand genere valores realmente aleatorios
	for(i=0; i<1000; i++){				
		ran = rand() % 101; // genera valores aleatorios de 0 a 100
		random = ran - max; // restamos a los valores generados entre 0 y 100, 50 para sacar un valor entre 0 y 50
		*p=random;
		if (*p<0){
			*p=abs(*p);
		}
		p++;
		
	}
}
