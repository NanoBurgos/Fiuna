/*Calcular el valor de sin(x)= x - x^3/3! + x^5/5!...
  para una cantidad N de terminos.*/
#include<iostream>
#include<math.h>
#define pi 3.1416
using namespace std;
main()
{
 float x,N,sin,factorial; int i,j;
 cout<<"Ingrese un angulo en grados: ";
 cin>>x;
 //se convierte x a radianes
 x=x/180*pi;
 //validacion
 do
  {
   cout<<"Ingrese la cantidad de terminos, N= ";
   cin>>N;
   if(N!=int(N)||N<=0)
   cout<<"Error. Debe ser entero y positivo"<<endl;
  }
 while(N!=int(N)||N<=0);
 //calculo de sin(x)
 sin=0;
 for(i=1;i<=N;i++)
 { 
  //se calcula el factorial de 2*i-1
  factorial=1;
  for(j=1;j<=2*i-1;j++)
  factorial = factorial*j;
  //se calcula la sumatoria de los terminos de la serie
  sin = sin + pow(-1,i+1)*pow(x,2*i-1)/factorial;
 }
 //se regresa x a grados
 x=x*180/pi;
 //se imprime el resultado
 cout<<"sin("<<x<<")= "<<sin<<endl;
 system("pause");
}
