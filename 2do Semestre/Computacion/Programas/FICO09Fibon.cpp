// Numeros de Fibonacci
#include<iostream>
using namespace std;
int main()
{
 	 int i, j, k, n;
 	 do {
 	 	 cout << "\nDigite el numero de terminos de la serie de Fibonacci a generar ";
 	 	 cin >> n;
    }  while ( n < 0 );
    i = 0, j = 1;
 	 cout << "\n\t fib = { " << i << ", " << j;
    for ( k = 1; k < n; k++ )
    {
	  	  j = i + j;
	  	  i = j - i;
    	  cout << "; " << j;
	 }
 	 cout << " }\n\n";
    system ( "pause" );
}
