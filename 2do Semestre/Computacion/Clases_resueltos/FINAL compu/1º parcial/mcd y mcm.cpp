//prog nro 15
#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{ float  a , b,r; int p, q;
cout<<"\n\t Introdusca los numeros de los cuales desea conocer su mcd y mcm\t";
do{cout<<"\n\t Introdusca un numero entero y positivo \t";
cin>>a;}while(a<0 || a!=int(a));
do{cout<<"\n\t Introdusca un numero entero y positivo \t";
cin>>b;}while(b<0 || b!=int(b));
if(a>b){p=int(a); q=int(b);}
else{q=int(a); p=int(b);}
r=p%q;
while(r!=0){p=q; q=r; r=p%q;}
cout<<"\n\t el mcd es "<<q<<"\n\t";
cout<<"\n\t el mcm es "<<a*b/q<<"\n\t";
system("pause");}
