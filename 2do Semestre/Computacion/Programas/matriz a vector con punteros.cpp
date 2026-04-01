#include<iostream>
using namespace std;
int main()
{
int a,b;
cout<<"Ingrese el numero de filas: ";
cin>>a;
cout<<"\nIngrese el numero de columnas: ";cin>>b;
int m[a][b],*p,i,j;
for(i=0;i<a;i++)//carga matriz
{for(j=0;j<b;j++)
{
cout<<"\nIngrese la componente ["<<i+1<<"]["<<j+1<<"]: ";
cin>>m[i][j];
}
}

p=&m[0][0];//iguala la direccion del puntero con la 1ra componente
cout<<"\nLa matriz es: \n";
for(i=0;i<(a*b);i++)
{
cout<<*(p+i)<<" ";
if((i+1)%b==0)
cout<<endl;
}
system ("pause");
}
