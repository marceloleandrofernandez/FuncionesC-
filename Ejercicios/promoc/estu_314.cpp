#include <iostream>
#include "stdio.h"
#define N 2

using namespace std;

void reloco();
void ingresoDatos();
void mostrarDatos();

struct Datos{
  int cod;
  char nom[30];
  char desc[20];
  int cant;
  float precio;
}datos[N];

int main(int argc, char const *argv[]) {

  cout << "Prueba " << '\n';

  cin.ignore().get();
  ingresoDatos();
  mostrarDatos();
  return 0;
}
void ingresoDatos(){
  for (int i = 0; i < N; i++) {
    /* code */
      cout<<"Ingrese codigo: \n" ;
      std::cin >> (datos+i)->cod;
      cout<<"Ingrese Nombre: \n" ;
      std::cin >> (datos+i)->nom;
      cout<<"Ingrese Descripcion: \n" ;
      std::cin >> (datos+i)->desc;
      cout<<"Ingrese cantidad: \n" ;
      std::cin >> (datos+i)->cant;
      cout<<"Ingrese precio: \n" ;
      std::cin >> (datos+i)->precio;
  }
}

void mostrarDatos(){

  std::cout << "OLA KE ASE" << '\n';
  for (int i = 0; i < N; i++) {
    cout<<"Cod: "<<(datos+i)->cod<<" Nombre "<<(datos+i)->nom<<" Precio: "<<(datos+i)->precio<<endl;
  }
  getchar();
}
