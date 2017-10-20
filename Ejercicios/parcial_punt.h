#include "Comunes.h"

using namespace std;
#define N 3
struct info{
	char codigo[10];
	char descripcion[30];
	float cant;
	float precio;
};
union stock{
	int deposito;
	info merca;
};

void parci(){
	stock stock1[N];
	stock *aux;
	float *valorizacion;
	aux = new stock;
	valorizacion = new float;
	*valorizacion = 0.0;
	for (int i = 0; i < N; i++)
	{
		cout << "ingrese codigo: ";
		cin >> aux->merca.codigo;
		cout << "Descripcion: ";
		cin >> aux->merca.descripcion;
		cout << "Ingrese Cantidad: ";
		cin >> aux->merca.cant;
		cout << "Ingrese Precio: ";
		cin >> aux->merca.precio;
		cout << "Ingrese Deposito: ";
		cin >> aux->deposito;
		*valorizacion += (aux->merca.cant)*(aux->merca.precio);
		stock1[i] = *aux;
	}
	cout << "\n\nEl Stock valorizado = " << *valorizacion << endl;
	system("pause");
	delete aux;
	delete valorizacion;



	system("pause");
}