// ConsoleApplication2.cpp: archivo de proyecto principal.

	#include "stdafx.h"
	#include <iostream>

	using namespace std;



	struct datos{
		float p;
		float q;
	};
	void polar_a_cartesiana(datos);
	void cartesiana_a_polar(datos);

	void main(void)
	{
		cout << "Parcial Cartesia" << endl;
		int opc;
		datos *ingreso;
		ingreso = new datos;
		do{
			system("cls");
			cout << "1-Polar a Cartesiana " << endl;
			cout << "2-Cartesiana a Polar" << endl;
			cout << "0-Finalizar" << endl;
			cout << "Opcion: ";
			cin >> opc;
			switch (opc)
			{

			case 0:
				break;
			case 1: cout << "ingrese Radio: ";
				cin >> ingreso->p;
				cout << "ingrese Angulo: ";
				cin >> ingreso->q;
				polar_a_cartesiana(*ingreso);
				break;
			case 2:
				cout << "ingrese X: ";
				cin >> ingreso->p;
				cout << "ingrese Y: ";
				cin >> ingreso->q;
				cartesiana_a_polar(*ingreso);
				break;
			default:
				cout << "Opcion No Valida: ";
				break;
			}
		if (opc)system("pause");
		} while (opc);
		delete ingreso;
	}
	void polar_a_cartesiana(datos pola){

		cout << "X = "<<pola.p * cos(pola.q)<<"Y = "<<pola.p *sin(pola.q)<<  endl;
	}
	void cartesiana_a_polar(datos cart){
		cout << "r = " << sqrt(pow(cart.p, 2) + pow(cart.q, 2)) << " Ang = " << atan(cart.q / cart.p) << endl;

	}
