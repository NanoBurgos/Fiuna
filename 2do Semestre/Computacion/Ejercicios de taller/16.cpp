#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;
int main()
{
	float x1,x2,x3,y1,y2,y3,x,y,z;
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
	x=(((y3-y1)/2)+(((x3-x2)*(x2+x3))/(2*(y3-y2))) -(((x2-x1)*(x1+x2))/(2*(y2-y1))))/(((x3-x2)/(y3-y2))-(((x1-x2)/(y2-y1))));
	y=((y2+y3)/2)-((x3-x2)/(y3-y2))*(x-((x3+x2)/2));
	z=pow(x1-x,2)+pow(y1-y,2);
	cout<<"(x-("<<x<<"))^2+(y-("<<y<<"))^2 = "<<z;
	system("pause>null");
	return 0;
}
