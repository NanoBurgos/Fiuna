#include<iostream>
using namespace std;
main(){
	int i, cont=0;
	float suma=0, prom;
	int vect[10];
	for(i=0;i<10;i++)
	{
		cout<<"vect["<<i+1<<"]\n";
		cin>>vect[i];
	}
	for(i=0;i<10;i++)
	{
	suma= suma+vect[i];
	cont++;
	}
	cout<<"la suma es "<<suma;
	prom=(suma/cont);
	cout<<"\n el promedio es "<< prom; 
	
	
	
	
}
