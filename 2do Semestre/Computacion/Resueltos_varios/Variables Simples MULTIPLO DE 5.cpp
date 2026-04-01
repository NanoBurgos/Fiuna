/*Escribir un programa que lea los numeros enteros a,b,c y d e imprima luego dichos numeros y;
a) si son positivos, un mensaje que indique, para cada uno de ellos, si es o no multiplo de 5
b)Un mensaje error caso contrario*/
#include<iostream>
using namespace std; 
int main()
{
    int a,b,c,d;
    cout<<"\n\n\tIntroduzca 4 numeros positivos (a,b,c,d) \n\n\t";
    cout<<"\n\n\tIntroducir el primer numero:";
    cin>>a;
    cout<<"\n\n\tIntroducir el segundo numero:";
    cin>>b;
    cout<<"\n\n\tIntroducir el tercer numero:";
    cin>>c;
    cout<<"\n\n\tIntroducir el cuarto numero:";
    cin>>d;// Hasta esta parte declaracion normal como los ejercicios anteriores
    cout<<"\n\n\tLos numeros que introdujo son:\n\n\t";//Desde aqui se comenzo a hacer que los numeros introducidos aparescan en pantalla
    cout<<"\ta="<<a<<"\n\n\t";//Me tope con el problema <<a<< para que aparesca el numero en pantalla
    cout<<"\tb="<<b<<"\n\n\t";
cout<<"\tc="<<c<<"\n\n\t";
cout<<"\td="<<d<<"\n\n\t";
if (a>0 and b>0 and c>0 and d>0)//Aqui declaro que SI los numeros son positivos continuo 
{
        cout<<"\n\n\tLos numeros son todos positivo\n\n\t";
        if (a%5==0)//Desde aqui doy la condicion de que sea SI es multiplo caso contrario SI NO lo es 
        cout<<"\n\n\tEl primer numero"<<a<<"es multiplo de 5\n\n\t";
        else
        cout<<"\n\n\tEl primer numero"<<a<<" NO es multiplo de 5\n\n\t";
        if(b%5==0)
        cout<<"\n\n\tEl segundo numero"<<b<<"es multiplo de 5\n\n\t";
        else 
        cout<<"\n\n\tEl segundo numero"<<b<<"NO es multiplo de 5\n\n\t";
        if(c%5==0)
        cout<<"\n\n\tEl tercer numero"<<c<<"es multiplo de 5\n\n\t";
        else
        cout<<"\n\n\tEl tercer numero"<<c<<"NO es multiplo de 5\n\n\t";
        if(d%5==0)
        cout<<"\n\n\tEl cuarto numero"<<d<<"es multiplo de 5\n\n\t";
        else 
        cout<<"\n\n\tEl cuarto numero"<<d<<" NO es multiplo de 5 \n\n\t";
        }//cuidado dbe cerrarse la llave hasta aqui cumple con la condicion de que sea positivo los numeros dados 
        else//El else me dice para los numeros que no son positivos 
        cout<<"\n\n\tERROR LOS NUMEROS DEBEN SER POSITIVOS\n\n\t";
    system("pause");
    return 0;
}
                 
