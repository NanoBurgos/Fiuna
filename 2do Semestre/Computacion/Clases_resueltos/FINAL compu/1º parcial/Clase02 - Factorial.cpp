/*Estructuras de control (bucles): while, for, do-while.
  Calcular el factorial de un número y verificar si es par 
  ó múltiplo de cinco ó a la vez ambos*/
#include<iostream>
using namespace std;
main()
{
 float n,factorial; int i;
 //validación
 do
  {
   cout<<"Ingrese un numero entero y no negativo: ";
   cin>>n;
  }
 while(n!=int(n) || n<0);
 /*alternativa
 cout<<"Ingrese un numero entero y positivo: ";
 cin>>n;
 while(n!=int(n) || n<=0)
 {cout<<"Ingrese un numero entero y positivo: ";
  cin>>n;}*/
  
 //verificando si es par ó múltiplo de cinco ó a la vez ambos
 if(int(n)%2==0 && int(n)%5==0)
 cout<<"El numero es par y multiplo de 5\n";
 else if(int(n)%2==0)
      cout<<"El numero es par\n";
      else if(int(n)%5==0)
           cout<<"El numero es multiplo de 5\n";
           else
           cout<<"El numero no es par ni multiplo de 5\n";
 
 //calculando el factorial
 factorial=1;
 if(n==0)
 cout<<"El factorial de "<<n<<" es: "<<factorial<<"\n";
 else
 {
  for(i=1;i<=n;i++)
  factorial = factorial*i;
 
  //Imprimiendo el resultado
  cout<<"El factorial de "<<n<<" es: "<<factorial<<"\n";
 }
 system("pause");
}
