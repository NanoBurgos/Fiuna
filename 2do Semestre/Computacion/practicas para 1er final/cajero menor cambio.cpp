/* o	Diseñar un programa en C/C++ que resuelva el problema del cajero  (Dar el vuelto con el menor número posible de billetes).*/

#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
using namespace std;
main()
{
	int i, cont=0;
	int a;
 	int cambio[7]= {10000, 5000, 1000,500,100,50,10};	
	 cout<<"introduzca el monto a cambiar : " ; 
	 cin>>a; 
	 for(i=0; i<7;i++)
	{
		if( a >=cambio[i] )
		{
			while(a>= cambio[i])
			{
				a= a -cambio[i];
				cont++;
			}
			if(cont)
			{
				cout<<cont<<"billetes de "<<cambio[i]<<endl;
			}	
		}
	cont=0;
	}
	system("pause>null");
}
