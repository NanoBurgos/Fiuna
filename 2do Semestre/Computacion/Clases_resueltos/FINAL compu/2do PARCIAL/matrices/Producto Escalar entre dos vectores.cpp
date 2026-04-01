#include<iostream>
using namespace std;
int dimension ();
main()
{
int i,n,m;
float ProdEs;
n=dimension();
//Carga los valores de los elementos del vector V  y W
float V[n],W[n];
cout<<"\n\tIntroduzca los valores de los elementos de los vectores:";
for(i=0;i<n;i++)
{cout<<"\n\tV["<<i+1<<"]:";
cin>>V[i];
cout<<"\n\tW["<<i+1<<"]:";
cin>>W[i];
ProdEs=ProdEs+V[i]*W[i];}

//Lectura e Impresion del Vector V
cout<<"\n\tV = [ ";
for(i=0;i<n;i++)
cout<<V[i]<<" ";
cout<<"]\n";
//Lectura e Impresion del Vector W
cout<<"\n\tW = [ ";
for(i=0;i<n;i++) //Recorre Elemento a Elemento del vector W
cout<<W[i]<<" ";
cout<<"]\n";

cout<<"El producto escalar es : "<<ProdEs<<"\n\n\n";
system("Pause");}

//Funcion que valida la dimension del vector
int dimension ()
{float x;
cout<<"\n\tIntroduzca un numero entero y positivo\n\tpara la dimension de los vectores:";
cin>>x;
while(x!=int(x)&&x<=0)
{cout<<"\n\tVuelva a introducir el valor de n = ";
cin>>x;}    
return int(x);}
