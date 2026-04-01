/*Escribir un programa que lea los enteros a,b,c y d e imprima luego dichos numeros y;
a) Si son positivos un mensaje que indique si son o no termino de una progresion aritmetica
b) Un mensaje error caso contrario.*/
#include<iostream>
using namespace std; 
int main()
{
    int a,b,c,d;
    cout<<"\n\n\tIntrodusca 4 numeros enteros positivos y el programa";
    cout<<"\n\n\tle dira si estan o no en progresion aritmetica\n\n\t";
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
    if(a>0 and b>0 and c>0 and d>0
    
    
    )
    {
           cout<<"\n\n\tLos numeros son positivos\n\n\t";
           if((b-a==d-c)and (d-c==b-a))
           {
    cout<<"\n\n\tEstan en progresion aritmetica\n\n\t";
    cout<<"\n\n\tLa progresion es:"<<a<<","<<b<<","<<c<<","<<d;
    cout<<"\n\n\tLa razon es"<<b-a<<"\n\n\t";
                    }
                    else
                    cout<<"\n\n\tNo estan en progresion aritmetica\n\n\t";
                    }
                    else
           cout<<"\n\n\tError los numeros deben ser enteros y positivos\n\n\t";
    system("pause");
    return 0;
}
    
