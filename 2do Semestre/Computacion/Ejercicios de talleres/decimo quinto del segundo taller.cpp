/* Permita obtener el valor de la serie siguiente, para n= 0, 1, 2, 3,..., n, utilzando 
recursividad*/
#include<iostream>
#include<math.h>
using namespace std;
float serie(int(n));
int main()
{
	cout<<"\tEel valor de la serie S(n) = 1 - 1/2 +1/3 - 1/4 +1/5 + ...  es:\n";
	
	cout << serie ( 0 ) << "\n\n\n";
	
	
	
	system ("pause");
}
float serie(int(n))
{
	float suma = 0 ;
	
	if ( n <= 1000 )
	{ suma = ( pow( -1 , n ) ) / ( n + 1 ) + serie ( n + 1) ; }
	
	return suma;
}
