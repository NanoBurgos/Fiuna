#include <iostream>
using namespace std;
main(){
       
       int n, i, j, l;
       cin>>n;
       for (i=1; i<=n; i++){
           for (j=n-i; j>0; j--){
               cout<<"-";
             }
           for (l=1;l<2*i;l++){
             cout<<"*";  
           }         
           cout<<"\n";
       }
     system("pause");  
}      
