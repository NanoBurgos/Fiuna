#include<iostream>
#include<math.h>
using namespace std;
float serie (float);
main(){
  float s= 0.0,  suma=0.0;  
  float i;   
  for (i=1;i<=10; i++){
  
  cout<<serie(i)<<"\n";
  suma = suma +serie(i);
  }       
  cout<<"la suma es: "<<suma <<"\n" ;   
  system("pause");             
}
float serie (float i)  {
      float s;
      s = pow(-1, i)* ((pow(i,2))-3) / (1+2*i);
      return s;
}      
