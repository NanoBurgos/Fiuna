#include<iostream>
using namespace std;
int mcd(int, int);
main(){
       int n, m, x;
       cout<<"Ingrese el primer numero: ";
       cin>>m;
       cout<<"Ingrese el segundo numero: ";
       cin>>n;
       x= mcd(m, n);
       cout<<"El maximo comun divisor es: "<<x;
       system("pause");
}
int mcd(int m , int n){
    if ((n<=m) && (m%n==0)){
        return n;
    }    
    else if (n>m){
        return mcd(n,m);
    }
    else{
      return  mcd(n, m%n);
    }                    
 }     
