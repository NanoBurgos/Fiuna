#include<iostream>
#include<math.h>
using namespace std;
float serie1 (float);
main(){
     float suma=0.0, s=0.0;
     float i;
     for (i=1; i<=10;i++){ 
        cout<<serie1(i)<<"\n"; 
        suma = suma + serie1(i);
     }      
 cout<<"la suma es: "<<suma <<"\n" ;   
 system("pause");             
}   
float serie1(float i) {
      float s;
      s= pow(-1, i) * (1+3*i) / (1+7*i); 
      return s;
}            
