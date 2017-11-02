#include <iostream>
#include <conio.h>
#include <math.h>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
//la constante pi(3.1441592) es muy utilizada en matematica. un metodo sencillo de calcular su valor es pi = 
//
//4*(2/3)*(4/3)*(4/5)*(6/5)*(6/7)*(8/7)*(8/9)*(10/9)*(10/11) Escribir un programa que efectue este calculo 
//
//con un numero de terminos especificado por el usuario




using namespace std;
float calc(int cant){
	float res=4.0;
	int num=2;
	int den=3;
	for (int x=1; x==cant;x++){
		if (x==1){
			res=res*(num/den);
		}else if (x%2) {
			res=res*(num /den);
		}else if (!x%2) {
			res=res*(num/den);
		}
	cout<<"vuelta";
	}
	return res;
	}
int main(){
	float res;
	int opc;
	cout<<"Ingrese la Cantidad de Terminos para PI"<<endl;
	cin>>opc;
	res=calc(opc);
	cout<<"El resultado de pi es:"<<res;
	
	
	getch();
	return 0;
}
