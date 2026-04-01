#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>
using namespace std;
void suma(int, float);
main()
{
	int n;
	float x;
	cout<<"introduzca un numero x y n"; cin>> x; cin>> n;
	suma(n, x);	
}
void suma(int n, float x)
{
	int i;
	float suma=0;
	for (i=1;i<=n;i++)
	{
		
		suma= 7*(sin(3*i*x)) * (cos(i*x)) + suma ;  
		cout<< 7*(sin(3*i*x)) * (cos(i*x)) <<endl;
	}
	
	cout<<"la sumatoria es "<<suma;
}
