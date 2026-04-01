/*
   Ordenar, en secuencia ascendente, las componentes de un
   vector cuyos elementos son numeros enteros y positivos
	menores que max, generados al azar.	Utilizar el metodo
	de ordenacion por insercion.
*/
#include<iostream>
void impresion( int *v, int li, int ls );
using namespace std;
int main()
{
   int i, j, n, aux, max = 100;
// Lectura de datos.
   do {
		cout << "Digite el numero de componentes del vector ";
      cin >> n;
   } while ( n < 2 );
   int vect[n];
// Generacion de datos   
   srand( time( NULL ) );
   for ( i = 0; i < n; i++ ) vect[i] = rand()%max + 1;
   cout << "\n\tDatos:";
   impresion( vect, 0, n - 1 );   
// Ordenacion.
   for ( i = 1; i < n; i++ )
   {  aux = vect[i];
      for ( j = i - 1; (j >= 0 ) && (aux < vect[j]); j-- )
      	 vect[j + 1] = vect[j];
      vect[j + 1] = aux;
   }
// Impresion de resultados.
   impresion( vect, 0, n - 1 );      cout << " }\n";
}
void impresion( int *v, int li, int ls )
{  int i;
// Impresion de resultados.
   cout << "\tli = " << li << "; ls = " << ls << "\n";   
   cout << "  v = { " << v[li];
   for ( i = li + 1; i <= ls; i++ )
   {
 	   if ( i - li > 0 && (i - li )%15 == 0 ) cout << ",\n\t" << v[i];
      	else cout << ", " << v[i];  }
   cout << " }\n\n";
   system ( "pause" );     
}
