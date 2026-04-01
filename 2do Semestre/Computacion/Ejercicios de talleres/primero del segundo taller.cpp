/* Lea un numero entero N mayor o igual que 10 y un numero real no nulo X y luego
calcule, utilaizando recursividad, e imprima una sumatoria dada*/
#include<iostream>
#include<math.h>
#include<stdlib.h>

using namespace std;
float serie(float (x), float (n), int (z));

int main()
{
	float x, y;
	do
	{  cout<<"\nIntroduzca un numero entero y mayor que 10\n";	cin>>y;   }while( y != int(y) || y<10 );	
	do
	{  cout<<"\nIntoduzca un numero real no nulo\n";  cin>>x;	}while( x == 0 );	
	cout<<"\n\nLa serie con los datos ingresaos "<<serie(x, y, 0)<<"\n\n";	
	system ("pause");	
}
float serie(float (x), float (n), int (z)) 
{
	float suma=0; 
	if(z<=n)
	suma = ( ( pow(-1,n) * pow(x,2*n+1) ) / (2*n+1) + serie( x , n, z+1) ) ;
	return suma;
}
