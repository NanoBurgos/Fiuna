#include<iostream.h>
int entpos()
{float n;
    {cout<<"ingrese un numero entero y positivo n\n\n";
    cin>>n;}while(n<0||n!=int(n))
    cout<<"\t\tn="<<n<<endl;
    return int(n);}
int sumdig(int n)
{if (n==0)
return 0;
else
return((n%10)+sumdig(n/10));}
int main()
{ int n;
n=entpos();
cout<<"el numero  es "<<n<<endl;
cout<<"la suma de los digitos es "<<sumdig(n)<<endl;
system("pause");
return 0;
}
