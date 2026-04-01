#include<iostream>
using namespace std;
main(){
       int i,k,n,primo,prod=1;
       cout<<"ingrese el valor de n";
       cin>>n;
       for(i=1;i<=n;i++){
           primo=1;
           for(k=2;k<i;k++){
           if(i%k==0){
                primo=0;
                k=i;
                }
            }
       if(primo) {
           prod*=i;
         }
      }
     cout<<"EL PRODUCTO DE LOS NUMEROS PRIMOS ES :"<<prod;
     system("pause");
     return 0;
}
