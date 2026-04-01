/*Solicite al usuario un número entero y positivo n (valide). Utilizando una función
recursiva, calcule la suma S de los n primeros términos de la serie:*/
#include<iostream>
using namespace std;
int validacion();
float serie(int);
float n,s; 
int main()
{cout<<"Ingrese un numero enterto y positivo: \n"<<"n=";
 n=validacion();
 //s=serie(n); 
 cout<<"La suma de los\t"<<n<<"\t primeros numeros es\t"<<serie(n)<<"\n";
    
    system("PAUSE");
    return main();}
 //validacion
int validacion()
{ float n;
  cin>>n;
  while(n<=0||n!=int(n))
  {cout<<"El numero debe ser entero y positivo \n\t Digite nuevamente:";
  cin>>n;
  }
  return int(n);
}
// SUMA DE LA SERIE
float serie(int n)
{if (n==1)
return 1;
else if( n>0)
return 1/float(n)+serie(n-1);
}
