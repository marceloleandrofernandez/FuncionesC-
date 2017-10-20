#include <iostream>
#include "stdio.h"
#include "stdlib.h"
using namespace std;

#define N 2

struct Persona{
  char nombre[30];
  int edad;
}persona[N], *puntero_persona = persona;
/*Prototipos*/
void cargaDatos(/* arguments */);
void muestraDatos(Persona *);
void limpiar(/* arguments */);

int main(void){
  int opc;
    do {
      cout<<"Opciones -"<<endl;
      cout << " 1-Cargar Datos \n 2-Mostrar Datos \n 3-Salir \n 4-Limpiar Pantalla \n 5-Buscar Producto \n";
      cin >> opc;
      switch (opc){
            case 1:
              cargaDatos();
            	break;
            case 2:
            	muestraDatos(puntero_persona);
            	break;
            case 3:
            	opc = false;
            	break;
            case 4:
            	limpiar();
            	break;
          /*  case 5:
            	busca();
            	break;*/
            default:
            	cout << "opcion NO Valida \n";
            	break;
            }
    } while(opc);

    cout<<"Programa Finalizado"<<endl;
    return 0;
}

void cargaDatos(/* arguments */) {
  for (int i = 0; i < N ; i++){
    cout<<"Ingrese Nombre Persona"<<endl;
    fgets((puntero_persona+i)->nombre,30,stdin);
    fgets((puntero_persona+i)->nombre,30,stdin);
    cout << "Ingrese Edad" <<endl;
    cin>> (puntero_persona+i)->edad;
  }
}
void muestraDatos(Persona *puntero_persona){
  for (int i = 0; i < N; i++) {

    cout << "Nombre: " <<(puntero_persona+i)->nombre<< endl;
    cout << "Edad: " <<(puntero_persona+i)->edad<<endl;

  }
  cout<<"Presione una tecla para continuar..."<<endl;
  cin.ignore().get();
  limpiar();
}
void limpiar(/* arguments */) {
  system("/usr/bin/clear");
}
