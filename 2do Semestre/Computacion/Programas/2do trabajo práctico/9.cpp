/*Permita sucesivas extracciones de un cajero automático hasta que la suma de las mismas sea igual o mayor a G 2.000.000, dando siempre el menor número posible de billetes. Suponer que la extracción máxima es de G 800.000 y que el cajero tiene 10 billetes de G
100.000, 25 billetes de G 50.000, 50 billetes de G 20.000, 100 billetes de G 10.000 y 100 billetes de G 5.000.*/
#include<iostream>
#include<stdio.h>
using namespace std;
int ext();
int i=0, aux=0, c=1000000, t, mc=1250000, w, dd=1000000, x, d=1000000, y, md=500000, z;
int main ()
{
     int v[225], j;
     v[i]=ext();
     aux=aux+v[i];
     
     if (i==0)
     aux=v[i];
     
     
     
                     cout<<"\nUsted ha retirado "<<v[i]<<" Gs. con:\n";
                     if (v[i]>=100000 and c>=100000)
                     {
                                      t=100000*int(v[i]/100000);
                                      if (c>=t)
                                      {
                                               v[i]=v[i]-t;
                                               c=c-t;
                                               cout<<t/100000<<"\tbilletes de Gs. 100000\n";
                                               }
                                      else
                                      {
                                          v[i]=v[i]-c;
                                          cout<<c/100000<<"\tbilletes de Gs. 100000\n";
                                          c=0;
                                          }
                                      }
                     if (v[i]>=50000 and mc>=50000)
                     {
                                      w=50000*int(v[i]/50000);
                                      if (mc>=w)
                                      {
                                               v[i]=v[i]-w;
                                               mc=mc-w;
                                               cout<<w/50000<<"\tbilletes de Gs. 50000\n";
                                               }
                                      else
                                      {
                                          v[i]=v[i]-mc;
                                          cout<<mc/50000<<"\tbilletes de Gs. 50000\n";
                                          mc=0;
                                          }
                                      }
                     if (v[i]>=20000 and dd>=20000)
                     {
                                      x=20000*int(v[i]/20000);
                                      if (dd>=x)
                                      {
                                               v[i]=v[i]-x;
                                               dd=dd-x;
                                               cout<<x/20000<<"\tbilletes de Gs. 20000\n";
                                               }
                                      else
                                      {
                                          v[i]=v[i]-dd;
                                          cout<<dd/20000<<"\tbilletes de Gs. 20000\n";
                                          dd=0;
                                          }
                                      }
                     if (v[i]>=10000 and d>=10000)
                     {
                                      y=10000*int(v[i]/10000);
                                      if (d>=y)
                                      {
                                               v[i]=v[i]-y;
                                               d=d-y;
                                               cout<<y/10000<<"\tbilletes de Gs. 10000\n";
                                               }
                                      else
                                      {
                                          v[i]=v[i]-d;
                                          cout<<d/10000<<"\tbilletes de Gs. 10000\n";
                                          d=0;
                                          }
                                      }
                     if (v[i]>=5000 and md>=5000)
                     {
                                      z=5000*int(v[i]/5000);
                                      if (md>=z)
                                      {
                                               v[i]=v[i]-z;
                                               md=md-z;
                                               cout<<z/5000<<"\tbilletes de Gs. 5000\n";
                                               }
                                      else
                                      {
                                          v[i]=v[i]-md;
                                          cout<<md/5000<<"\tbilletes de Gs. 5000\n";
                                          md=0;
                                          }
                                      }
                     i++;
                     while (getchar() !='c');
                     
                     
     if (aux<2000000)
     return main ();
     else if (aux>=2000000)
     return 0;
}
int ext()
{
    float a;
    do
    {cout<<"\nUsted desea extraer Gs. ";
    cin>>a;}
    while (a!=int(a) or int(a)%5000!=0 or a<5000 or a>800000);
    return int(a);
}
