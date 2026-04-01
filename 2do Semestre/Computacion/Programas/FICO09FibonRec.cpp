// Numeros de Fibonacci. Utilizando recursividad
#include<iostream>
using namespace std;
int fibonacci( int n );
int main()
{
 	 int i, n;
 	 do {
 	 	 cout << "\nDigite un numero entero no negativo ";
 	 	 cin >> n;
    }  while ( n < 0 );
 	 cout << "\n\t fib = { " << fibonacci( 0 );
    for ( i = 1; i < n; i++ )
    	  cout << "; " << fibonacci( i );
 	 cout << " }\n\n";
    system ( "pause" );
}
int fibonacci( int n )
{
 	 if ( n <= 1 ) return n;
	 return ( fibonacci( n - 1 ) + fibonacci( n - 2 ) );
}
