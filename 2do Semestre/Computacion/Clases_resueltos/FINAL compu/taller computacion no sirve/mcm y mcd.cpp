/*Leer 4 números enteros positivos (validarlos), y calcular el mínimo común múltiplo 
y el máximo común divisor de dichos números.*/

#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;
main()
{float a,b,c,d, M, N, O, P; 
int A,B,C,D, mcd=1, mcm=1, i=2;
cout<<"Introduzca el primer numero= ";cin>>a;
while (a<=0 || a!=int(a))
{cout<<"El numero tiene que ser entero y positivo, introduzca un nuevo valor= ";cin>>a;}
cout<<"Introduzca el segundo numero= ";cin>>b;
while (b<=0 || b!=int(b))
{cout<<"El numero tiene que ser entero y positivo, introduzca un nuevo valor= ";cin>>b;}
cout<<"Introduzca el tercer numero= ";cin>>c;
while (c<=0 || c!=int(c))
{cout<<"El numero tiene que ser entero y positivo, introduzca un nuevo valor= ";cin>>c;}
cout<<"Introduzca el cuarto numero= ";cin>>d;
while (d<=0 || d!=int(d))
{cout<<"El numero tiene que ser entero y positivo, introduzca un nuevo valor= ";cin>>d;}
A=int(a);
B=int(b);
C=int(c);
D=int(d);
while(A%i!=0 && B%i!=0 && C%i!=0 && D%i!=0)
{i++;}
while(i<=A && A%i==0 && i<=B && B%i==0 && i<=C && C%i==0 && i<=D && D%i==0)
{ mcd=mcd*i;
M=A/i; N=B/i; O=C/i; P=D/i;
while(i<=M && M==int(M) && int(M)%i==0 && i<=N && N==int(N) && int(N)%i==0 && i<=O && O==int(O) && int(O)%i==0 && i<=P && P==int(P) && int(P)%i==0)
{mcd=mcd*i;
M=M/i; N=N/i; O=O/i; P=P/i;}
while(int(M)%i!=0 && int(N)%i!=0 && int(O)%i!=0 && int(P)%i!=0)
{i++;}}
cout<<"El mcd de los cuatro numeros es= "<<mcd<<endl;

while((i<=A && A%i==0) || (i<=B && B%i==0) || (i<=C && C%i==0) || (i<=D && D%i==0))
{ mcm=mcm*i;
M=A/i; N=B/i; O=C/i; P=D/i;
while((i<=M && int(M)%i==0) || (i<=N && int(N)%i==0) || (i<=O && int(O)%i==0) || (i<=P && int(P)%i==0))
{mcm=mcm*i;
M=M/i; N=N/i; O=O/i; P=P/i;}
i++;}
cout<<"El mcm de los cuatro numeros es= "<<mcm<<endl;
system("pause");}





