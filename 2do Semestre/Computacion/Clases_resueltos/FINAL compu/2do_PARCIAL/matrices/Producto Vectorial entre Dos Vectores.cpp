//Producto vectorial entre dos vectores de dimension 3
#include<iostream>
using namespace std;

main()
{int i;

//Declaracion de Vectores con sus dimensiones
float A[3],W[3],B[3];

//Carga de los Elementos de los vectores A y B
for(i=0;i<3;i++)
{cout<<"\nA["<<i+1<<"]=";
cin>>A[i];
cout<<"\nB["<<i+1<<"]=";
cin>>B[i];}

//Lectura e Impresion del Vector A
cout<<"\nA = [ ";
for(i=0;i<3;i++)
cout<<A[i]<<" ";
cout<<"]";

//Lectura e Impresion del Vector B
cout<<"\nB = [ ";
for(i=0;i<3;i++)
cout<<B[i]<<" ";
cout<<"]";

//Aplicacion de Formula del Producto Vectorial
cout<<"\n\n\t\W = A x B";
W[0]=A[1]*B[2]-A[2]*B[1];
W[1]=A[2]*B[0]-A[0]*B[2];
W[2]=A[0]*B[1]-A[1]*B[0];

//Lectura del vector W
cout<<"\n\tW = [ ";
for(i=0;i<3;i++)
cout<<W[i]<<" ";
cout<<"]";

cout<<"\n\n";
system("Pause");}
