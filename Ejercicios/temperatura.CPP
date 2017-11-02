#include <iostream.h>
#include <conio.h>
#include <math.h>
float temperatura(float c);
main()
{
float a,b;
cout <<"\nIngrese maxima temperatura en C ";
cin >>a;
cout<< "\nEn farenheit es: "<< temperatura(a) ;
cout<<"\nPresione una tecla para continuar...";
getch();
cout <<"\nIngrese minima temperatura en C ";
cin >>b;
cout<< "\nEn farenheit es: "<< temperatura(b) ;
cout<<"\nPresione una tecla para Finalizar...";
getch();
}

float temperatura(float x)            //HACEME UN PETE
{
float resultado=(x*9/5+32);

return (resultado);
}