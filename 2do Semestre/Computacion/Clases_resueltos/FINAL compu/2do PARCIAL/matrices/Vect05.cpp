/* Vect05: Escribir un programa en lenguaje C que:
Permita insertar, una componente dada, en la posición m en un vector de n componentes (n >= m).
Luego de la inserción, el vector tendrá n + 1 componentes. */
#include<iostream>
using namespace std;
int validar()
{float x;
cin>>x;
while(x!=int(x)||x<=0)
{cout<<"\nVuelva a introducir (debe ser entero y positivo)\n\tnumero : "; cin>>x;}
return int(x);}
main()
//Nombrar las variables, n la dimension del vector, m la posicion a agregarse
{int i,n,m;
cout<<"\n\t\tINTRODUZCA EL VALOR DE LA DIMENSION DEL VECTOR\n\tn : ";
n=validar();
//Se Carga los elementos del vector V
float V[n];
cout<<"\n\nCARGUE LOS VALORES DE LOS ELEMENTOS DEL VECTOR V:\n";
for(i=0;i<n;i++)
{cout<<"\n\t\tV [ "<<i+1<<" ] = ";cin>>V[i];}
//Lectura e Impresion del Vector inicial
cout<<"\n\n\tV["<<n<<"] = [ ";
for(i=0;i<n;i++)
cout<<V[i]<<" ";
cout<<"]\n\n";
//Se introduce el valor de la posicion a agregarse
cout<<"\n\t\tINTRODUZCA EL VALOR DE LA POSICION QUE DESEA AGREGAR ( m<=n )\n\tm : ";
m=validar();
//Verificacion de m>n
while(m>n)
{cout<<"\n\tVuelva a introducir (Debe ser menor o igual que n)\n\tm : "; cin>>m;}
//Se translada un lugar desde la posicion m
for(i=n-1;i>=m-1;i--)
V[i+1]=V[i];
//Se introduce el valor para esa posicion m
cout<<"\n\n\t\tINTRODUZCA EL VALOR QUE DESEA PARA ESA POSICION\n\ta : ";
cin>>V[m-1];
//Se imprime el nuevo vector
cout<<"\n\n\t\tVECTOR FINAL\n\n\tV [ "<<n+1<<" ] = [ ";
for(i=0;i<n+1;i++)
cout<<V[i]<<" ";
cout<<"]\n\n\n\t\t";
system("pause");}
