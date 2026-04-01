//Usando recursividad realizar la suma de i=1 a n :::> s=1/i
#include <iostream>
using namespace std;
int entpos();
long double sumatoria(float i);
 
main()
{
      int n=entpos();
      
cout<<"La sumatoria de [1, "<<n<<"] es= "<<sumatoria(n)<<"\n";

system ("pause");
return 0;
}

long double sumatoria(float i)
{     
      float s=0;
      if (i==1)
      return 1;
      else
      return (s+ (1/i) + sumatoria(i-1));
}

int entpos()
{
    float q;
    do{cout<<"digite un nro positivo n: ";cin>>q;}
    while(q!=int(q) || q<=0);
    return int (q);
}
