/*Escribir un programa que lea los numeros a,b,c,d e imprima dichos numeros y;
a)Si son positivos, un mensaje que indique para cada uno de ellos si es par o impar;
b) Un mensaje de error caso contrario*/
#include<iostream>
using namespace std; 
int main()
{
    int a,b,c,d;
    cout<<"\n\n\tIntrodusca 4 numeros positivos (a,b,c,d)\n\n\t";
    cout<<"\n\n\tIntroducir el primer numero\n\n\t";
    cin>>a;
    cout<<"\n\n\tIntroducir el segundo numero\n\n\t";
    cin>>b;
    cout<<"\n\n\tIntroducir el tercer numero\n\n\t";
    cin>>c;
    cout<<"\n\n\tIntroducir el cuarto numero\n\n\t";
    cin>>d;
    cout<<"\n\n\tLos numeros introducidos son:\n\n\t";
    cout<<"\n\t"<<a<<"\n\n\t";
    cout<<"\n\t"<<b<<"\n\n\t";
    cout<<"\n\t"<<c<<"\n\n\t";
    cout<<"\n\t"<<d<<"\n\n\t";
    if(a>0 and b>0 and c>0 and d>0)
    {
           cout<<"\n\n\tLos numeros introducidos son positivos\n\n\t";
           if(a%2==0)
           cout<< "\n\n\t"<<a<<"\tEs PAR\n\n\t";
           else
           cout<< "\n\n\t"<<a<<"\tEs IMPAR\n\n\t";
             if(b%2==0)
           cout<< "\n\n\t"<<b<<"\tEs PAR\n\n\t";
           else
           cout<< "\n\n\t"<<b<<"\tEs IMPAR\n\n\t";
             if(c%2==0)
           cout<< "\n\n\t"<<c<<"\tEs PAR\n\n\t";
           else
           cout<< "\n\n\t"<<c<<"\tEs IMPAR\n\n\t";
             if(d%2==0)
           cout<< "\n\n\t"<<d<<"\tEs PAR\n\n\t";
           else
           cout<< "\n\n\t"<<d<<"\tEs IMPAR\n\n\t";
}
else 
cout<<"\n\n\tERROR LOS NUMEROS DEBEM SER POSITIVOS\n\n\t";
system("pause");
return 0;
}      
