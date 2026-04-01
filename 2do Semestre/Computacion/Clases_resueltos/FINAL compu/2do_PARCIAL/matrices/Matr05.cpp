/*Matr 05 Elaborar un programa en lenguaje C, que
Permita determinar la traza de una matriz cuadrada de orden n.*/
#include<iostream>
using namespace std;
int natural();
main()
{int i,j,n;
cout<<"\n\tINTRODUZCA EL ORDEN DE LA MATRIZ M(nxn)\n\n\tn = ";
n=natural();
float M[n][n],traza=0;
cout<<"\n\tINTRODUZCA LOS ELEMENTOS DE LA MATRIZ M("<<n<<"x"<<n<<")\n";
for(i=0;i<n;i++)
    {for(j=0;j<n;j++)
        {cout<<"\tM["<<i+1<<"]["<<j+1<<"] = ";
        cin>>M[i][j];
        traza+=(M[i][j])/n;}}
cout<<"\n\tLA MATRIZ M("<<n<<"x"<<n<<"):\n\n\t";
for(i=0;i<n;i++)
    {for(j=0;j<n;j++)
    cout<<"\t"<<M[i][j];
    cout<<"\n\t";}
cout<<"\n\tLA TRAZA ES IGUAL A : "<<traza<<"\n\n\t";
system("pause");}
int natural()
{float x;cin>>x;
while(x!=int(x)||x<=0)
{cout<<"\nVUELVA A INTRODUCIR EL NUMERO (Debe ser entero y positivo)\n\tnumero = ";cin>>x;}
return int(x);}
