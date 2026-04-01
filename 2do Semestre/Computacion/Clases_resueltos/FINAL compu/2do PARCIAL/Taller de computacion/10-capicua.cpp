#include<iostream.h>
#include<math.h>
int entpos()
{float n;
    {cout<<"ingrese un numero entero y positivo n\n\n";
    cin>>n;}while(n<0||n!=int(n))
    cout<<"\t\tn="<<n<<endl;
    return int(n);}
main()
{
int b,a,n,dim=0,k=0;
n=entpos();
a=n;
while(a!=0)
{a/=10;
dim++;
}
a=n;
b=dim;
int vect[b];
for(int i=0;i<dim;i++)
{vect[i]=a%10;
a/=10;
cout<<"vect["<<i<<"]="<<vect[i]<<endl;
}
for(int j=0;j<int(dim/2);j++)
{if( vect[j]!=vect[dim-1-j])
k++;}
if(k==0)
cout<<"el numero es capicua\n";
else
cout<<"el numero no es capicua\n";
system("pause");
return 0;
}
