//Luis A. Morinigo L. Ejercicio 6-Computacion 2016
#include<iostream>
using namespace std;
main()
{
      float a, b, c, d;
      int mcm, mayor, menor, p1, q1, r1, p2, q2, p, q, r, r2;
      do{
      cout<<"ingrese a= ";cin>>a;}while(a!=int(a) || a<0);
      do{
      cout<<"ingrese b= ";cin>>b;}while(b!=int(b) || b<0);
      do{
      cout<<"ingrese c= ";cin>>c;}while(c!=int(c) || c<0);
      if(a>b)
          {
          p1=a;
          q1=b;
          }
          else
          {
          p1=b;
          q1=a;
          r1=p1%q1;
          }
          while(r1!=0)
          {
          p1=q1;
          q1=r1;
          r1=p1%q1;
          }
          if(q1>c)
          {
          p2=q1;
          q2=c;
          }
          else
          {
          p2=c;
          q2=q1;
          r2=p2%q2;
          }
          while(r2!=0)
          {
          p2=q2;
          q2=r2;
          r2=p2%q2;
          }
          mcm=a*b*c/q2;
		
		cout<<"El MCD es: "<<q2<<endl;
          cout<<"El MCM es: "<<mcm<<endl;
          system("pause");
          }

