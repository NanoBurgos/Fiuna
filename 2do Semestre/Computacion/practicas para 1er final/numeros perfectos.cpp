#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<stdio.h>
using namespace std;
void numeroperfecto(int);
main()
{
	int a;
	cout<<"introduzca un numero "; cin>>a;
	numeroperfecto(a);
	
	system("pause>null");
}
void numeroperfecto(int a)
{
	int i, suma=0;
	for(i=1;i<a;i++)
	{
		if(a%i==0)
		{
			suma= suma + i;
		}
	}
	if(suma==a)
	{ cout<<"es un numero perfecto";}
	else{ cout<<"NO es un numero perfecto";}
}
