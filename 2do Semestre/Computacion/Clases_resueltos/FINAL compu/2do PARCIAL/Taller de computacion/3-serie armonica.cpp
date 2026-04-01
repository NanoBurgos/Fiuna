#include<iostream.h>
int entpos()
{float n;
    {cout<<"ingrese un numero entero y positivo n\n\n";
    cin>>n;}while(n<0||n!=int(n))
    cout<<"\t\tn="<<n<<endl;
    return int(n);}
float seriear( int n)
{if (n==1)
return 1;
else if( n>0)
return 1/float(n)+seriear(n-1);} 

 main()
{int n; float s;
n=entpos();
s=seriear(n);
cout<<"la suma de los "<<n<<" primeros terminos de la serie armonica es "<<s<<"\n";
system("pause");
return 0;
}
      
