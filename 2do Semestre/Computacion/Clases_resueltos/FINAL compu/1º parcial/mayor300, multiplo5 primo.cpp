#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
int main()
{int i,band;
float n,nroran;
do{cout<<"\n\nDigite un numero entero\n";
cin>>n;}
while(n<=0 or n!=int(n));
srand(time(NULL));
for(i=0;i<n;i++)
	{nroran=rand()%1000+1;
	if(nroran>=300)
	{cout<<"\n\nlos numeros mayores a 300\t"<<nroran;
	if(int(nroran)%5==0){cout<<"\n\n\tes multiplo de 5"<<nroran;}
	band=0;
	for(i=2;i<nroran;i++)
	{
		if(int((int)nroran%i==0))
	{band=1;break;}
	}
	if(band==0)
	{cout<<"\n\nel numero generado es primo\n";}
	else
	{cout<<"\n\nel numero generado no es primo";}
	}}
cout<<"\n\n";
system("pause");
}
