/*elabore un programa que determine la mayor y menor entre las "n" componentes numéricas de un vector e imprima las posiciones 
que ocupan los primeros de la secuencia que cumplan dichas condiciones*/

#include<iostream>
using namespace std;
int entpos();
main()
{
     int i, j, n=entpos(), pmay, pmen;
     float v[n], aux, may, men;

for(i=0;i<n;i++)
{cout<<"digite v["<<i+1<<"]: ";cin>>v[i];}

may=v[0];pmay=0;
men=v[0];pmen=0;
cout<<"El vector ingresado es v=[";
for(i=1;i<n;i++)
{ 
                if(v[i]>may)
                {may=v[i]; pmay=i;}
                
                if(v[i]<men)
                {men=v[i]; pmen=i;}
}      

for(i=0;i<n;i++)
{cout<<v[i]<<" ";}
cout<<"]\n";

cout<<"El elemento mayor del vector es "<<may<<" y su posicion es "<<pmay+1<<"\n";
cout<<"El elemento menor del vector es "<<men<<" y su posicion es "<<pmen+1<<"\n\n";      

system("PAUSE");
return EXIT_SUCCESS; 
}
int entpos()
{
    float q;
    do{cout<<"digite un nro positivo: ";cin>>q;}
    while(q!=int(q) || q<=0);
    return int (q);
}
