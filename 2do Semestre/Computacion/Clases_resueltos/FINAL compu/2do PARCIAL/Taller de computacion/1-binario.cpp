#include<iostream.h>
int entpos()
{float n;
    {cout<<"ingrese un numero entero y positivo n\n\n";
    cin>>n;}while(n<0||n!=int(n))
    cout<<"\t\tn="<<n<<endl;
    return int(n);}
void binario(int n)
{if (n!=0)
{binario(n/2);
cout<<(n%2);}}
int main()
{ int n;
n=entpos();
cout<<"el numero  decimal es "<<n<<endl;
cout<<"el numero  binario es ";
binario(n);
cout<<"\n";
system("pause");
return 0;
}
