/* Matr04 Lea una matriz cuadrada de orden n, e imprima dos matrices que sumadas dan
la matriz dada, y tal que una de ellas sea simétrica y la otra antisimétrica.*/
#include<iostream>
using namespace std;
//Funcion que verifica que el valor ingresado sea entero y positivo
int validar()
{float x;
cin>>x;
while(x!=int(x)||x<=0)
{cout<<"\n\nVuelva a introducir el numero (Debe ser entero y positivo)\n\tnumero = ";
cin>>x;}
return int(x);}

main()
{int n,i,j;
cout<<"\n\n\tINTRODUZCA EL VALOR DEL ORDEN DE LA MATRIZ M(nxn)\n\t\tn = ";
n=validar();
float M[n][n],A[n][n],B[n][n];
//Se cargan los elementos de la matriz
cout<<"\n\n\tCARGUE LOS ELEMENTOS:\n";
for(i=0;i<n;i++)
    {for(j=0;j<n;j++)
        {cout<<"M("<<i+1<<"."<<j+1<<")=";
        cin>>M[i][j];}}
//Se imprime la matriz Dada
cout<<"\n\n\tMATRIZ DADA M("<<n<<"x"<<n<<"):\n";
for(i=0;i<n;i++)
{   for(j=0;j<n;j++)
    cout<<"\t"<<M[i][j];
    cout<<"\n";}
//Se hallan las matrices tales que M=A+B y tq A=A^t && B=-B^t
for(i=0;i<n;i++)
{   for(j=0;j<n;j++)
    {A[i][j]=(M[i][j]+M[j][i])/2;
     B[i][j]=(M[i][j]-M[j][i])/2;}    }
//Se imprimen las matrices calculadas
cout<<"\n\n\tMATRIZ CALCULADA A("<<n<<"x"<<n<<") SIMETRICA:\n";
for(i=0;i<n;i++)
{   for(j=0;j<n;j++)
    cout<<"\t"<<A[i][j];
    cout<<"\n";}
cout<<"\n\n\tMATRIZ CALCULADA B("<<n<<"x"<<n<<") ANTISIMETRICA:\n";
for(i=0;i<n;i++)
{   for(j=0;j<n;j++)
    cout<<"\t"<<B[i][j];
    cout<<"\n";}
cout<<"\n\t\tM = A + B\n\n";  
system("pause");}
