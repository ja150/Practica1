/************************************************/
// Fichero: p1e5.cpp
// Ordenar 2 vectores en otro vector de menor a mayor
/************************************************/




#include <iostream>

using namespace std;

int main() {
	const int MAX = 100;
	float v1 [MAX] = {2, 3, 8, 22, 44, 88, 99, 100, 101, 255, 665};
	float v2 [MAX] = {1, 3, 4, 5, 6, 25, 87, 89, 99, 100, 500, 1000};
	float res [2*MAX];
	int tam_v1=11, tam_v2=12; // 0 <= tam_v1, tam_v2 < MAX
	int tam_res = tam_v1+tam_v2; // 0 <= tam_res < 2*MAX	
	float *p=v1,*q=v2, *r=res, *m=res;
	int contador=0,i;
	do{                                // repite el bucle hasta que ha recorrido todas las posiciones de los vectores
		if(*p<=*q){                   // Comprueba si el valor es menor o igual para meterlo en el puntero r el cual está apuntando a res
			*r=*p;
			r++;				
			if(p==v1+tam_v1-1){      // Compruebo si p está ya en la ultima posicion
				do{				// repite el bucle hasta que q tambien este en la ultima posicion y voy añadiendo lo que hay en q al puntero r e incremento ambos y ademas contador
					*r=*q;
					q++;
					r++;
					contador++;
				}while(q==v2+tam_v2-1);			
			}
			p++;						
		}else{
			*r=*q;
			r++;
			if(q==v2+tam_v2-1){      // Compruebo si p está ya en la ultima posicion
				do{                 // repite el bucle hasta que q tambien este en la ultima posicion y voy añadiendo lo que hay en q al puntero r e incremento ambos y ademas contador
					*r=*p;
					p++;
					r++;
					contador++;
				}while(p==v1+tam_v1-1);			
			}
			q++;			
		}	
		contador++;
	}while(contador<=tam_res);
	
	for(i=0; i<tam_res; i++){		// Muestro el vector al cual apunta m		
		cout << *m << endl;
		m++;
	}
}
