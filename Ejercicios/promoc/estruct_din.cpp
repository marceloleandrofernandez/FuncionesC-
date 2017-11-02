#include <iostream>
//-o#include <conio.h>

using namespace std;
main()
{
   /*Esta primera parte se muestra el uso de la instrucción new y delete con
   enteros*/
   int *a;
   a=new(int);    //se inicializa la variable tipo entera
   cout<<"Ingrese un valor entero ";
   cin>>*a;
   cout<<endl<<"El valor ingresado es: "<<*a;
   delete(a);     //desaparece de la memoria la variable
   //getch();
   cout<<"Presione una tecla para continuar..."<<endl;
   cin.ignore().get();
   //Esta segunda parte se repite el ejercicio pero con float

   float *b;
   b=new(float);  //se inicializa la variable tipo float
   cout<<endl<<endl<<"Ingrese un valor real ";
   cin>>*b;
   cout<<endl<<"El valor ingresado es: "<<*b;
   delete(b);     //desaparece de la memoria la variable
   //getch();
   cout<<"Presione una tecla para continuar..."<<endl;
   cin.ignore().get();

   /*en esta tercera parte se utilizará un identificador compuesto, es decir
   una estructura y veremos como inicializar el identidficador estructurado*/

   struct VarEstr {  //definición de la estructura y nuevo tipo de variable
     int 		c;
     float  d;
     char		e;
				      };
   VarEstr *g;
   g=new(VarEstr); //Igualmente que antes en concepto se inicializa el identificador
   cout<<endl<<"Ingreso de datos en la estructura";
   cout<<endl<<"Ingrese un valor entero ";
   cin>>g->c;      //esta es una forma de utilizar la estructura con punteros sin *
   cout<<endl<<"Ingrese un valor real ";
   cin>>(*g).d;      //esta es la otra forma de utilizar la estructura con punteros con *
   cout<<endl<<"Ingrese un valor char ";
   cin>>(*g).e;
   cout<<endl<<endl<<"Los valores ingresados son: VALOR ENTERO= "<<(*g).c<<" VALOR FLOAT= "
         <<g->d<<" VALOR CHAR= "<<g->e;
   delete(g);      //desaparece de la memoria la variable
   //getch();
   cout<<"Presione una tecla para continuar..."<<endl;
   cin.ignore().get();
}
