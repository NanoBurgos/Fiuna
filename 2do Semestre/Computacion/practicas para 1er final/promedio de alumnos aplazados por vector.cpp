/* o	Calcular la cantidad de alumnos que obtuvieron nota inferior al promedio del curso en cierta materia. Hay 20 alumnos, y todos rindieron.
 Las notas van del 0 al 100 (se asume que todas las notas son correctas).*/
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
main()
{
	int i,cont=0, cont2=0;
	float suma=0, promedio;
	int vector[10];
	cout<<"Introduzca las notas:\n";
	for(i=0;i<10;i++)
	{
		cout<<" alumno ["<<i+1<<"]: ";
		cin>>vector[i];
		suma= suma + vector[i]; 
		cont++;
	}
	promedio= suma/cont;
	cout<<" El puntaje minimo para poder aprobar en base al promedio es: "<<promedio<<endl;
	
	cout<<"la cantidad de alumnos que no alcanzaron el minimo("<<promedio<<") es "; 
	for(i=0;i<10;i++)
	{
		if(vector[i]<promedio)
		{ cont2++; }
	}
		cout<<cont2<<endl;
		
		cout<<"los alumnos que no aprobaron son:\n";
		for(i=0;i<10;i++)
	{
		if(vector[i]<promedio)
		{ cout<<"alumno ["<<i+1<<"]\n"; }
	}
		system("pause>null");
}
