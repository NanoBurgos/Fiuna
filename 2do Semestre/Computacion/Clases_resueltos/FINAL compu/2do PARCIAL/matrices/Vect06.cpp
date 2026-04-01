/* Vect06: Escribir un programa en lenguaje C que:
Permita eliminar la componente que ocupa la posición m en un vector de n componentes (n m).
Luego de la eliminación, el vector tendrá n – 1 componentes. */
#include<iostream>
using namespace std;
int entpos()
{float x;
cin>>x;
while(x!=int(x)||x<=0)
{cout<<"\n\n\t\tVuelva a introducir el numero (Debe ser entero y positivo)\n\tnumero : ";cin>>x;}
return int(x);}

main()
{int n,m,i;
cout<<"\n\n\t\tINTRODUZCA EL VALOR DE LA DIMENSION DEL VECTOR V\n\tn : ";
n=entpos();

//Se carga los elementos del vector V
float V[n];
cout<<"\n\n\t\tINTRODUZCA LOS VALORES DE LOS ELEMENTOS DEL VECTOR V\n";
for(i=0;i<n;i++)
{cout<<"\nV [ "<<i+1<<" ] = ";
cin>>V[i];}

//Se imprime el vector Inicial
cout<<"\n\n\tEL VECTOR V [ "<<n<<" ] = [ ";
for(i=0;i<n;i++)
cout<<V[i]<<" ";
cout<<"]\n\n";

//Se introduce el lugar que se desea eliminar
cout<<"\n\n\t\tINTRODUZCA LA POSICION QUE DESEA ELIMINAR\n\n\tm : ";
m=entpos();
while(m>n)
{cout<<"\n\n\t\tVuelva a introducir m (Debe ser menor o igual a n)\n\n\tm : ";
m=entpos();}

//Se elimina el lugar y se corre un lugar a la izquierda
for(i=m;i<n;i++)
V[i-1]=V[i];

//Se imprime el nuevo vector
cout<<"\n\n\tEL VECTOR FINAL V [ "<<n<<" ] = [ ";
for(i=0;i<n-1;i++)
cout<<V[i]<<" ";
cout<<"]\n\n";
system("pause");}
