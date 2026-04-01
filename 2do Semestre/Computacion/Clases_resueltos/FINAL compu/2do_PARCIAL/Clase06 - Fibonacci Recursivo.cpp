/*Escriba un programa que muestre los primeros N términos de la serie de Fibonacci.
Use una función recursiva para calcular los términos de la serie.*/
#include <iostream>
using namespace std;
//Declaramos la funcion
float fibonacci(int);
//Funcion Principal
main()
{
 int i,n; float x;
 //Validamos n mediante x
 do{
    cout<<"\nIngrese la cantidad de terminos de la serie de Fibonacci a mostrar: ";
    cin>>x;
   }
 while(x!=int(x)||x<=0);
 n=int(x);
 //imprimimos los N términos de la serie de fibonacci
 for(i=0;i<n;i++) 
    cout<<"\nfibonacci("<<i<<")= "<<fibonacci(i)<<"\n";
 system("PAUSE");
}
//Funcion recursiva: Fibonacci
float fibonacci (int n)
{ 
  if (n==0 || n==1)//Condición de parada de la recursividad
    return n; //retorna un valor
  else 
    return fibonacci(n-1)+fibonacci(n-2); //retorna una recursividad (la funcion se llama a sí misma)
}
