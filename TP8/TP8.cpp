/*
*Dados tres numeros informar si representan fecha o no
*Dinardi, Emiliano
*Gallici, German
*Orlando, Antonella
*Liserre, Ariel
*Liserre, Ariel
*12/06/2015
*/

#include <iostream>
using namespace std;

bool esDiaCorrecto(unsigned, unsigned, int);
bool esBisiesto (int);

int main() {
	cout << "Ingrese año, mes, dia: \n";
	int ano;
	cin >> ano;
	unsigned mes;
	cin >> mes;
	unsigned dia;
	cin >> dia;
	if(esDiaCorrecto(dia, mes, ano)){
		cout << "si";
	}else{
		cout << "no";
	}
}

bool esDiaCorrecto(unsigned d, unsigned m, int a){
	if((d<=31 && d>0) && (m<=12 && m>0)){
		if(d<29){
			return true;
		}else{
			switch(m){
				case 2:
					if(d==29){
						return esBisiesto(a);
					}else{
						return false;
					}
				case 4:
				case 6:
				case 9:
				case 11:
					if(d<=30){
						return true;
					}else{
						return false;
					}
				default:
					return true;
			}
		}
	}else{
		return false;	
	}
			
}

bool esBisiesto(int a){
	if((a%4==0 && a%100!=0) or a%400==0){
		return true;
	}else{
		return false;
	}
}
