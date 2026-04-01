#include<iostream>
#include<math.h>
using namespace std;
float serie (float);
main(){  
        float suma=0.0;
        float i;
        for (i=1; i<=10;i++){ 
          cout<<serie(i)<<"\n";
          suma = suma + serie(i);
         } 
         cout<<"La suma es: "<<suma;
         system("pause");             
}
float serie(float i) {
      float s;
      float x= 2.5;
      s= 7*sin(3*i*x)*cos(i*x);
      return s;
 }     
