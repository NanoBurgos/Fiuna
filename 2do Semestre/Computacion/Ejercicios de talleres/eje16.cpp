//Luis A. Morinigo L. Ejercicio 16-Computacion 2016
#include<iostream>
using namespace std;
main()
{
	float a,b,c,s;
	cout<<"Ingrese el primer angulo: ";cin>>a;
	cout<<"Ingrese el segundo angulo: ";cin>>b;
	cout<<"Ingrese el tercer angulo: ";cin>>c;
	s=a+b+c;
	if(s==180)
	cout<<"Corresponde a angulos internos de un triangulo"<<endl;
	else
	cout<<"No corresponde a angulos internos de un triangulo"<<endl;
	system("pause");
}
