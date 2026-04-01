//   Uso de punteros y vectores
#include<iostream>
using namespace std;
int main()
{  int i, n;
   char *p;       // Declaracion de puntero
   do {
      cout << "\n\t\tDigite el numero de componentes del vector ";
      cin >> n;
   }  while( n < 2 );
   char v[n];     // Vector de caracteres
   for ( i = 0; i < n; i++ )
   {  cout << "\tDigite v[" << i << "]: ";
      cin >> v[i];   }
// Impresion de v, utilizando el  nombre del vector
   cout << "\n\nv = { " << v[0];
   for ( i = 1; i < n; i++ )
      cout << ", " << v[i];
   cout << " }";
// Impresion de v, utilizando el  puntero p
   p = v;
   cout << "\n\nv = { " << *p;
   for ( i = 1; i < n; i++ )
      cout << ", " << *(p + i);
   cout << " }";
// Impresion de las componentes, a partir de uno determinado
   cout << "\n\nv = { " << p;
   for ( i = 1; i < n; i++ ) cout << ", " << p+i;
// Impresion de las direcciones de memoria inicial ocupada por v
   cout << "\n\nVer &p  = { " << &p;
   cout << " }\n\n";
   cout << "\n\nVer &v = { " << &v;
   cout << " }\n\n";
   cout << "\n\nVer p  = { " << p;
   cout << " }\n\n";
   cout << "\n\nVer v = { " << v;
   cout << " }\n\n";
	cout << "\n\n &v = { " << &v[0];
   for ( i = 1; i < n; i++ )
   	 cout << ", " << &v[i];
   cout << " }\n\n";
   system ( "pause" );
}
