/*Desarrollar un programa en C++ que calcule el seno de un ángulo en grados 
  sexagesimales. Dado que sen(x) se puede calcular mediante la siguiente serie:
  sen(x) = x - (x^3)/3! + (x^5)/5! - (x^7)/7! ... cuyo termino general es
  ((-1)^n)*(x^(2*n+1))/(2*n+1)! que va de n=0 hasta n=n.
  Obs.: La serie dada se calcula con x en radianes.
*/
#include<iostream>
#include<math.h>
using namespace std;
float sen(float,int);
double fac(int);
int valid(char);
#define pi 3.14159 //definimos como pi al número
int main()
{float x,y; int n=1;
 while(n==1)//Mientras n sea verdadero, es decir, distinto de cero, se repite.
 {cout<<"Calcular sen(x)\n";
  //Sugerencia: probar con x=0.01 , n=100 y ver que pasa
  do{cout<<"Ingrese un angulo en grados sexagesimales entre 0 y 360, x= ";
     cin>>x;}
  while(x<0||x>360);
  n=valid('n');//ingresasmos entre comillas simples una letra
  x=x/180*pi;//pasamos de grados sexagesimales a radianes
  y=sen(x,n);//caclculamos el valor de sen(x)
  if(int(y*100000)==0)y=0;//si s es de orden menor a 1*10^(-5), s es cero.
  cout<<"sen(x)= "<<y<<"\n";//imprimimos el resultado
  cout<<"Desea repetir?\n";
  cout<<"Si lo desea, presione un numero distinto de cero: ";
  cin>>n;
  system("cls");//Borra la pantalla
 }
}
//Función validación
int valid(char a) //la variable a contiene la letra n recibida de main
{
 float x; int c;
 do
 {c=0;// si c==0 determinamos que el bucle no se repita
  cout<<"Ingrese "<<a<<"= ";cin>>x;
  if(x!=int(x)||x<=0||x>100)
  {cout<<"Error. Debe ser entero y positivo menor o igual a 100\n";
   c=1;// si c==1 determinamos que el bucle continúe
  }
 }
 while(c==1);//Mientras c sea verdadero, es decir, distinto de cero, se repite.
 return int(x);
}

//Funcion recursiva: factorial
double fac(int n)
{
  if(n==0)return 1;
  else return n*fac(n-1);
}
//Funcion recursiva: seno
float sen(float x, int n)
{ 
  if(n==0) return x;
  else return pow(-1,n)*pow(x,2*n+1)/fac(2*n+1) + sen(x,n-1);
}
