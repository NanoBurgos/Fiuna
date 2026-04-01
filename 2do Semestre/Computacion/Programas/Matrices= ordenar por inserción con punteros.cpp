#include<iostream>
using namespace std;
int main()
{
int a,b;
cout<<"Ingrese el numero de filas: ";
cin>>a;
cout<<"\nIngrese el numero de columnas: ";cin>>b;
int m[a][b],*p,i,j,aux;
for(i=0;i<a;i++)
{
for(j=0;j<b;j++)
{cout<<"\nIngrese la componente ["<<i+1<<"]["<<j+1<<"]: ";cin>>m[i][j];}}

p=&m[0][0];//asigna la direccion del primer elemento al puntero(pasa a vector)
for(i=1;i<(a*b);i++)//algoritmo insercion al puntero(matriz)

{j=i;
aux=*(p+i);
while(j>0 && aux<*(p+j-1))
{*(p+j)=*(p+j-1);
j--;}
*(p+j)=aux;
}

cout<<"\nLa matriz es: \n";
for(i=0;i<(a*b);i++)//imprime la matriz ordenada
{
cout<<*(p+i)<<" ";
if((i+1)%b==0)
{cout<<endl;}
}

system ("pause");

}
