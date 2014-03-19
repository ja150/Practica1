/************************************************/
// Fichero: p1e10.cpp
// Comprueba si la cadena es palíndroma
/************************************************/

#include <iostream>
#include <cstring>

using namespace std;

int main(){
	char cadena[] = {'s', 'u', 'g', 'u', 's', '\0'};
	char *pcadena1 = cadena, *pcadena2 = cadena + 4;
	bool comprueba = false;
	do{
		if(*pcadena1 == *pcadena2){           
			pcadena1++;
			pcadena2--;
			comprueba = true;       
		}else{
			cout << "no palindromo";     
			comprueba = false;
			break;
		}
	}while(pcadena1>=pcadena2);
	
	if(comprueba == true){
		cout << "si palindromo";
	}	
}
