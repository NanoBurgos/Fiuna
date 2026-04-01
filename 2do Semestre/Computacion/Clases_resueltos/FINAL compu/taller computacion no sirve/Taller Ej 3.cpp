/*Leer los números a, b, c y d ; luego, exhibir dichos números en la pantalla y;

i) si son enteros y positivos, un mensaje, para cada uno de ellos, si es par o impar.

ii) En caso contrario, “el número no es positivo” y/o “el número no es entero” y/o
“el número es entero” según sea el caso.*/

#include<iostream>
#include<stdlib.h>
using namespace std;
main()
{float a, b, c, d, f;
cout<<"Introduzca el primer numero: "; cin>>a;
cout<<"\nIntroduzca el segundo numero: "; cin>>b;
cout<<"\nIntroduzca el tercer numero: "; cin>>c;
cout<<"\nIntroduzca el cuarto numero: "; cin>>d;
tiponum(a);
tiponum(b);
tiponum(c);
tiponum(d);
system("pause");}

float tiponum(float a)
{int e;
if (a==int(a) && a>=0)
   {{e=int(a)%2;}
   if (e==0)
      {cout<<"\nNUMERO: "<<a<<"; PAR\n\n";}
      else
      {cout<<"\nNUMERO: "<<a<<"; IMPAR\n\n";}}
if (a!=int(a) && a<0)
   {cout<<"\nNUMERO: "<<a<<"; El numero no es entero ni positivo7\n\n";}
if (a!=int(a) && a>0)
   {cout<<"\nNUMERO: "<<a<<"; El numero no es entero\n\n";}
if (a==int(a) && a<0)
   {cout<<"\nNUMERO: "<<a<<"; El numero no es positivo\n\n";}
system ("pause");
return a;}
