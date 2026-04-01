/*1) Lea un numero entero y positivo n, mayor que 10.000 y menor que 1.000.000,
validarlo e imprima la suma de las cifras que ocupan lugar impar y la suma de 
las cifras que ocupan lugar par*/
#include<iostream>
using namespace std;
int entpos()//funcion que valida los numeros enteros y positivos
{float x;cin>>x;    
while(x!=int(x)||x<=0)
{cout<<"\n\tVUELVA A INTRODUCIR EL NUMERO (debe ser entero y positivo)\n\tx = ";
cin>>x;}
return int(x);}
main()
{int n,par=0,impar=0,i,d=10000,;
/*n es la variable que usaremos para introducir los numeros 
par e impar son variables que suman los numeros de las posiciones pares e impares
i es contador
d seria los divisores*/
cout<<"\n\n\tINTRODUZCA UN NUMERO TALQUE 10000<n<1000000\n\n\tn = ";
n=entpos();//el valor de la funcion será el valor de n
while(n<=10000||n>=1000000)//verifica que sea mayor que 10000 y menor que 1000000
{cout<<"\n\tDEBE SER n TALQUE 10000<n<1000000\n\n\tn = ";
n=entpos();}
cout<<"\n\n\tEL NUMERO INTRODUCIDO ES : "<<n;
for(i=0;i<5;i++)
{if(i%2) par=par+int(n/d);
else impar=impar+int(n/d);
n=n-d*int(n/d);
d=d/10;}
cout<<"\n\tLA SUMA DE LOS NUMEROS QUE OCUPAN LAS POSICIONES PARES ES :"<<par;
cout<<"\n\tLA SUMA DE LOS NUMEROS QUE OCUPAN LAS POSICIONES IMPARES ES :"<<impar<<"\n\n\t";
system("pause");}
