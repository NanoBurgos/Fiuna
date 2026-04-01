#include<iostream>
using namespace std;
int validacion();
int main()
{int n,i,j,k,aux;
cout<<"\n\t Digite un nro entero y positivo de 6 digitos significativos: ";
n=validacion();
cout<<"\n\t El nro es: "<<n;
int v[6];
int a=0;
                   for(i=100000;i>=1;i=(i/10))
                   {v[a]=(n/int(i));
                   n=n%i;
                   a++;}
j=v[0]*100+v[1]*10+v[2];
k=v[3]*100+v[4]*10+v[5];
cout<<"\n\n\t El nro constituido por los 3 ultimos digitos es: "<<k;
cout<<"\n\n\t El nro constituido por los 3 primeros digitos es: "<<j;
if(k>j)
       {aux=j;
       j=k;
       k=aux;
       }
if(j%k!=0)
          {cout<<"\n\n\t Los nros son primos entre si";}
else
          {cout<<"\n\n\t Los nros son divisibles entre si";}
cout<<"\n\n";
system("pause");
return 0;
}

int validacion()
{float x;
cin>>x;
while(x!=int(x) || x<=0 || (int(x)/100000)>9 || (int(x)/100000)<1)
                {cout<<"\n\t El nro no cumple las condiciones pedidas, digite nuevamente: ";
                cin>>x;
                }
return int(x);
}
