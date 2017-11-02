#include <iostream.h>
#include <conio.h>
#include <math.h>
#include <stdio.h>

#define x1(A,B,C) (-B+sqrt(pow(B,2)-4*A*C))/2/A)
#define x2(AA,BB,CC) (-BB-sqrt(pow(BB,2)-4*AA*CC))/2/AA)

float x,y,a,b,c;
 main()
 	{
   cout<<"ingrese el primer valor: ";
   cin>>a;
   cout<<"ingrese el segundo valor: ";
   cin>>b;
   cout<<"ingrese el tercer valor: ";
   cin>>c;

   x = x1(a,b,c);
   y = x2(a,b,c);

   cout<<"El valor de X1 es : " << x <<endl;
   cout<<"El valor de X2 es: " << y <<endl;
   getch();

   }