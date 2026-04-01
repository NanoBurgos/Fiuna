/*Lea dos numeros enteros y positivos m y n (validarlos) que representan respectivamente
numero de filas y el numero de columnas de una matriz mat de componentes reales. Luego 
lea tantos numeros reales como sean necesario para completar las mxn componentes de mat de 
tal manera que esta se encuentren en secuencia estrictamente descendente. Finalmente:
a) imprima las componentes de mat
b) ultilizando un puntero asociado calcule e imprima la suma del primer y el ultimo 
elemento de mat*/
#include<iostream>
#include<math.h>
using namespace std;
int valid();
main()
{int m, n;
cout<<"Ingrese dos muneros entero y positivos \n";
cout<<"m= ";m=valid();
cout<<"n= ";n=valid();
//carga el primer elemento de la matriz
float mat[m][n], *p, s1=0, s2=0;
p=&mat[0][0];
int i,x,j;
cout<<"mat["<<1<<"]["<<1<<"]=";
cin>>mat[0][0];//cin>>p[0];
//cargar los elementos si es que verifica que los numero estan en orden descendente
i=0;j=1;
for(x=1;x<m*n;x++)
{do{cout<<"mat["<<i+1<<"]["<<j+1<<"]= ";
    cin>>p[x];}
    while(p[x]>=p[x-1]);//si esta en orden descendente pasa a la sgte columna si no cumple vuelve a pedir
    j++;
    if((x+1)%n==0){j=0;i++;}}
    // a) imprima las componentes de mat  
 for(i=0;i<m;i++)
{cout<<"|\t";
for(j=0;j<n;j++)
cout<<mat[i][j]<<"\t";
cout<<"|\n";}
/*b) ultilizando un puntero asociado calcule e imprima la suma del primer y el ultimo 
elemento de mat*/
cout<<"La suma de la primera mas la ultima componente de mat es, "
    <<"s= "<<p[0]+p[m*n - 1]<<"\n";
system("pause");}

int valid()
{float x;
cin>>x;
while(x!=int(x)||x<=0)
{cout<<"Error. Ingrese correctamente:";
cin>>x;}
return int(x);}
