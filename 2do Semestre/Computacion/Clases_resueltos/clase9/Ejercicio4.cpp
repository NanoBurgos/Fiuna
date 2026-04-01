#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;
main(){
     srand(time(NULL));  
     int i, temp[28] ;
     int max, min, suma =0;
     for(i=0;i<28;i++){     //ingreso de datos al vector
          temp[i]=1+rand()%42;       
     }
     max=temp[0];
     min=temp[0];
     for(i=0;i<28;i++){
        cout<<"temp["<<i+1<<"]:"<< temp[i]<<"\n";              
     }                   
     for(i=0;i<28;i++){ 
        if (max<temp[i]){
            max=temp[i];             
        } 
        if (min>temp[i]){
            min=temp[i];             
        }
        if (i>=20 && i<=27){
          suma = suma + temp[i]; 
        }                                         
     }
     cout<<"El mayor es: "<<max<<endl;
     cout<<"El menor es: "<<min<<endl;  
     cout<<"El suma entre 21 y 28  es: "<<suma<<endl; 
     cout<<"El promedio en ente 21 y 28 es:"<<1.0*suma/8;   
     system("pause");
}
