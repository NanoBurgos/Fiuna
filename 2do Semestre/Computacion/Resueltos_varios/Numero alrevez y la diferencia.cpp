/*3) Lea un numero entero y positivo(validarlo), determine el número obtenido
al esccribir dicho numero con sus cifras en secuencia inversa y determine la diferencia
entre los mismos(restar el mayor del menor)*/
#include<iostream>
using namespace std;
int entpos();//Función que valida los numeros enteros y positivos
main()
{int n,n2,a=1,b=1,c=1,m=0,i;
/*n y n2 es varible para introducir el numero
a es un multiplicador
b es un multiplicadors
c es contador de las cifras
m es es el numero de cifras invertidas
i es contador*/
cout<<"\n\n\tINTRODUZA UN NUMERO ENTERO Y POSITIVO\n\tN = ";
n=entpos();
n2=n;//se guarda en n2 el valor de n
cout<<"\n\n\tEL NUMERO INTRODUCIDO ES :"<<n;
//SENTECIAS PARA INVERTIR LAS CIFRAS DEL NUMERO "LA CLAVE"
while(a<=(n2/10))//mientras a sea menor que n
{a=a*10;c=c+1;}//a se multiplica por 10 y c se le suma 1
for(i=0;i<c;i++)//repite el ciclo segun tantas cifras tenga
{m=m+int(n2/a)*b;// a la variable m se le suma la parte entera de n/a multiplicada por b
n2=n2-a*int(n2/a);//a n se le resta la parte entera de n/a
a=a/10;b=b*10;}//a se divide por 10 y b se multiplica por 10

cout<<"\n\n\tEL NUMERO QUE TIENE SUS CIFRAS INVERTIDAS ES :"<<m;
if(m>n)//SI m ES MAYOR QUE n
{cout<<"\n\n\tLA DIFERENCIA ENTRE LOS NUMEROS ES :"<<m-n<<"\n\n";}
else//SI m ES MENOR O IGUAL A n
{cout<<"\n\n\tLA DIFERENCIA ENTRE LOS NUMEROS ES :"<<n-m<<"\n\n";}
system("pause");}

int entpos()
{float x;cin>>x;    
while(x!=int(x)||x<=0)
{cout<<"\n\tVUELVA A INTRODUCIR EL NUMERO (debe ser entero y positivo)\n\tx = ";
cin>>x;}
return int(x);}
