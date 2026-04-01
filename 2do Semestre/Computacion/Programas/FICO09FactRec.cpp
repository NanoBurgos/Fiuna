// Calculo del factorial de un numero utilizando recursividad
#include<iostream>
using namespace std;
int factorial( int n );
int main()
{
 	 int n;
 	 do {
 	 	 cout << "\nDigite un numero entero no negativo ";
 	 	 cin >> n;
    }  while ( n < 0 );
    cout << "\n\t" << n << "! = " << factorial( n ) << "\n\n\t";
    system ( "pause" );
}
int factorial( int n )
{
 	 if ( n <= 1 ) return 1;
 	 cout << "\n\t n = " << n;
 	 return n*factorial( n - 1 );
}
