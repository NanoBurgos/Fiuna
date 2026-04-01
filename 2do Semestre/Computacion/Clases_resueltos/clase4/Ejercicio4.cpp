#include <iostream>
using namespace std;
main() {
        int i,factorial=1;
        float n;
        cout<<"Ingrese el numero natural: ";
        cin>>n;
       
        while(n!= (int)n){
            cout<<"Ingrese el numero natural: ";
            cin>>n;          
        } 
        for(i=1; i<=n; i++) {   
            factorial*=i;
            cout<<"i="<<i<<"-factorial="<<factorial<<"\n";
            }      
        cout<<"EL FACORIAL ES:"<<factorial;            
        system("pause");  
        return 0;    
}       
