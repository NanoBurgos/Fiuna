#include<iostream>
#include<math.h>
using namespace std;
main(){
     int a, b, c ;
     int max, min;  
     cout<<"Ingrese el valor de a:";
     cin>>a;
     cout<<"Ingrese el valor de b:";
     cin>>b;
     cout<<"Ingrese el valor de c:"; 
     cin>>c;
     cout<<a<<"\t"<<b<<"\t"<<c<<"\n";
     max = a;
     min = a;
     if(max<b ){
       max = b;     
     }
     if (max<c) {
       max = c;         
     }  
     if (min>b){
        min = b;        
     }
     if (min>c) {
        min = c;        
     }
     cout<<"---------------------\n";                               
     cout<<"El mayor es:" <<max<<"\n"; 
     cout<<"El menor es:" <<min<<"\n";   
     system("pause");
     return 0;
}         
