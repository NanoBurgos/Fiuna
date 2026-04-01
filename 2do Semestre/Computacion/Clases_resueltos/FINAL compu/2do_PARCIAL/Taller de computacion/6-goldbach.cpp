#include<iostream.h>
int verif(int n)//funcion que verififca que el numero sea primo
{int j=0;
    for(int i=2;i<n;i++)
    {if (n%i==0)
    j++;}
if (j==0) return 1;
else return 0;}
int mayor2()//pide y valida un numero par mayor que dos
{float n;
do{cout<<"ingrese un numero positivo par mayor a 2 \n";
cin>>n;}while(n<2||n!=int(n)||(n/2)!=int(n/2));
return n;}
main()
{int n,a;
n=mayor2();
a=n;
do{a--;}while(verif(a)==0||verif(n-a)==0);
cout<<"\t\t"<<n<<"="<<n-a<<"+"<<a<<"\n";
system("pause");
return 0;
}
