#include <iostream>
using namespace std;
int entpos();
int entpos()
{float x;
    do{cout<<"ingrese un numero entero y positivo";
    cin>>x;}
    while(x!=int(x)||x<0);
    return int(x);}
main()
{int i,j,k,l,p,c=0,d=1;
      cout<<"\ningrese m y n las filas y columnas de la matriz a escalonar\n";
float m=entpos(),n=entpos(),v[int(m)][int(n)],aux,x;
cout<<"ingrese las componentes de la matriz";
for(i=0;i<m;i++)
for(j=0;j<n;j++)
cin>>v[i][j];
for(p=0;p<m;p++)//fija la fila del pivote
{for(l=c;l<n;l++)//fija la columna del pivote
{if(v[p][l]==0)// (hasta la linea 32) verifica si los pivotes son ceros
for(i=p;i<m;i++)// si lo son cambia por la primera fila de pivote no nulo
{if(v[i][l]!=0)
{for(j=0;j<n;j++)
{aux=v[p][j];
v[p][j]=v[i][j];
v[i][j]=aux;}
break;}
else
d++;}
if(d>=m-p)//si todas las filas tienen cero debajo del pivote, aumenta la columna
{c++;//del pivote y finaliza el ciclo que fija la columna (segundo "for")
d=1;
break;}
for(i=p+1;i<m;i++)//(hasta la linea 37) resta a las filas la fila pivote, si es 
{if(v[i][l]!=0)//posible hacerlo (v[i][l]distinto de 0)
{x=v[i][l]/v[p][l];
for(j=l;j<n;j++)
v[i][j]=v[i][j]-x*v[p][j];}}
break;}c++;}//aumenta la columna del pivote y finaliza el ciclo que fija la fila del pivote(primer "for")
for(i=0;i<m;i++)//imprime la matriz escalonada
{for(j=0;j<n;j++)
cout<<v[i][j]<<"  ";
cout<<endl;}
system ("pause");}
