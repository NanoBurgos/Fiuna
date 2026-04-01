//Cargue una matriz cuadrada nxn y:
// a)determine la traza
// b)si la matriz es simetrica 
// c)la suma de los elementos situados por encima de la diag. principal
// d)la suma de los elementos situados por debajo de la diag. principal
// e)la suma de los elementos de la diagonal secundaria 
#include<iostream>
using namespace std;
int entpos();
main()
{
      int n= entpos(), i, j, cont;
      float M[n][n],traza=0,diagsup=0, diaginf=0, diagsec=0, p=1;

for(i=0;i<n;i++)      
for(j=0;j<n;j++)
{cout<<"m["<<i+1<<"]["<<j+1<<"]= ";cin>>M[i][j];}

//traza
for(i=0;i<n;i++)      
for(j=0;j<n;j++)
if(i==j)
traza+=M[i][j];
cout<<"La traza de la matriz es: "<<traza<<"\n";
     
//suma de elementos encima y debajo de la dig principal
for(i=0;i<n;i++)
for(j=0;j<n;j++)
{if(j>i) 
diagsup+= M[i][j];
if(j<i) 
diaginf+= M[i][j];}
cout<<"La suma de los elementos por encima de la diag superior es: "<<diagsup<<"\n";
cout<<"La suma de los elementos por encima de la diag inferior es: "<<diaginf<<"\n";
//simetria
for(i=0;i<n;i++)
for(j=0;j<n;j++)
if(M[i][j]==M[j][i])
cont++;
if(cont==n*n)
cout<<"La matriz es simetrica\n";
else
cout<<"La matriz no es simetrica\n";

//diagonal secundaria
for(i=0;i<n;i++)
for(j=0;j<n;j++)
{if(i+j==n-1)
diagsec+=M[i][j];} 
cout<<"La suma de los elementos de la diag secundaria es: "<<diagsec<<"\n";

//producto de elementos situados debajo de la diag principal
for(i=(n-1);i>=0;i--)
                {for(j=(i-1);j>=0;j--)
                                   {p=p*M[i][j];}
                }
cout<<"\n\nEl producto de los elementos que estan por debajo de la diagonal principal es: "<<p;
cout<<"\n\n";

system("pause");
}

int entpos()
{
    float q;
    do {cout<<"Ingrese el numero de filas y columnas de la matriz cuadrada: ";
    cin>>q;}
    while(q!=int(q)||q<=0);
    return int(q);
}
