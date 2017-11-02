#include <iostream>
#include <conio.h>
#include <math.h>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

//int sumar_valores(int a, int b)
//{
//  int resultado = a + b;
//
//  return (resultado);
//}


double redon( double x, int  y)
{
	int aux ;
	float aux2;
	int aux3;
	float res;
	aux=x*pow(10,y);
	aux2=x*pow(10,y)-aux;
	aux3=aux2;
	cout<<aux<<endl;
	cout<<aux2<<endl;
	cout<<aux3<<endl;
    cout<<round(aux2)<<endl;
    
if (aux2 < 0.499)
{
	res=aux/pow(10,y);
	cout<<"aux dentro del if-->"<<res;
}else{
	res=(aux+1)/pow(10,y);
	cout<<"aux dentro del else:"<<res;
}

return res;

 // return ((float) ((int) (x * pow(10,y) + 0.5)))/pow(10,y);
  
}

int main()
{
  float x,y;

  	cout << "Ingrese el valor Real";
  	cin >> x;
	cout << "\n\nIngrese la Cantidad de Decimales "; 
	cin >> y;
  //cout << "\n\nLa suma de los números es : " << sumar_valores(x,y);
  
  	cout << "\nEl valor redondeado es : " << redon(x,y);

getch();
return 0;
}

