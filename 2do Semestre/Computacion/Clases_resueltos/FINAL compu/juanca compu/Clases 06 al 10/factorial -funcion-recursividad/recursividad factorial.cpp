#include<iostream>
using namespace std;
int valid();
double factorial(int);
main()
{
 cout<<"Ingrese un numero entero no negativo: ";
 int n;
 n=valid();
 cout<<"El factorial de "<<n<<" es: ";
 double facn;
 facn=factorial(n);
 cout<<facn<<endl;
 system("pause");
}
int valid()
{
 float x;
 do{
    cin>>x;
    if(x!=int(x)||x<0)
    cout<<"Error"<<"\n"<<"Ingrese un numero entero no negativo: ";
   }
 while(x!=int(x)||x<0);
 return int(x); 
}
//Una funcion recursiva es aquella que se llama a sí misma
double factorial(int i)
{
 if(i>0)
 return i*factorial(i-1); //La fórmula general es recursiva.
 else
 return 1;//La solución particular no es recursiva. Aquí termina la recursividad.
}
