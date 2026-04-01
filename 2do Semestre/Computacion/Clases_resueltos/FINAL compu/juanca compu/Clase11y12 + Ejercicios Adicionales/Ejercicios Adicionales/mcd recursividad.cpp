/*TAA2011Parcial2
  Hallar el mcd de dos o mas numeros mediante una función recursiva*/
#include<iostream>
using namespace std;
int entpos(char msj[]);
int mcd(int a,int b);
main()
{int i,n,a,b,c;
 n=entpos("Cargue un numero entero y positivo");
 int v[n];
 for(i=0;i<n;i++)
 v[i]=entpos("Ingrese un numero entero y positivo");
 a=v[0];
 for(i=1;i<n;i++)
  b=v[i];
 {if(a<b){c=b;b=a;a=c;}
  a=mcd(a,b);}
 cout<<"\n mcd("<<v[0];
 for(i=1;i<n;i++)
 cout<<", "<<v[i];
 cout<<")= "<<a<<"\n";
 system("pause");
}
int mcd(int a,int b)
{if(a%b)return mcd(b,a%b);
 else return b;
}
int entpos(char msj[])
{float a;
 do{cout<<msj<<"\n";
    cin>>a;}
 while(a<=0||a!=int(a));
 return (int)a;
}
