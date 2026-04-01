/* lea los numeros enteros a, b, c y d. Imprima luego dichos numeros y;
a) Si son positivos, un mensaje que indique, si son o no terminos de una progresion
geometrica, b) Un mensaje de erros en caso contrario. */

#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    float q1, q2;
    float a, b, c, d;
    cout<<"\n\t\t Ingrese cuatro numeros enteros";
    cout<<"\n\n\ta=";cin>>a;
    cout<<"\n\n\tb=";cin>>b;
    cout<<"\n\n\tc=";cin>>c;
    cout<<"\n\n\td=";cin>>d;
    if (a>0||a==0)
    {cout<<"\n\t"<<a<<" \tes positivo\n ";}
    else
    {cout<<"\n\ta="<<a<<"\tes negativo, vuelva a cargar\n";
     return main();}  
    
    if (b>0||b==0)
    {cout<<"\n\t"<<b<<" \tes positivo\n ";}
    else
    {cout<<"\n\t"<<b<<"\tes negativo, vuelva a cargar\n";
     return main();}  
    
    if (c>0||c==0)
    {cout<<"\n\t"<<c<<" \tes positivo\n ";}
    else
    {cout<<"\n\t"<<c<<"\tes negativo, vuelva a cargar\n";
     return main();}  
    
    if (d>0||d==0)
    {cout<<"\n\t"<<d<<" \tes positivo\n ";}
    else
    {cout<<"\n\t"<<d<<"\tes negativo, vuelva a cargar\n";
     return main();}  
     
     q1=b/a;q2=c/b;
     if(q1==q2)
     cout<<"\n\tLos numeros estan en prograsion geometrica\n\n";
     else
     {cout<<"\n\tLos numeros no estan en progresion,vuelva a cargar\n\n";
     return main();}
     
     system("pause");
     }
