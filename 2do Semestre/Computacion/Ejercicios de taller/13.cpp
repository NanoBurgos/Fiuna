/* leer las coordenadas cartesionas x e y de tres puntos determinar si son o no vertices de un triangulo, imprimir si el triaungulo obtenido es equilatero isosceles escaleno*/
#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;
int main()
{
	float x1,x2,x3,y1,y2,y3;
	cout<<"Ingrese tres nros las coordenadas de tres puntos en x,y ";
	cout<<"X1= ";
	cin>>x1;
	cout<<"\nY1= ";
	cin>>y1;
	cout<<"\nX2= ";
	cin>>x2;
	cout<<"\nY2= ";
	cin>>y2;
	cout<<"\nX3= ";
	cin>>x3;
	cout<<"\nY3= ";
	cin>>y3;
	while ((y1-y2)/(x1-x2)==(y2-y3)/(x2-x3))
	{
	cout<<"Ingrese denuevo la primera coordenada";
	cout<<"X1= ";
	cin>>x1;
	cout<<"\nY1= ";
	cin>>y1;
	}
	if(sqrt(pow(x1-x2,2)+pow(y1-y2,2))==sqrt(pow(x2-x3,2)+pow(y2-y3,2)) and sqrt(pow(x1-x3,2)+pow(y1-y3,2))==sqrt(pow(x2-x3,2)+pow(y2-y3,2)))
	{
		cout<<"El triangulo es equilatero";
	}
	else if (sqrt(pow(x1-x2,2)+pow(y1-y2,2))==sqrt(pow(x2-x3,2)+pow(y2-y3,2)) or sqrt(pow(x1-x3,2)+pow(y1-y3,2))==sqrt(pow(x2-x3,2)+pow(y2-y3,2)))
	{
		cout<<"El triangulo es isoceles";
	}
	else
	{
		cout<<"Es escaleno";
	}
}
