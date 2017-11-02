
#include <iostream>
using namespace std;

struct fecha{
   int m;
   int d;
   int a;
};

int main()
{
int indice, *punte1, *punte2;

   punte1 = &indice;
   *punte1 = 77;
   punte2 = new int;
   *punte2 = 173;
   cout << "Los valores son " << indice << "  " <<
				  *punte1 << "  " << *punte2 << "\n";
   punte1 = new int;
   punte2 = punte1;
   *punte1 = 999;
   cout << "Los valores son " << indice << "  " <<
				  *punte1 << "  " << *punte2 << "\n";
   delete punte1;

float *float_punte1, *float_punte2 = new float;

   float_punte1 = new float;
   *float_punte2 = 3.14159;
   *float_punte1 = 2.4 * (*float_punte2);
   delete float_punte2;
   delete float_punte1;

fecha *fecha_punte;

   fecha_punte = new fecha;
   fecha_punte->d = 18;
   fecha_punte->m = 10;
   fecha_punte->a = 1938;
   cout << fecha_punte->d << "/" << fecha_punte->m << "/" <<
					    fecha_punte->a << "\n";
   delete fecha_punte;

char *c_punte;

   c_punte = new char[37];
   delete c_punte;
   c_punte = new char[sizeof(fecha) + 133];
   delete c_punte;

return 0;
}
