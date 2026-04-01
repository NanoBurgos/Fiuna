//Luis A. Morinigo L. Ejercicio 17-Computación 2016
#include<iostream>
using namespace std;
main()
{
	float x1,y1,x2,y2,x3,y3,A,B,C,D,E;
	cout<<"ingrese x1: ";cin>>x1;
	cout<<"ingrese y1: ";cin>>y1;
	cout<<"ingrese x2: ";cin>>x2;
	cout<<"ingrese y2: ";cin>>y2;
	cout<<"ingrese x3: ";cin>>x3;
	cout<<"ingrese y3: ";cin>>y3;
	/*Ecuación de una recta:
	(x-x1)/(x2-x1)=(y-y1)/(y2-y1)
	(x-x1)*(y2-y1)=(y-y1)*(x2-x1)
	x*(y2-y1)-x1*(y2-y1)-y*(x2-x1)+y1*(x2-x1)
	*/
	A=y2-y1;
	B=x2-x1;
	C=x1*A;
	D=y1*B;
	cout<<"Ec. de la recta es: ("<<A<<")X + ("<<-B<<")Y + ("<<D-C<<") = 0"<<endl;
	E=x3*A-y3*B+D-C;
	if(E==0)
	{
		cout<<"P3 es parte de la recta"<<endl;
	}
	else
	{
		cout<<"P3 no es parte de la recta"<<endl;
	}
	system("pause");
}
