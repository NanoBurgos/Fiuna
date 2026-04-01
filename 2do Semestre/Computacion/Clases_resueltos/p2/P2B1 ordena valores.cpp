#include<iostream>
#include<stdlib.h>
using namespace std;
main ()
{ int j=0, i=0, k=0, n; 
float v1[n], v2[n], x, y, aux=0, aux1=0;
cout<<"\tIngrese un nro mayor a dos y menor o igual a veinte: "; cin>>n;
while(n<2 or n>20)
{cout<<"\tIngrese un nro mayor a dos y menor o igual a veinte: "; cin>>n;
}
for(i=1; i<=n; i++)
{cout<<"\n\tIngrese x"<<i<<": "; cin>>x;
cout<<"\n\tIngrese y"<<i<<": "; cin>>y;
v1[j]=x;
v2[j]=y;
j++;
}

for(k=0; k<j-1; k++)
{for(i=0; i<j-1; i++)
{if(v1[i]>v1[i+1])
{aux=v1[i];
v1[i]=v1[i+1];
v1[i+1]=aux;
aux1=v2[i];
v2[i]=v2[i+1];
v2[i+1]=aux1;
}}}
cout<<"\n\ntLos valores ordenados son: ";
 for(i=0; i<n; i++)
 {cout<<"\n\t"<<v1[i]<<" , "<<v2[i];
 }

}
