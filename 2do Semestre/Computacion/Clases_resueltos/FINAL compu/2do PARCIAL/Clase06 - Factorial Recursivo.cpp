//Calcular el factorial de un número utilizando recursividad
#include<iostream>
using namespace std;
//Declaramos las funciones que vamos a crear
double factorial(int);//usamos double para valores del factorial muy grandes
int valid();
//Funcion Principal
main()
{int n; n=valid();//validamos
 cout<<"\n"<<n<<"!="<<factorial(n)<<"\n\n";//imprimimos el resultado
 system("pause");
}
//Desarrollamos las funciones definidas por el usuario
int valid()
{
 float n;
 do{cout<<"\nDigite un numero entero no negativo, n= ";cin>>n;}  
 while(n!=int(n)||n<0); 
 return int(n);
}
double factorial(int n)
{
 if(n==1||n==0)//condicion de parada de la recursividad
   {return 1;}//no retorna una recursividad
 else 
   {return n*factorial(n-1);}//retorna una recursividad
}
