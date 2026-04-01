#include <iostream>
using namespace std;
main() { 
  int n, i, FP;     
  cout<<"Ingrese el numero a factorear:";
  cin>>n;
  i=2;
  while(n>1)
    {
       if(n%i==0)
       {
          n=n/i;
          FP = i;
          i=2;
          cout<<"*"<<FP;
        
       }
       else
          i++;
    }
    system("pause"); 
}     
