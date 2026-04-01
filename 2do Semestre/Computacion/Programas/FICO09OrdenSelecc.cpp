// Ordenamiento por seleccion.
#include<iostream>
#include<stdlib.h>
using namespace std;
int leer( void );
main()
{	int i, j, k, n, aux, max = 100;     // max es el mayor numero generado al azar
// Lectura del numero de componentes y carga del vector	
	n = leer( );
	int vect[n];
	srand( time(NULL)  );
//	cout << "Rand_max = " << RAND_MAX;
	for ( i = 0; i < n; i++ )
	   vect[i] = rand()%max + 1;
// Impresion de las componentes del vector
	cout << "\nNro. de componentes del vector " << n;
	cout << "\n\nLas componentes del vector son";		
	for ( i = 0; i < n; i++ )
	{  if ( i%10 == 0 ) cout << "\n";
		cout << vect[i] << ", " ;	}
// Ordenamiento de las componentes del vector (Metodo de seleccion)	
   for ( i = 0; i < n - 1; i++ )
   {  k = i;
 	   for ( j = i + 1; j < n; j++ )
		 	 if ( vect[j] < vect[k] ) k = j;
		aux = vect[i];
		vect[i] = vect[k];		vect[k] = aux;		}
// Impresion de la componentes en secuencia ascendente	
   cout << "\n\n";
	cout << "\nLas componentes ordenadas del vector son";		
	for ( i = 0; i < n; i++ )
	{  if ( i%10 == 0 ) cout << "\n";
		cout << vect[i] << ", " ;	}
   cout << "\n";
   system( "pause" );
}
int leer( void )
{	float nf;
 	cout << "\nDigite el numero de componentes del vector ";		
	cin >> nf;
	while ( nf <= 0 || nf != (int)nf )
	{	cout << "\nNumero invalido, digite nuevamente ";
 		cin >> nf;	}
	return (int)nf;
}
