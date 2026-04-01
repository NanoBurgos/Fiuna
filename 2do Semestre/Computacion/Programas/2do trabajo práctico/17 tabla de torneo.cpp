/*Considerando 10 equipos de futbol jugando cada equipo dos partidos contra 
cada uno de los demás. Cargue los resultados de los juegos y calcule los puntos 
de cada equipo. 3 puntos para los ganadores, 1 punto por empate y 0 por los perdidos.*/
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
int i,j,g1,g2; int v[10];
float *p;

for(i=0;i<10;i++)
v[i]=0;

cout<<"Primera rueda"<<endl;
for(i=0;i<10;i++)
{for(j=i+1;j<10;j++)
                    {cout<<"Partido del equipo "<<i+1<<" contra el equipo "<<j+1<<endl;
                    cout<<"Goles del equipo "<<i+1<<":";
                    cin>>g1;cout<<endl;
                    cout<<"Goles del equipo "<<j+1<<":";cin>>g2;cout<<endl;
                    if(g1>g2)
                             {v[i]=v[i]+3;}
                             
                             else if(g1<g2)
                             {v[j]=v[j]+3;}
                    else 
                    {v[i]=v[i]+1; v[j]=v[j]+1;}
                    }
}

cout<<" Segunda rueda"<<endl;
for(i=0;i<10;i++)
{for(j=i+1;j<10;j++)
                    {cout<<"Partido del equipo "<<i+1<<" contra el equipo "<<j+1<<endl;
                    cout<<"Goles del equipo "<<i+1<<":";
                    cin>>g1;cout<<endl;
                    cout<<"Goles del equipo "<<j+1<<":";cin>>g2;cout<<endl;
                    if(g1>g2)
                               {v[i]=v[i]+3;}
                               else if(g1<g2)
                               {v[j]=v[j]+3;}
                    else
                    {v[i]=v[i]+1;
                    v[j]=v[j]+1;}
                    }
} 

for(i=0;i<10;i++)
{cout<<"Puntos del equipo "<<i+1<<": "<<v[i]<<endl;} 


system("pause");
return 0;
}
