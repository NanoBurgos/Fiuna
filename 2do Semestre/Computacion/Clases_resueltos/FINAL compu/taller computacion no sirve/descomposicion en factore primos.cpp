/*Leer un número entero y positivo (validarlo), imprimir su descomposición en factores primos.*/

#include<iostream>
#include<stdlib.h>
using namespace std;
main()
{   int aux, d, n, k;
    float nro;
    cout<< "Digite un numero: ";  cin>> nro;
    while ((nro<0) || nro!=int(nro))
          {cout<<"El numero debe ser entero y positivo, digite nuevamente: "; cin>>nro;}
    cout<< "\nDivisores primos de " << nro << ": ";
    aux=int(nro); 
    k=0;
    for (d=2; d<=nro; d++)
    {   if (aux%d==0)
        {  n=1; aux/=d;
           while (aux%d==0)
           { n++; aux/=d; }
           if (n>0)
           {  if (k==0)
                 cout<< d << "^" << n;
                 else
                 cout<< "*" << d << "^" << n; }
           else
           {   if (k==0)
                  cout << d;
                  else
                      cout<< "^" << d; } 
           k=1; } }
           cout<< "\n\n";
    system ("pause"); }
