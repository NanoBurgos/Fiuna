#include<iostream.h>
int main()
{
    float a; int b,i,c;
    do{cout<<"\n\n\t Introdusca un numero entero y positivo\n\n\t"; cin>>a;}
    while(a!=int(a) || a<=0);b=int(a);
    for(i=2;i<b;i++){
                     if(b%i==0){cout<<"\n\n\tEL numero no es primo\n\n\t";c=1; break;}
                     else c=0;}
    if(c==0)cout<<"\n\n\tEl numero es primo\n\n\t";                 
    system("pause");
}                     
