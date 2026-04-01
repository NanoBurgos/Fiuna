//Luis A. Morinigo L. Ejercicio 9-Computación 2016
#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
int esprimo(int);
int main()
{
    float n,r,ppri=0,pm300=0,pm5=0;
    int cm300=0,cpri=0,cm5=0,a,i;  
    do
    {
          cout<<"\nn= ";cin>>n;
      }while(n!=int(n) || n<2);
      srand(time(NULL));
      for(i=1;i<=n;i++)
      {
       a=rand()%999+1;
       cout<<"a["<<i<<"]= "<<a<<endl;
       if(a>300)
       {
           cm300++;
           pm300+=a;
           }
           if(esprimo(a))
           {
            cpri++;
            ppri+=a;
            }
            if(a%5==0)
            {
             cm5++;
             pm5+=a;
             }
             }
             cout<<"Mayores a 300: "<<cm300<<" Promedio: "<<pm300/cm300<<endl;
             cout<<"Primos: "<<cpri<<" Promedio: "<<ppri/cpri<<endl;
             cout<<"Multiplos de 5: "<<cm5<<" Promedio: "<<pm5/cm5<<endl;
             system("pause");
             }
             
int esprimo(int x)
{
    int i;
    for(i=2;i<=x/2+1;i++)
    if(x%i==0)
    return 0;
    return 1;
}
