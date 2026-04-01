/* lea los numeros enteros a, b, c y d. Imprima luego dichos numeros y;
a) Si son positivos, un mensaje que indique, si estan o no ordenados en
secuencia ascendente, b) Un mensaje de erros en caso contrario. */

#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    float r1, r2, r3, r4;
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
     
     if (b<a) // intercambio de variables
     { int tmp=b;
     b=a;
     a=tmp;}
     
     if (c<a)
     { int tmp=c;
     c=a;
     a=tmp;}
     
     if (d<a)
     { int tmp=d;
     d=a;
     a=tmp;}
     
     if (c<b)
     { int tmp=c;
     c=b;
     b=tmp;}
     
     if (d<b)
     { int tmp=d;
     d=b;
     b=tmp;}
     
     if (d<c)
     { int tmp=d;
     d=c;
     c=tmp;}
cout << a << " " << b << " " << c << " " << d << " " << endl;

system("pause");



}
     
