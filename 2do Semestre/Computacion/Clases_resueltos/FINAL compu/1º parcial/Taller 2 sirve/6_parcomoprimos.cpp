/*
Lea un número par mayor que 2. A continuación imprima en pantalla dos números
primos tales que su suma sea igual al número dado inicialmente. (Atendiendo a la
conjetura de Golbach, que establece que todo número par mayor que 2 puede escribirse
como la suma de dos números primos).
*/
#include<iostream>
using namespace std;
int par(int);
int verif(int);
 int a,n;
int main()
{
    cout<<"Ingrese un numero par mayor que 2"<<endl;
    n=par(n);
 cout<<"El numero es par mayor que dos, acontinuacion presentamos el numero mediante\n ";
 cout<<"GOLBACH"<<endl;
a=n-1;
do{a--;}while(verif(a)==0||verif(n-a)==0);
cout<<"\t\t"<<n<<"="<<n-a<<"+"<<a<<"\n";
 
   system("PAUSE"); 
   return 0;}
//Validacion del numero par
int par(int n)
{
    cin>>n;
  while(n<=2||n!=int(n)||n%2!=0)
  {cout<<"El numero debe ser par y mayor que 2 \n\t Digite nuevamente:";
  cin>>n;
  }
  return n;}
//verififca que el numero sea prim
int verif(int a)
{int j=0;
     for(int i=2;i<n;i++)
    {if (n%i==0)
    j++;}
if (j==0) return 1;
else return 0;}
    
