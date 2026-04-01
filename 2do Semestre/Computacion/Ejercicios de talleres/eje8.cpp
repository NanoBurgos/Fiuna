//Luis A. Morinigo L. Ejercicio 8-Computación 2016
#include<iostream>
using namespace std;
main()
{
	int a,b,men,may,i,j; 
	do{
		cout<<"Ingrese a: ";cin>>a; //validación
	}while(a<0 || a!=int(a));
	do{
		cout<<"Ingrese b: ";cin>>b;
	}while(b<0 || b!=int(b));
	if(a>b) //Designar al mayor y al menor
	{
	may=a;
	men=b;}
	else{
	may=b;
	men=b;}
	for(i=2;i<=may;i++) //Descomponer en factores primos el mayor
	{
		if(may%i==0)
		{may=may/i;
		i--;
		}
	}
	for(j=2;j<=men;j++) //Hacer lo mismo con el menor
	{
		if(men%j==0)
		{men=men/j;
		j--;
		}
	}
	if(j!=i) //comparar si hay factores primos comunes
	cout<<"Son primos entre si"<<endl;
	else
	cout<<"No son primos entre si"<<endl;
	system("pause");
}
