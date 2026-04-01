
#include <iostream>

using namespace std;

int main()
{int a,b,c,d,n;
cout<<"introduzca un valor para n";
cin>>n;
while(n<1000 || n>=10000)
{cout<<"el numero debe ser cuatro cifras";
cin>>n;}
a=int(n/1000);
b=int((n-a*1000)/100);
c=int((n-(a*1000+b*100))/10);
d=int(n-(a*1000+b*100+c*10));
cout<<d<<c<<b<<a;

    system("PAUSE");
    return EXIT_SUCCESS;
}
