//o	Calcular la suma y promedio de los valores positivos de un vector de 50 elementos. (10)
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
main()
{
	int i, cont=0;
	float promedio,suma=0;
	int vector[10];
	cout<<"introduzca las componetes del vector\n";
	for(i=0;i<10;i++) 
	{
		cout<<"componente["<<i+1<<"] = ";
		cin>>vector[i];
		suma= suma + vector[i];
		cont++	;	
	}
	cout<<"el vector es: [";
	promedio= suma/cont;
	for(i=0;i<10;i++) 
	{
		cout<<" "<<vector[i]<<" ";
	}
	cout<<"]"<<endl;
	cout<<"la suma de las componentes del vector es: "<<suma<<endl;
	cout<<"el promedio de la suma de las componentes del vector es: "<<promedio;
	system("pause>null");
}
