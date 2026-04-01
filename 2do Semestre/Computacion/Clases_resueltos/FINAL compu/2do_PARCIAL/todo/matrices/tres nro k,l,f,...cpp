/*lea 2 nuemros enteros y positivos (validarlos) m y n, que representan
respectivamente el numero de filas y el numero de columnas de una matriz mat de
componentes reales. Luego lea e imprima las mxn componentes de mat y tres numeros 
k, l, y f, los 2 primeros entero y positivos y menores o iguales que n, pudiendo 
ser uno solo de ellos cero y el tercero un numero real no nulo. Determine e imprima 
la matriz obtenida despues de sumar a la coluna k la columna l previamente multiplicado
por f.
*/
#include<iostream>
using namespace std;
int valid();
main()
{int m, n;
cout<<"Ingrese dos muneros entero y positivos\n";
cout<<"m= ";m=valid();
cout<<"n= ";n=valid();
float mat[m][n];
//cargar la matriz
int i, j;
for(i=0;i<m;i++)
for(j=0;j<n;j++)
{cout<<"mat["<<i+1<<"]["<<j+1<<"]=";
cin>>mat[i][j];}
//imprimir la matriz
for(i=0;i<m;i++)
{cout<<"|\t";
for(j=0;j<n;j++)
cout<<mat[i][j]<<"\t";
cout<<"|\n";}
//cargar los 3 numeros k, l y f
int k, l; float f;
//cargar k
cout<<"k="; cin>>f;
while(f!=int(f)||f<0||f>=n)
{cout<<"Error. Ingrese correctamente:";
cin>>f;}k=int(f);
//cargar l
cout<<"l="; cin>>f;
while(f!=int(f)||f<0||f>=n||k==0&&f==0)
{cout<<"Error. Ingrese correctamente:";
cin>>f;}l=int(f);
//cargar f
cout<<"f="; cin>>f;
while(f==0)
{cout<<"Error. Ingrese correctamente:";
cin>>f;}
//calcular la suma  
for(i=0;i<m;i++)
mat[i][k]=mat[i][k] + mat[i][l]*f;
//imprimir en pantalla 
for(i=0;i<m;i++)
{cout<<"|\t";
for(j=0;j<n;j++)
cout<<mat[i][j]<<"\t";
cout<<"|\n";}

system("pause");}

int valid()
{float x;
cin>>x;
while(x!=int(x)||x<=0)
{cout<<"Error. Ingrese correctamente:";
cin>>x;}
return int(x);}
