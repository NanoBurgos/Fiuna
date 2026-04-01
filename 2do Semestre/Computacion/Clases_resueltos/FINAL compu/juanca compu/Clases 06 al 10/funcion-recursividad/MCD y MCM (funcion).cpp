/*Maximo comun divisor y minimo comun multiplo de n numeros 
 por funciones (sin vectores)*/
#include<iostream>
using namespace std;
//Declaramos las funciones
int mcd(int,int);
int mcm(int,int);
int valid();
//Función Principal
main()
{
 int i,n,x,MCD,MCM;
 cout<<"Ingrese N\n";
 n=valid();
 cout<<"Ingrese X1\n";
 MCD=valid();
 MCM=MCD;
 for(i=2;i<=n;i++)
 {cout<<"Ingrese X"<<i<<"\n";
   x=valid();
  MCD=mcd(x,MCD);
  MCM=mcm(x,MCM);
 }
 cout<<"\nMCD="<<MCD;
 cout<<"\nMCM="<<MCM;
 cout<<"\n";
 system("pause");
}

//Desarrollamos las funciones

int mcd(int D,int d)
{int aux,r;
 while(D%d!=0)
 {r=D%d;D=d;d=r;}
 return d;}

int mcm(int a,int b)
{return a*b/mcd(a,b);}

int valid()
{float x;
 cout<<"Introduzca un numero entero y positivo: ";
 cin>>x;
 while(x!=int(x)||x<1)
 {cout<<"Error. Ingrese de nuevo: ";
  cin>>x;}
 return int(x);}
