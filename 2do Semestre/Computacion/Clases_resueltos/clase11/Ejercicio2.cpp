#include<iostream>
using namespace std;
int sumavalor(int, int);
int sumareferencia(int *, int *);
main(){
      int a;
      cout<<"Ingrese el valor de a:"; cin>>a;
      int b;
      cout<<"Ingrese el valor de a:"; cin>>b; 
      int y1=sumavalor(a,b);
      int y2=sumareferencia(&a, &b);
      cout<<"La sumavalor es:"<<y1<<"\n";
      cout<<"La sumareferencia es:"<<y2<<"\n";
      system("pause");
}
int sumavalor(int a, int b){
    return a+b;
} 
int sumareferencia(int *a, int *b){
    return *a+*b;
} 
