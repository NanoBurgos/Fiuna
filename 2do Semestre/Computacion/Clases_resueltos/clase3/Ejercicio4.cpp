#include<iostream> 
#include<stdlib.h> 
using namespace std; 
    float factorial=1,n,i; 
main() { 
    cout<<"digite un numero"; 
    cin>>n; 
    for (i=1;i<=n;i++) 
    {
        factorial*=i; 
    }
    i=1; 
    float factorial1 = 1;
    
    while(n>=i){
        factorial1*=i;
        i++;       
    }
    
    i=1;
    float factorial2 = 1;
    
    do 
    {
        factorial2*=i;
        i++;       
    } while(n>=i);          
cout<<n<<"="<<factorial<<"\n"; 
cout<<n<<"="<<factorial1<<"\n";
cout<<n<<"="<<factorial2<<"\n"; 
system("pause"); 
} 
