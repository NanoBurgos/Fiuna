#include <iostream>
#include <stdlib.h>
using namespace std;
int f (int a)
{
	if (a==0)
	{
		return 0;
	}
	if (a==1)
	{
		return 1;
	}
	if (a>1)
	{
		return f(a-2) + f(a-1);
	}
}
int main()
{
	int n, funcion;
	cout << "Ingrese el valor n" << endl; cin >> n;
	funcion = f(n);
	cout << funcion <<endl;
	system ("pause");
}
