/*24) Lea e imprima dos numero enteros y positivos, m y n, mayores que 2
y menores o iguales que 20, luego lea un conjunto de numeros enteros y los carga
consecutivamente como elementos de la matriz mat de orden mxn siempre que cada
numero leido sea mayor que el precedente y luego imprime mat.*/
#include<iostream>
using namespace std;
int ent();
int intervalo(int x);
main()
{int m,n,i,j;
cout<<"\n\n\tDIGITE EL ORDEN DE LA MATRIZ MAT(mxn) (2<(m o n)<=20):\n";
cout<<"\n\tNUMERO DE FILAS, m = ";m=intervalo(ent());
cout<<"\n\tNUMERO DE COLUMNAS, n = ";n=intervalo(ent());
//SE LEE LA MATRIZ
cout<<"\n\tDIGITE LAS COMPONENTES DE LA MATRIZ MAT("<<m<<"x"<<n<<") ";
cout<<"\n\tTALQUE CADA NUMERO DIGITADO SEA MAYOR QUE EL PRECEDENTE :\n";
int M[m][n],*p;
p=M[0];
for(i=0;i<m;i++)
{for(j=0;j<n;j++)
{cout<<"\tMAT["<<i+1<<"]["<<j+1<<"] = "; M[i][j]=ent();
if(i!=0||j!=0)
{while(*(p+n*i+j)<=*(p+n*i+j-1))
{cout<<"\tVUELVA A DIGITAR (debe ser mayor que el anterior)\n\tMAT["<<i+1<<"]["<<j+1<<"] = ";
*(p+i*n+j)=ent();}}}}
//SE IMPRIME LA MATRIZ
cout<<"\n\tMAT("<<m<<"x"<<n<<") :\n";
for(i=0;i<m;i++)
{for(j=0;j<n;j++)
cout<<"\t"<<M[i][j];
cout<<"\n";}
system("pause");}
//FUNCION QUE VALIDA LOS NUMERO ENTEROS
int ent()
{float x;cin>>x;
while(x!=int(x))
{cout<<"\n\tVUELVA A DIGITAR EL NUMERO (debe ser entero)\n\tnum = ";cin>>x;}
return int(x);}
//FUNCION QUE VALIDA NUMEROS DENTRO DE UN INTERVALO
int intervalo(int x)
{while(x<=2||x>20)
{cout<<"\n\tVUELVA A DIGITAR EL NUMERO (2<num<=20)\n\tnum = ";x=ent();}
return x;}
