#include <iostream>
#include <conio.h>
#include <math.h>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

float mult(int a,int b, float c,float d)
{
		float real;
		float img;
		
		real = (a*c-b*d);
		img = (a*b+b*c);
		
 return (real);
}

int main()
{
	int x;
	int y;
	int w;
	int z;
	char c;
	cout << "El programa le pedirá que ingrese dos números complejos. ";
  	cout << "\n\nIngrese el coeficiente real: ";
  	cin >> x;
  	cout << "\nIngrese el coeficiente imaginario: ";
  	cin >> y;
  	cout << "\n\nIngrese el coeficiente real 2: ";
  	cin >> w;
  	cout << "\nIngrese el coeficiente imaginario 2: ";
  	cin >> z;
  	cout << "\nIngrese el simbolo de la operacion: ";
  	cin >> c;
  	cout<<mult(x,y,z,w)<<endl;
   	getch();
return 0;
}




