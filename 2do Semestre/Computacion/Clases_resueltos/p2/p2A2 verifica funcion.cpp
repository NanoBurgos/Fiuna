#include <iostream>
#include <stdlib.h>
using namespace std;
int funcion (int a,int b)
{
	if (a<b)
	{
		return 0;
	}
	else 
	{
		return funcion (a-b,b)+1;
	}
}

int main()
{	int x, y, func;
	cout << "Introduzca los valores a y b de la funcion respectivamente" << endl; cin >> x; cin >>y;
	func = funcion (x,y);
	cout << "Funcion= "<< func<< endl;
	system ("pause");
}

