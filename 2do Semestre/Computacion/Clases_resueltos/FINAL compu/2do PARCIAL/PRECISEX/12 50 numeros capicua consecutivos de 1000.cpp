/*12) Determine los 50 numeros capicua consecutivos de 1000. Un numero es capicua
si es el mismo numero leyendolo de derecha a izquierda. (Ejemplo 23532)*/
#include<iostream>
using namespace std;
int capicua(int x);
main()
{int c=0,mayor=1000;
cout<<"\n\tLOS 50 NUMEROS CAPICUAS CONSECUTIVOS DESPUES DE 1000 SON:\n";
do{mayor=mayor+1;
if (capicua(mayor)) {c++;cout<<"N"<<c<<" = "<<mayor<<"\t";}}while(c!=50);
//mientras mayor no sea capicua se le sumara 1 y a c tambien
cout<<"\n\n\t";
system("pause");}
int capicua(int x)//funcion que verifica si un numero es capicua
{int x1,a=1,b=1,c=1,y=0,i;x1=x;
while((b*10)<x1)
{c++;b=b*10;}
for(i=0;i<c;i++)
{y=y+a*(int(x1/b));x1=x1-b*int(x1/b);a=a*10;b=b/10;}
if(y==x) return 1;//si es capicua devuelve 1
else return 0;}//si no es capicua devuelve 0
