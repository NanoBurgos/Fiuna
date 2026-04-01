/*Matr11Permita resolver un sistema de ecuaciones lineales de n ecuaciones con n incógnitas,
sabiendo que la matriz del sistema es triangular superior.*/
#include<iostream>
using namespace std;
//Funcion que valida los numeros naturales (enteros positivos)
int natural()
{float x; cin>>x;
while(x!=int(x)||x<=0)
{cout<<"\n\tVUELVA A INTRODUCIR (debe ser entero y positivo)\n\tnumero = ";cin>>x;}
return int(x);}

main()
{int i,j,n;
cout<<"\n\tINTRODUZCA EL ORDEN DE LA MATRIZ TRIANGULAR SUPERIOR M(nxn):\n";
cout<<"\n\tn = ";n=natural();

float M[n][n],b[n],X[n];
//carga la matriz, pero primero se iguala a 0 los elementos debajo la diagonal
for(i=0;i<n;i++)
    {for(j=0;j<n+1;j++)
        {if(i>j) M[i][j]=0;}}
        
for(i=0;i<n;i++)
    {cout<<"\n\tCoeficientes:";
    for(j=i;j<n;j++)
    {cout<<"\n\tM ["<<i+1<<"]["<<j+1<<"] = ";
    cin>>M[i][j];
    while(i==j&&M[i][j]==0)
    {cout<<"\nNO PUEDE SER IGUAL A 0, DIGITE NUEVAMENTE\n\tM["<<i+1<<"]["<<j+1<<"]=";cin>>M[i][j];}}
    cout<<"\n\tNumero Independiente:\n\tb["<<i+1<<"] = ";cin>>b[i];}
//Se imprimen las matrices
cout<<"\n\t M*X=b:\n";
for(i=0;i<n;i++)
{cout<<"\t|";
for(j=0;j<n;j++)
cout<<"\t"<<M[i][j];
cout<<"\t| |X"<<i+1<<"| |"<<b[i]<<"|\n";}
//ACA ESTA LA CLAVE----->
X[n-1]=b[n-1]/M[n-1][n-1];//se calcula el ultimo numero de X
//Se calculan los valores de X
for ( i = n - 2; i >= 0; i-- )
{ X[i] = b[i];
for ( j = i + 1; j < n; j++ )
{ X[i] -= M[i][j]*X[j]; }
X[i] = X[i]/M[i][i]; }//<---------------ACA ESTA LA CLAVE
//Se imprime los resultados
cout<<"\n\n\tX:\n";
for(i=0;i<n;i++)
cout<<"\n\t"<<"X"<<i+1<<" = "<<X[i];

cout<<"\n\n\t\t";
system("pause");}
