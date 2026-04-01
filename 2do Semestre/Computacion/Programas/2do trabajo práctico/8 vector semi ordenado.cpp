#include<iostream>
using namespace std;
int main()
{
    float s,t;
    do{
          cout<<"Ingrese un numero entero y positivo: ";
          cin>>s;
    } while(s!=int(s) || s<0);
    int n,v[n],i,j,aux;
    n=int(s);
    for(i=0;i<n;i++)
    {
                    cout<<"\nIngrese la componente ["<<i+1<<"]: ";
                    cin>>v[i];
    }
    for(i=n/2;i<int(n);i++)//algoritmo insercion
    {
                    j=i;
                    aux=v[i];
                    while(j> int(n/2) && aux<v[j-1])
                    {
                              v[j]=v[j-1];
                              j--;
                    }
                    v[j]=aux;
    }
    cout<<"\nEl vector ordenado es: ";
    for(i=0;i<n;i++)
    {
                    cout<<v[i]<<" ";
    }
    system ("pause");
    return 0;
}
