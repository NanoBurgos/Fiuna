//Función Polinomio en x de grado n
#include<iostream>
using namespace std;

float pol(float,int,int);
float coef(int);
int entpos(void);

main()
{
 float x,p; int n,i;
 cout<<"\nIngrese el grado del polinomio, n=";
 n=entpos();
 cout<<"\nIngrese un valor de, x=";
 cin>>x;
 cout<<"\nIngrese los coeficientes\n";
 p=pol(x,n,n);
 cout<<"\n";
 for(i=n;0<=i;i--)
 {
  if(i>0)
  cout<<"C"<<i<<"."<<x<<"^"<<i<<" + ";
  else
  cout<<"C"<<i<<"= ";
 }
 cout<<p;
 cout<<"\n\n";
 system("pause");
 return 0;
}

float pol(float x,int n,int exp)
{
 if(n==0)
 return coef(exp);
 else
 return( x*pol(x,n-1,exp) + coef(exp-n));
 /*La fórmula de esta recursividad es una factorizacón como se muestra seguidamente:
   para n=3, calcular pol(x,n,n):
   pol(x,3,3)= x*( pol(x,3-1,3) ) + coef(3-3)
   pol(x,2,3)= x*( pol(x,2-1,3) ) + coef(3-2) 
   pol(x,1,3)= x*( pol(x,1-1,3) ) + coef(3-1)
   pol(x,0,3)= coef(3) --> fin de la recursividad
 */               
}

float coef(int n)
{
 float a;
 cout<<"Coeficiente de X^"<<n
     <<", C"<<n<<"=";
 cin>>a;
 return a;
}

int entpos(void)
{
 float x;
 cin>>x;
 while(x!=int(x)||x<=0)
 {cout<<"Debe se entero y positivo: ";
  cin>>x;}
 return int(x);
}
