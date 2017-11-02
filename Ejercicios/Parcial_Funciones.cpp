#include <iostream>
#include <conio.h>
#include <math.h>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

void calculo(int a, int b, int &c, int &d);
void calculo(int a, int b, float &c, float &d);

int main(){
	int a, b ,c,d;
	float e,f,g,h;
	do 
	{
	cout <<"1- Multiplicacion \n"
		 <<"2- Division \n"
		 <<"0-Fin";
	cin>>opc;
	}while (opc);
	
	switch(opc)
	{
		case 0:Break;
		case 1:cout<<"Ingrese Valor de a ";
		cin>>a;
		cout<<"Ingrese Valor de b ";
		cin>>b;
		cout<<"Ingrese Valor de c ";
		cin>>c;
		cout<<"Ingrese Valor de d ";
		cin>>d;
		calculo(a,b,c,d);
		cout<<"Resultado: "<<c<<(d>=0?"+":"")<<d<<endl;
		break;
		case 2:cout<<"Ingrese Valor de a ";
		cin>>e;
		cout<<"Ingrese Valor de b ";
		cin>>f;
		cout<<"Ingrese Valor de c ";
		cin>>g;
		cout<<"Ingrese Valor de d ";
		cin>>h;
		calculo(e,f,g,h);
		cout<<"Resultado: "<<g<<(h>=0?"+":"")<<h<<endl;
		break;
		default:
			
	}
	void calculo(int a, int b, int &c, int &d)
	{
		
	}
	void calculo(int a, int b, float &c, float &d)
	{
	
	}
	getch():
	return 0;
}
