#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;
int main()
{int a, b;
 float A,B,C,H,h;
 cout<<"\n\nIntroduzca los valores de A B y C\n";cin>>A>>B>>C;
 cout<<"\n\n";
 if(C>=0)
 {a=int(A);
  b=int(B);
 h=a*a*a+b*b*b;
 H=sqrt(h);
 cout<<"\n\n1er caso, H= "<<H;}
 if(C<0 and A<B)
 {h=(3*B+7*A)/C;
 H=-h;
 cout<<"\n\n2do caso, H= "<<H;}
 if(A>=B)
 {cout<<"\n\n\tlos numeros ingresados son: "<<A<<B<<C;};
system("pause");}
