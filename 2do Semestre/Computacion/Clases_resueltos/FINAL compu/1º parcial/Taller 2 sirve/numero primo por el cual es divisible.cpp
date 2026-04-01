/*
Lea un número n, lo acepte si es entero y positivo. Imprima dicho número, cada
número primo por el cual es divisible y el número de veces que lo es.
*/
#include<iostream>
using namespace std;
int validacion();
int funcion(float,float);
int n,r=0,i,j,rp=0,cp=0;
int main()
{
int funcion(float n,float i);
{cout<<"n=";
float n=validacion(),primo;
cout<<"el numero ingresado es "<<n<<" y si no es primo,\na continuacion se mostraran sus divisores primos\n\n";
for(i=2;i<n;i++){
r=int(n)%i;
if (r==0){
for(j=2;j<i;j++)
{rp=i%j;
if(rp==0){cp++;}
}
if(cp<2){cout<<"un divisor primo es "<<i<<"\n";
primo=i;cout<<"y lo divide "<<funcion(n,primo)<<" veces\n";}
cp=1;}
}
system("pause");}

}
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
int funcion(float n,float i)
{
int r, c=0;
if((n/i)==1){ return c=c+1;}
if((n/i)>1)
{r=int(n)%int(i); 
if (r==0) {c=c+1;
return c+funcion((n/i),i);}
else{return c;}
}
}
