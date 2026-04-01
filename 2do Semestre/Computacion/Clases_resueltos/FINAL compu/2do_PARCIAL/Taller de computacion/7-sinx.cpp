#include<iostream.h>
#include<math.h>
float factorial ( int n)
{if (n==0)
return 1;
else if( n>0)
return n*factorial(n-1);}
float sinx(float x)
{int n=0;
float sum=0;
    while(((pow(x,((2*n)+1)))/factorial((2*n)+1))>pow(10,-5))
    {
         sum=sum+((pow(-1,n)*pow(x,((2*n)+1)))/factorial((2*n)+1));
         n++;}
   return   sum;} 
main()
{float x;
  cout<<"introduzca un numero x\n";
  cin>>x;
  cout<<"sinx="<<sinx(x)<<"\n";
  system("pause");
  return 0;
}
