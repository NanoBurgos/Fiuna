/*5) Lea tres numeros enteros y positivos a,b y c. Luego determine e imprima
el máximo comun divisor y el minimo comun multiplo de los mismos*/
#include<iostream>
using namespace std;
int entpos();//funcion que valida los numeros enteros y positivos
main()
{int a,b,c,max=1,min=1,i,aux;
/*a,b y c son las variables de los numeros que calcularan el mcm y mcd
max guardara el valor del MCD
min guaradara el valor del MCM
i es un contador
aux variable auxiliara que utilizare para ordenar*/
cout<<"\n\nDIGITE TRES NUMEROS PARA HALLAR SU MCD Y SU MCM\n\n\t a = ";a=entpos();
cout<<"\n\t b = ";b=entpos();
cout<<"\n\t c = ";c=entpos();
//SE ORDENAN LOS NUMEROS
if(a<c){aux=c;c=a;a=aux;}
if(a<b){aux=b;b=a;a=aux;}
if(b<c){aux=c;c=b;b=aux;}
cout<<"\n\nLOS NUMEROS DIGITADOS SON :\t"<<a<<"\t"<<b<<"\t"<<c<<"\n\n";
//"LA CLAVE"   --->>>
for(i=2;i<=a;i++)//cuenta desde 2 hasta a (el numero mayor)
if(a%i==0&&b%i==0&&c%i==0) max=i;//si i divide a,b y c simultaneamente entonces es el maximo
cout<<"\n\tA\tB\tC\n\t"<<a<<"\t"<<b<<"\t"<<c<<"\t1\t\n";
for(i=2;i<=(a*b*c);i++)//cuenta desde 2 hasta a*b*c
{if(a%i==0||b%i==0||c%i==0)//si i divide a,b o c entonces (1)
{min=min*i;
if(a%i==0) {a=a/i;cout<<"\t"<<a;} else cout<<"\t-"; //si es divisor de a, a divide por i
if(b%i==0) {b=b/i;cout<<"\t"<<b;} else cout<<"\t-"; //si es divisor de b, b divide por i
if(c%i==0) {c=c/i;cout<<"\t"<<c;} else cout<<"\t-"; //si es divisor de c, c divide por i
cout<<"\t"<<i<<"\n";i=1;}}//(1) min multiplica por i      <<<-----
cout<<"\n\tEL MAXIMO COMUN DIVISOR  ES : "<<max<<"\n\tEL MINIMO COMUN MULTIPLO ES : "<<min<<"\n\n";
system("pause");}
//sentencias de la funcion que valida los numeros enteros y positivos
int entpos()
{float x;cin>>x;
while(x!=int(x)||x<=0)
{cout<<"\n\n\tVUELVA A DIGITAR EL NUMERO (debe ser entero y positivo)\n\tn = ";cin>>x;}
return int(x);}
