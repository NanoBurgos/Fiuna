/* lea e imprima dos numeros enteros M y N, mayores que 2 y menores o iguales que 20, luego lea un conjunto
de números enteros y los caga consecutivamente como elementos de la matriz mat de orden M*N siempre que cada numero leído
sea mayor que el precedente y luego imprime mat.*/
#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	float N , M , a , b=-10000000 ;
	int x, y;
	do
	{
		cout << "\nintroduzca un numero M, mayor que 2 y menor o igial a 20.\n"; cin >> M ;
	} while ( M != int(M) || M<3 || M>20 );
	do
	{
		cout << "\nintroduzca un numero N, mayor que 2 y menor o igial a 20.\n"; cin >> N;
	}while( N != int(N) || N<3 || N>20 );
	float mat[int(M)][int(N)];
	cout << "\n\nintroduzca los valores de una matriz de MxN en el que cada elemento sea mayor que el precedenten\n\n";
	for ( x=1; x<=M ; x++)
	{
		for ( y=1 ; y<=N ; y++ )
		{
		cout << "\nintroduzca el elemento ["<<x<<"]["<<y<<"]: "; cin >> a;
		while(a<=b)
		{	cout<<"\nRecuerde que el valor introducido debe ser mayor que el anterior\n"<<"introduzca el elemento ["<<x<<"]["<<y<<"]: ";
		cin >> a;	}
		mat[x][y] = a;
		b=a;
		}
	}
	cout << "\nla matriz MxN es:\n\n";
	for ( x=1 ; x<=N ; x++)
	{   cout<<"\n\t\t|   ";
		for ( y=1 ; y<=M ; y++ )
		{
			cout<<mat[x][y]<<"   ";
		}
		cout<<"   |";
	}
	cout<<"\n\n\n\n\n";
	system ("pause");
}
