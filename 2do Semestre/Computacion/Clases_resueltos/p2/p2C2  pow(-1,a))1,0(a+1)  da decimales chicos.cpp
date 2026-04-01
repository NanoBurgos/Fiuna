#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;
float sumatoria (int a)
{
	if (a==0)
	{
		return 1;
	}
	
	if (a==1)
	{
		return 1.0*1/2;
	}
	else
	{
		return   (pow(-1,a))*1.0/(a+1)  + (sumatoria (a-1));
	}
}

int main()
{
	int n;
	float suma;
	cout << "Introduzca un numero" << endl ; cin >> n;
	suma = sumatoria (n);
	cout << suma << endl;
	system ("pause");
}
	
