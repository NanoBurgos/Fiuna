/*Elaborar un programa en C++ que digite consecutivamente 5 numeros enteros y positivos menores que 10.
Cada vez que digite uno de esos numeros, genere a su vez,
un numero pseudo-aleatorio y elevelos al exponente de cada numero que va siendo digitado. 
El resultado de cada potencia asi obtenida, guardarlo en un  vector a medida que va siendo calculado.
Ordene el vector asi formado de mayor a menor*/
#include<iostream>
using namespace std;
//funcion que permite cargar solo numeros mayores a 0 y menores a 10
int validar()
{float x;
cin>>x;
while (x>=10||x!=int(x)||x<=0)
{cout<<"\n\n\tVuelva a introducir el numero (0<numero<10)\n\n\t\tnumero = ";
cin>>x;}
return int(x);}

float potencia(float x,int n);

main()
{
int i,j,n;
float AUX,x,V[4],Esclavo[4],Mayor=-999999999;

//Se cargan las potencias en el vector
for(i=0;i<5;i++)
{cout<<"\n\n\tINTRODUZCA EL VALOR DE LA POTENCIA n = ";
n=validar();
x=rand()%(10);
V[i]=potencia(x,n);
cout<<"\nAleatorio es "<<x;
cout<<"\n\nV [ "<<i+1<<" ] = "<<V[i];
Mayor=V[i]>Mayor?V[i]:Mayor;}

//Se imprime el vector desordenado
cout<<"\n\n Desordenado V = [ ";
for(i=0;i<5;i++)
cout<<V[i]<<" ";
cout<<"]";

//Se ordena el Vector por burbuja
for (i=1; i<5; i++)
{AUX = V[i];
j = i - 1;
while ( (V[j] < AUX) && (j >= 0) )
{V[j+1] = V[j];
j--;}
V[j+1] = AUX;}
//Se imprime el vector ordenado
cout<<"\n\n Ordenado V = [ ";
for(i=0;i<5;i++)
cout<<V[i]<<" ";

cout<<"]\n\n\n\n";
system("pause");   

}

float potencia(float x,int n)
{float p;
if(n!=0)
p=x*potencia(x,n-1);
else
p=1;
return p;
}
