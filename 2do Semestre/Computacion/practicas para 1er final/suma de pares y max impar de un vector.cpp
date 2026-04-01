/* oo	Diseñar un programa en C/C++ que resuelva el problema del cajero  (Dar el vuelto con el menor número posible de billetes). */

#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
using namespace std;
main()
{
	int vector[11];
	int i ;
	float suma=0, max;
	cout<<"ingrese las componentes del vector;"<<endl;
	for(i=1;i<11;i++)
	{
		vector[i]= rand()%10;	
		cout<<"componente ["<<i<<"]= ";
		cout<<vector[i]<<endl;
		//cin>>vector[i];
			
	}
	
	max=0;
	for(i=1;i<11;i++)
	{
	 if( i%2==0 )
		{
			suma= suma + vector[i];	
				
		}
	 
	 if( i%2==1)
	 	{
	 		if(max<vector[i])
	 		{
	 			max=vector[i];
	 		}
	 	}
	}
	
	cout<<"la suma de las posiciones pares es: "<<suma<<endl;
	cout<<"el mayor numero de las posiciones impares es: "<<max<<endl;
	
	system("pause"); 
}


