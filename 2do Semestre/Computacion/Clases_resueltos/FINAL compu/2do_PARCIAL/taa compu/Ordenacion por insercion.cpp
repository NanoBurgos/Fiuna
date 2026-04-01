/* Ordenar en secuencia ascendente las componentes de un
   vector cuyos elementos son numeros de coma flotante.
   Utilizar el metodo de insercion.		   				*/
#include<iostream>
#include<time.h>
using namespace std;
void impresion ( int n, float v[] );
int main()
{  int i, j, n;
   time_t comienzo, final;
// Generacion de datos.
   do {	cout << "Digite el numero de componentes del vector ";
      	cin >> n;
   }  while ( n < 2 );
   float aux, vect[n];   
   srand( time(NULL) );
   for ( i = 0; i < n; i++ ) vect[i] = rand()%1000+1;
   cout << "\n\nComponentes del vector generado\n";
	impresion ( n, vect );
// Ordenacion.
 comienzo = time( NULL );
   for ( i = 1; i < n; i++ )
   {  aux = vect[i];		j = i - 1;
      while ( j >= 0 && aux < vect[j] )
      {   vect[j + 1] = vect[j];
		  	 j--;    }
      vect[j + 1] = aux;   }
   cout << "\n\nComponentes del vector en secuencia ascendente\n";
  final = time( NULL );      
	impresion ( n, vect );
 cout << "Tiempo de segundos " << difftime(final, comienzo) << "\n";     
 system("pause");
}
void impresion ( int n, float v[] )
{  // Impresion de resultados.
   cout << "vect = { " << v[0];
   for ( int i = 1; i < n; i++ )  cout << ", " << v[i];
   cout << " }\n";
}
