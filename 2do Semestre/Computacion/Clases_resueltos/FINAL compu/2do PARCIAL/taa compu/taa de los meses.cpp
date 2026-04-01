
#include <iostream>

using namespace std;

int main()
{int x;
cout<<"introduzca un mes del año";
cin>>x;
if(int(x)%2==0 &&  int(x)!=2 )
{cout<<"el mes tiene 31 dias";}
 if(int(x)%2!=0) 
 {cout<<"el mes tiene 30 dias";}
if(int(x)%2==0 && int(x)==2)
{cout<<"el mes tiene 28 dias";}
   
    system("PAUSE");
    return EXIT_SUCCESS;
}
