#include<iostream.h>
#include<math.h>
int main()
{
    float x,s,n,i,p;
    cout<<"Introduzca el numero al quiere elevar e: ";
    cin>>x;
    cout<<"\nIntroduzca la cota n:";
    cin>>n;
    s=1;
    p=1;
    i=1;
    do
    {
        p=p*x/i;
        i++;
        s=s+p;
    }   
    while (i<=n);
    cout<<"\nEl valor de e^"<<x<<" es "<<s<<".";
    system ("pause");
}
