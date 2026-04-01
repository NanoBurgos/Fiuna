#include<iostream>
#include<math.h>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

int par (int num);
int impar( int num);
main()
{
	int num;
	cout<<"introduzca un numero ;";
	cin>> num;
	if(par (num))
	{
		cout<<"retorna 1";
	}
	else
	{
		cout<<"retorna 0";
	}
	
	system("pause>null");
}
int par (int num)
{
	if(num==0)
	{
		return 1;
	}
	else
	{
		return  impar(num-1);
	}
}

int impar ( int num)
{
	if(num==0)
	{
		return 0;
	}
	else
	{
		return  par(num-1);
	}
}
