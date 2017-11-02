#include <iostream>
#include <conio.h>
#include <math.h>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>

using namespace std;
float calcx(float a, float b, float c, float d, float e, float f){
	
	
	return (float) ((c*e-b*f)/(a*e-b*d));

	}

float calcy(float a, float b, float c, float d, float e, float f){
	
	
	
	return (float) ((a*f-c*d)/(a*e-b*d));
	}

//
int main(){
	int opc;
	float a,b,c,d,e,f;
	int xy;
	
	cout<<"Ingrese los valores"<<endl;
	cin>>a;
	cin>>b;
	cin>>c;
	cin>>d;
	cin>>e;
	cin>>f;
cout<<endl;
cout<<"Los Valores para son:"<<calcx(a,b,c,d,e,f)<<endl;
cout<<"Los Valores para son:"<<calcy(a,b,c,d,e,f)<<endl;

		getch();
		return 0;
}
