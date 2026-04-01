// Ordenamiento rapido (quicksort) - Ideado por Hoare -
#include<iostream>
using namespace std;
void quicksort( int *v, int izq, int der );
void impresion( int *v, int li, int ls );
int n;
int main()
{  int i, max = 100;   // max el el mayor numero al azar a ser generado
// Lectura de datos.
   do {
      cout << "Digite el numero de componentes del vector ";
      cin >> n;
   }  while ( n < 2 );
   int vect[n];
   srand( time( NULL ) );
   for ( i = 0; i < n; i++ ) vect[i] = rand()%max + 1;
   cout << "\n\tDatos:";
   impresion( vect, 0, n - 1 );   
// Ordenacion.
   quicksort ( vect, 0, n - 1 );
   cout << "\n\tDatos ordenados:";   
   impresion( vect, 0, n - 1 );
}
void quicksort ( int *v, int izq, int der )
{
   int i, j, aux1, aux2;
// Eleccion del pivote
   aux1 = v[(izq + der)/2];   
   i = izq;                 j = der;
// Particion en dos subconjuntos (menores que el pivot y mayores que el mismo)
   do  {
       while ( i < der && v[i] < aux1 ) i++;
       while ( j > izq && aux1 < v[j] ) j--;
       if ( i <= j )
       {  aux2 = v[i];
		    v[i] = v[j];      v[j] = aux2;
          i++;              j--;   }
   }  while( i <= j );
   if ( izq < j ) quicksort ( v, izq, j );
   if ( i < der ) quicksort ( v, i, der );
}
void impresion( int *v, int li, int ls )
{  int i;
// Impresion de resultados.
   cout << "\tli = " << li << "; ls = " << ls << "\n";   
   cout << "v = { " << v[0];
   for ( i = 1; i < n; i++ )
      cout << ", " << v[i];
   cout << " }\n\n";
   system ( "pause" );     
}
