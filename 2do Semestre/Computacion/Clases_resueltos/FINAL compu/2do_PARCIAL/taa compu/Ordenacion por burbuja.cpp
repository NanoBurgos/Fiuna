/* Programa que ordena en secuencia ascendente n numeros 
genera- dos al azar, utilizando el metodo de la burbuja. */
#include<iostream>
#include<time.h>
using namespace std;
void impresion( int m, int v[] );
int main()  
{	int i, j, n, aux, max = 1000;
   time_t comienzo, final;
	cout << "\nDigite cuantos numero se generaran ";
	cin >> n;
	int vect[n];
// Generacion e impresion de las n componentes de vect
	srand( time( NULL ) );
	for ( i = 0; i < n; i++ )  vect[i] = rand()%101 + 100 ;
   impresion ( n, vect );
// Algoritmo de ordenamiento por el metodo de la burbuja
   comienzo = time( NULL );
   
   for ( i = 1; i < n; i++ )
   {  
      for ( j = 0; j < n - i; j++ )      
          if ( vect[j] > vect[j+1] )
          {  aux = vect[j];
             vect[j] = vect[j+1];
             vect[j+1] = aux;
               }   }
   final = time( NULL );
   cout << "\nFueron realizadas " << i - 1 << " pasadas";
// Fin de la rutina de ordenacion          
   cout << "\n\nLas componentes en secuencia ascendente son \n";
// Impresion de las componentes en la secuencia solicitada
   impresion ( n, vect );
   cout << "\n\nTiempo de segundos " << difftime(final, comienzo) << "\n";        
   cout << "\n";
   system ( "pause" );
}
void impresion( int n, int v[] )
{  for ( int i = 0; i < n; i++ )
 	    cout << v[i] << "\t";  }
