#include<iostream.h>
#include<math.h>
float factorial ( int n)
{if (n==0)
return 1;
else if( n>0)
return n*factorial(n-1);}
float ex(int x)
{int n=0;
float sum=0;
    while(((pow(x,n)/factorial(n))>pow(10,-5)))
    {
         sum=sum+ pow(x,n)/factorial(n);
         n++;}
   return   sum;}  
   main()
   {
  float x;
  cout<<"introduzca un numero x\n";
  cin>>x;
  cout<<"e^x ="<<ex(x)<<"\n";
  system("pause");
  return 0;
}                                
