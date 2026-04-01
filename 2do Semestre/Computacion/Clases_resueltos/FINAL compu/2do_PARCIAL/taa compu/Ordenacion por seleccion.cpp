/* Programa que ordena en secuencia ascendente n numeros genera-
   dos al azar, utilizando el metodo de seleccion.  */
#include<iostream>
#include<time.h>
using namespace std;
void impresion( int m, int v[] );
int main()
{	int i, j, k, n, aux, max = 6;
   time_t comienzo, final;
	cout << "\nDigite cuantos numero se generaran ";
	cin >> n;
	int vect[n];
	srand( time( NULL ) );
// Generacion de las componentes del vector
	for ( i = 0; i < n; i++ ) vect[i] = rand()%max + 5;
   impresion ( n, vect );
// Algoritmo de ordenamiento por el metodo de la seleccion
 comienzo = time( NULL );
   for ( i = 0; i < n - 1; i++ )      
   {   k = i;
       for ( j = i + 1; j < n; j++ ) 
           if ( vect[j] < vect[k] ) k = j;
       aux = vect[k];
       vect[k] = vect[i];
       vect[i] = aux;   }
// Impresion de las comonentes en secuencia ascendente
   final = time( NULL );
   cout << "\n\nLas componentes en secuencia ascendente son \n";
   impresion ( n, vect );
 cout << "\n\nTiempo de segundos " << difftime(final, comienzo) << "\n";        
   cout << "\n";
   system ( "pause" );
}
void impresion( int m, int v[] )
{  for ( int i = 0; i < m; i++ )
 	    cout << v[i] << "\t";  }
