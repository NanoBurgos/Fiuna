/*8) Determine e imprima 10 ternas de numeros a,b,c generados al atribuir valores
pares crecientes mayores que 1, a n, en la regla dada por la Escuela de Platon
[(n/2)^2+1]^2=n^2+[(n/2)^2-1]^2*/
#include<iostream>
using namespace std;
int entpospar();//VALIDA LOS NUMEROS ENTEROS Y POSITIVOS
main()
{int n,i;
cout<<"\n\tDIGITE N (debe ser par>2) : "; n=entpospar();
cout<<"\n\ta^2 = b^2 + c^2\n\n";
for(i=1;i<=10;i++)
{cout<<"\tT"<<i<<" :\ta ="<<((n*n)/4+1)<<"\tb = "<<n<<"\tc = "<<((n*n)/4-1)<<"\n";n+=2;}
cout<<"\n\n\t";
system("pause");}

//FUNCION QUE VALIDA LOS NUMEROS ENTEROS, POSITIVOS Y PARES
int entpospar()
{float x;cin>>x;
while(x!=int(x)||x<=2||int(x)%2!=0)
{cout<<"\n\tVUELVA A DIGITAR EL NUMERO (x>2,entero,par)\n\tn = ";cin>>x;}
return int(x);}
