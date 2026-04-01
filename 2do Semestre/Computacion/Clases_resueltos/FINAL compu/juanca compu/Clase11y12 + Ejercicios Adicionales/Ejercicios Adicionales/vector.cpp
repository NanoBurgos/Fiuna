/*TAA2013Parcial2
  Lea e imprima un número entero n, mayor que 2 y menor o igual que 20, 
  luego cargue un vector vect con n números enteros comprendidos entre 1 y 40, 
  inclusives, generados al azar e imprima vect con las componentes ordenadas en 
  secuencia ascendente, separando los números impares que deben ocupar los 
  primeros lugares y seguido de los pares, también en secuencia ascendente. */
#include<iostream>
using namespace std;
int valid();
main()
{

 int n;
 cout<<"Ingrese n= "; n=valid();
 int v[n],i,j,k,aux;
 //Inicializamos la semilla para el rand()
 srand(time(NULL));
 //Cargamos los numeros aleatorios en el vector
 for(i=0;i<n;i++)
 {v[i]=rand()%40+1;}
 //Ordenamos por seleccion preferentemente
 //Primero los impares
 for(i=0;i<n-1;i++)
 {
  k=i;
  for(j=i+1;j<n;j++)
   if(v[k]%2!=0)
    {
     if(v[j]%2!=0)
      {
       if(v[k]>v[j])
        k=j;
      }
    }
   else
   k=j;
  aux=v[i]; v[i]=v[k]; v[k]=aux;
 }
 //Ordenamos por seleccion preferentemente
 //Ahora los pares
 for(i=0;i<n-1;i++)
 {
  if(v[i]%2==0)
  {
   k=i;
   for(j=i+1;j<n;j++)
    if(v[k]>v[j])
     k=j; 
   aux=v[i]; v[i]=v[k]; v[k]=aux;
  }
 }   
 //Imprimimos el vector ordenado
 cout<<"v = [";
 for(i=0;i<n;i++)
 {cout<<" "<<v[i];}
 cout<<" ]"<<endl;
 system("pause");
}
int valid()
{
 float x;
 cin>>x;
 while(x!=int(x)||x<2||x>50)
 {cout<<"Error!"<<endl;
  if(x!=int(x))
  {cout<<"Ingrese un nro entero: ";
   cin>>x;}
  if(x<2)
  {cout<<"Ingrese un numero mayor o igual a 2: ";
   cin>>x;}
  if(x>50)
  {cout<<"Ingrese un nro menor o igual a 50: ";
   cin>>x;}
 }
 return int(x);
}
