/*13) Lea e imprima un numero entero "n", mayor que 2 y menor que 50,
luego cargue un vector "vect" con "n" numeros comprendidos entre 1 y 1000 inclusive,
generados al azar e imprima "vect" con las componentes ordenadas en secuencia
ascendente, separando los numeros impares que deben ocupar los primeros lugares
y seguido de los pares, tambien en secuencia ascendente*/
#include<iostream>
using namespace std;
int validar();
main()
{int n,i,aux,j,c=0;
srand(time(NULL));
cout<<"\n\n\tDIGITE UN NUMERO ENTERO PARA LA DIMENSION DEL VECTOR vect[n] (2<n<50)\n\tn = ";
n=validar();
int v[n],V[n];
cout<<"\n\tEL VECTOR GENERADO vect["<<n<<"] es :\n[";
for(i=0;i<n;i++)
{v[i]=1+rand()%1000;
cout<<" "<<v[i]<<" ";}cout<<"]\n";
//Se ordena el vector
for(i=0;i<n;i++)
{for(j=0;j<n-1;j++)
{if(v[j]>v[j+1]) {aux=v[j];v[j]=v[j+1];v[j+1]=aux;}}}
for(i=0;i<n;i++)
{if(v[i]%2){V[c]=v[i];c++;}}
for(i=0;i<n;i++)
{if(v[i]%2==0){V[c]=v[i];c++;}}
//se imprime el vector ordenado
cout<<"\n\tEL VECTOR ORDENADO vect["<<n<<"] es :\n[";
for(i=0;i<n;i++)
{cout<<" "<<V[i]<<" ";}
cout<<"]\n\n\n";
system("pause");}
//FUNCION QUE VALIDA LOS NUMEROS ENTEROS ENTRE 20 Y 50
int validar()
{float x; cin>>x;
while(x!=int(x)||x<=2||x>=50)
{cout<<"\n\tVUELVA A DIGITAR\n\tnumero = ";cin>>x;}
return int(x);}
