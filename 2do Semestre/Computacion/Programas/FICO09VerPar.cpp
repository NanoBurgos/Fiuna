// Programa que lee un numero entero y verifica si es par
#include<iostream>
using namespace std;
int main()
{
	 int n;
	 cout << "Digite un numero entero ";
	 cin >> n;
	 if ( n%2 == 0 ) cout << "\nEl numero " << n << " es par\n";
	 else  cout << "\nEl numero " << n << " es impar\n";
	 system ( "pause" );
	 return 0;
}
