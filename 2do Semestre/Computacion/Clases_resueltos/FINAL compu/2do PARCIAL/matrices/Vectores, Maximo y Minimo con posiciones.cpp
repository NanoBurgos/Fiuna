/* Vect03: Escribir un programa en lenguaje C que:
Permita determinar la mayor y menor entre las n componentes numéricas de un vector e imprima las
posiciones que ocupan
los primeros de la secuencia que cumplen dichas condiciones. */
#include<iostream>
using namespace std;
//Funcion que permite que se introduzca unicamente "n" como numero natural
int validar ()
{float n;
cout<<"\n\tIntroduzca un valor de n (dimension del vector)\n\tque sea un numero natural, n = ";
cin>>n;
while (n!=int(n)||n<=0)
{cout<<"\n\tVuelva a introducir, n = ";
cin>>n;}
return int(n);}

main ()
{
//Nombran las variables, n es la dimension de V;
//i es contador
int n,i;
n=validar();
//Nombra el vector
float V[n],Max=-999999,Min=99999;

//Carga los elementos del Vector, Calcular el Maximo, Calcular el Minimo, Guardar las posiciones
cout<<"\n\tCargar los elementos del Vector V";
for(i=0;i<n;i++)
{cout<<"\nV [ "<<i+1<<" ] = ";
cin>>V[i];//Cargando los elementos
//Calculando el maximo
Max=Max<V[i]?V[i]:Max;
Min=Min>V[i]?V[i]:Min;}

//Imprimiendo las Posiciones con los valores
cout<<"\n\tLos maximos con sus posiciones son:\n";
for(i=0;i<n;i++)
{if(Max==V[i])
cout<<"\nV [ "<<i+1<<" ] = "<<V[i];}

cout<<"\n\tLos minimos con sus posiciones son:\n";
for(i=0;i<n;i++)
{if(Min==V[i])
cout<<"\nV [ "<<i+1<<" ] = "<<V[i];}

cout<<"\n\n\t";
system("pause");}
