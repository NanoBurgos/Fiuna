#include<iostream>
#include<time.h>
#include<math.h>
#include<stdlib.h>
using namespace std;

void numeroamigo(int,int);
main()
{

int a,b;
cout<<"introduzca dos numeros entre 100 y 32000 \n"; cin>>a; 	cin>>b;
while(a<100 or a>32000)
{ cout<< "introduzca a de nuevo"; cin>>a;}
while(b<100 or b>32000)
{ cout<< "introduzca b de nuevo"; cin>>b;}
numeroamigo(a,b);
system ("pause>null");
}

void numeroamigo(int a,int b)
{
	int suma1=0, i, suma2=0, j ;
	float n,m;
	for(i=1;i<a;i++)
	{
	
		if(a%i==0)
		{ suma1=i+ suma1;
		cout<<i<<" ";}
		 	
	} cout<<"= "<<suma1<<endl;
	
	for(j=1;j<b;j++)
	{
		
		if(b%j==0)
		{ suma2=j+ suma2;
		cout<<j<<" ";}
		
	}cout<<"= "<<suma2<< endl;
	if(suma1==b and suma2==a)
	{ cout<<"los numeros son amigos";}
	else
	{cout<< "los numeros no son amigos";}
}
