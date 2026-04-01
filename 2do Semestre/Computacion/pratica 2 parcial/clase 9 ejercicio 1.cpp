#include<iostream>
using namespace std;
main(){
	
	int i, pos=0, neg=0, cero=0;
	int vect[10];
	cout<<"ingrese los componentes del vector \n"; 
	for(i=0;i<10;i++)
	{
		cout<<"vect["<<i<<"] "; 
		cin>>vect[i];
		
	}
	for(i=0;i<10;i++)
	{ 
	if(vect[i]>0)
	{ pos++;}
	if(vect[i]<0)
	{ neg++;}	
	if(vect[i]==0)
	{ cero++;}	
				
	}
	
	cout<<"total de positivos= "<<pos;
	cout<<"\ntotal de negativos= "<<neg;
	cout<<"\ntotal de ceros= "<<cero;
	
	
	system("pause>null");
}
