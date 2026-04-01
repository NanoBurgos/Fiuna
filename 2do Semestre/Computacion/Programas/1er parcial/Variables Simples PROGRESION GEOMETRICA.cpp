/*Escribir un programa que lea los numeros enteros a,b,c y d e imprima dichos numeros y;
a) Si son positivos un mensaje que indique, si son  o no terminos de uua progresion geometrica
b) Un mensaje error caso contrario*/
#include<iostream>
using namespace std; 
int main()
{
float a,b,c,d;
cout<<"\n\n\tDebe introducir 4 numeros enteros positivos y el programa";
cout<<"\n\n\tle dira si esta o no en progresion geometrica\n\n\t";
cout<<"\n\n\tIntroducir el primer numero\n\n\t";
cin>>a;
cout<<"\n\n\tIntroducir el segundo numero\n\n\t";
cin>>b;
cout<<"\n\n\tIntroducir el tercer numero\n\n\t";
cin>>c;
cout<<"\n\n\tIntroducir el cuarto numero\n\n\t";
cin>>d;
cout<<"\n\n\tLos numeros introducidos son:\n\n\t";
cout<<"\ta="<<a<<"\n\n\t";
cout<<"\tb="<<b<<"\n\n\t";
cout<<"\tc="<<c<<"\n\n\t";
cout<<"\td="<<d<<"\n\n\t";
if (a>0 and b>0 and c>0 and d>0)
{
cout<<"\n\n\tLos numeros introducidos son positivos\n\n\t";
if ((a*d)==(b*c))
{
cout<<"\n\n\tLos numeros introducidos estan en PROGRESION GEOMETRICA\n\n\t";
cout<<"\n\n\tLa progresion es"<<a<<"::"<<b<<"::"<<c<<"::"<<d;
cout<<"\n\n\tLa razon es:"<<b/a<<"\n\n\t";
}
else
cout<<"\n\n\tNo estan en PROGRESION GEOMETRICA\n\n\t";
}
else
cout<<"\n\n\tERROR LOS NUMEROS DEBEN SER POSITIVOS\n\n\t";
system("pause");
return 0;
}
