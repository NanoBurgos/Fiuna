//prog nro 14
#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{int i=0; float  n;
do{cout<<"\n\t Introdusca un numero entero y positivo \t";
cin>>n;}while(n<0 || n!=int(n));
cout<<"\n sus fatores primos son: \n";
for(i=2;i<=n;i++)
{if(int(n)%i==0)
{cout<<i<<"\n";
 n=n/i;
 i--;}}cout<<"\n\n";
system("pause");}
