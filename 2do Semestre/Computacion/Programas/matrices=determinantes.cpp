//Calcule el determinante de una matriz n*n
#include <iostream>
using namespace std;
int entpos();
 
main()
{
      int n=entpos(),i, j, k;
      float Mat[n][n], det, diagp,diags;
      for (i=1; i<=n; i++)
      for (j=1; j<=n; j++)
      {cout<<"digite la componente M ["<<i<<"]["<<j<<"]: ";cin>>Mat[i][j];}
  
cout<<"la matriz formada es: M= \n";
      for(i=1;i<=n;i++)
      {cout<<"|";
      for(j=1;j<=n;j++)
      {cout<<"\t"<<Mat[i][j]<<"\t";}
      cout<<"|"<<"\n";}
   
det=Mat[1][1]; 
for(k=1;k<n;k++) 
       {                for(i=k+1;i<=n;i++) 
                        for(j=k+1;j<=n;j++) 
                        Mat[i][j] = ( Mat[k][k]*Mat[i][j]-Mat[k][j]*Mat[i][k] )/Mat[k][k]; 
                        det=det*Mat[k+1][k+1];
       } 

cout << endl; 
cout << "DETERMINANTE = " << det << endl; 

system("pause");
return 0;
}
         
int entpos()
{
    float q;
    do{cout<<"digite un nro positivo n: ";cin>>q;}
    while(q!=int(q) || q<=0);
    return int (q);
}
