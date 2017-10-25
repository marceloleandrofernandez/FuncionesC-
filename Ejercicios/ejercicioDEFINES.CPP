#include <iostream.h>
#include <math.h>
#include <stdio.h>
#include <conio.h>
#define MAX(A) ((A)<=40?(A)=(A)*c:(A)>40&&(A)<=50?(f=(A)-40),(f*=c*2),(d=40*c),(d+=f),((A)=d):(A)>50?(f=(A)-40),(f*=c*3),(d=40*c),(d+=f),((A)=d):0)


int b,c;
float d,z,x,f;
char a;
main()
{
f=0;
b=0;
c=0;
x=f=d=0.00;
cout<<"Ingrese Nombre: \n";
cin>>a ;
cout<<"Ingrese Horas trabajadas: \n" ;
cin>> b;
cout<<"Ingrese Precio x Hs: \n" ;
cin>>c;
//#define PORC(A)((A*12)/100)           //Hasta acá se ingresan las variables
/*if (b<=40){                           //Pero los cálculos se Hacen en el define
d=(b*c) ;                               //
}                                        //
if (b>40&&b<=50){                       //
f=b-40;                                 //
f*=(c*2);                                //
d=40*c;                                 //     TODO            ESTAS LINEAS
d+=f;                                   //                     RESUELVEN EL
z=(d*12)/100;                           //                     EJERCICIO
d-=z;                                    //    ESTO            DE IGUAL
}                                        //                    MANERA
if(b>50) {                               //                    SIN EL USO
f=b-40;                                  //    ESTÁ            DE DEFINE
f*=(c*3) ;                                //
d=40*c;                                  //
d+=f;                                     //  AL PEDO
z=(d*12)/100;                            //
d-=z;                                    //
}                                       //
cout<<"Emplado: "<<a<<"sueldo: "<<d; */
x=MAX(b);
cout<<"Sin el descuento de 12%: "<<x;
x-=(x*12/100);
cout<<"\nEmpleado: "<<a<<"\nsueldo: "<<x;
getch();
}
