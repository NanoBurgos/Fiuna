#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;
float sumatoria (int b);
int main ()
{
	int n;
	float suma;
	cout << "Introduzca un numero" << endl; cin >> n;
	suma = sumatoria (n);
	cout << "sumatoria= " << suma << endl;
	system ("pause");
}

float sumatoria (int b)
{
;	
	if (b==1)
	{
		return 1.0*35/216;
	}
	else
	{	
			return 1.0/pow(2,2*b+1) + 1.0/pow(3,2*b+1) + sumatoria (b-1);
	}
}
