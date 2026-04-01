/*Lea dos numeros enteros y positivos m y n (validarlos) que representan respectivamente
numero de filas y el numero de columnas de una matriz mat de componentes reales. Luego 
lea tantos numeros reales como sean necesario para completar las mxn componentes de mat de 
tal manera que esta se encuentren en secuencia estrictamente ascendente. Finalmente:
a) imprima las componentes de mat
b) ultilizando un puntero asociado calcule e imprima la traza de mat*/
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
//cargar los elementos si es que verifica que los numero estan en orden ascendente
i=0;j=1;
for(x=1;x<m*n;x++)
{do{cout<<"mat["<<i+1<<"]["<<j+1<<"]= ";
    cin>>p[x];}
    while(p[x]<=p[x-1]);//si esta en orden ascendente pasa a la sgte columna si cumple vuelve a pedir 
    j++;
    if((x+1)%n==0){j=0;i++;}
}  
 // a) imprima las componentes de mat  
 for(i=0;i<m;i++)
{cout<<"|\t";
for(j=0;j<n;j++)
cout<<mat[i][j]<<"\t";
cout<<"|\n";}
//b) ultilizando un puntero asociado calcule e imprima la traza de mat "metodo 1"     
for(x=0;x<n;x++) 
s1=s1+p[x*(n+1)]; 
cout<<"La traza es, S1="<<s1<<"\n"; 
//b) ultilizando un puntero asociado calcule e imprima la traza de mat "metodo 2"
for(i=0;i<m;i++)
for(j=0;j<n;j++)
{if(i==j)
s2=s2+p[n*i+j];}   
cout<<"La traza es, S2="<<s2<<"\n";       
system("pause");}
//validacion 
int valid()
{float x;
cin>>x;
while(x!=int(x)||x<=0)
{cout<<"Error. Ingrese correctamente:";
cin>>x;}
return int(x);}
