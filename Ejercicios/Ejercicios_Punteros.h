#include "Comunes.h"

using namespace std;
void punter(){

	int indice, *pt1, *pt2;

	indice = 39;
	pt1 = &indice;
	pt2 = pt1;
	printf("El valor es %d %d %d \n", indice, *pt1, *pt2);
	*pt1 = 13;
	printf("El valor es %d %d %d \n", indice, *pt1, *pt2);
	cout << "Direccion de Index " << &indice <<"de Pt1"<< &pt1<<"de Pt2"<<&pt2<<  endl;
}

void puntero2() {
	char strg[40], *there, uno, dos;
	int *pt, lista[100], indice;
	strcpy(strg, "Esta es una cadena de caracteres. ");
	
	uno = strg[0];
	dos = *strg;
	printf("El primer resultado es: %c %c \n",uno,dos);

	uno = strg[8];
	dos = *(strg + 8);
	printf("El segundo resultado es: %c %c \n",uno,dos);

	there = strg + 10;
	printf("El tercer resultado es: %c \n",strg[10]);
	printf("El cuarto resultado es: %c \n", *there);

	for (indice = 0; indice < 100; indice++)
		lista[indice] = indice + 100;
	pt = lista + 27;
	printf("El quinto resultado es %d\n", lista[27]);
	printf("El sexto resultado es: %d \n",*pt);
}
//////////////////////////////////////////
void fixup(int nuts,int *fruit)              /* nuts es un valor entero    */
											 /* fruit apunta a un entero   */
{
	printf("Los valores son nuts=%d *fruit=%d\n", nuts, *fruit);
	nuts = 135;
	*fruit = 172;
	printf("Los valores son nuts=%d *fruit=%d\n", nuts, *fruit);
}

void puntero3()
{

	int pecans, apples;

	pecans = 100;
	apples = 101;
	printf("Los valores iniciales son pecans=%d apples=%d\n", pecans, apples);

							  /* cuando llamamos a "fixup"     */
	fixup(pecans, &apples);  /* damos el valor de pecans      */
							/* y la dirección de apples      */

	printf("Los valores finales son pecans=%d apples=%d\n", pecans, apples);

}

void punterostruct(){


	struct {
		char initial;
		int age;
		int grade;
	} kids[12], *point;

	int index;

	for (index = 0; index < 12; index++) {
		point = kids + index;
		point->initial = 'A' + index;
		point->age = index;
		point->grade = 84;
	}

	kids[3].age = kids[5].age = 17;
	kids[2].grade = kids[6].grade = 92;
	kids[4].grade = 57;

	for (index = 0; index < 12; index++) {
		point = kids + index;
		printf("%c tiene %d años y un grado escolar de %d\n",
			(*point).initial, kids[index].age,
			point->grade);
	}



}

void imp_relleno(float dato_a_ignorar);
void imp_mensaje(float dato_list);
void imp_float(float dato_a_impr);
void(*pnt_funcion)(float);

void putero4()
{
	float pi = 3.14159;
	float doble_pi = 2.0 * pi;

	imp_relleno(pi);
	pnt_funcion = imp_relleno;
	pnt_funcion(pi);
	pnt_funcion = imp_mensaje;
	pnt_funcion(doble_pi);
	pnt_funcion(13.0);
	pnt_funcion = imp_float;
	pnt_funcion(pi);
	imp_float(pi);
}
void imp_relleno(float dato_a_ignorar)
{
	printf("Esta es la impresión de la función relleno.\n");
}


void imp_mensaje(float dato_list)
{
	printf("El dato a listar es %f\n", dato_list);
}


void imp_float(float dato_a_impr)
{
	printf("El dato a imprimir es %f\n", dato_a_impr);
}
