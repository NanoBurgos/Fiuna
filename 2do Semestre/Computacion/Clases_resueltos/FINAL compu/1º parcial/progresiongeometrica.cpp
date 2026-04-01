#include <iostream>
#include<stdlib.h>
using namespace std;
int main ()
{
int r1,r2,q1,q2;
float a,b,c;
cout<<"\n\tIntroduzca tres numeros enteros, positivos y en orden ascendente";
cout<<"\n\ta=";cin>>a;cout<<"\n\tb=";cin>>b;cout<<"\n\tc=";cin>>c;

	if(int(a)==a&&a>0&&int(b)==b&&b>0&&int(c)==c&&c>0&&a<b&&b<c)
		{
			if(a<b&&b<c)
		{	
				r1=b-a;r2=c-b;
				q1=b/a;q2=c/b;
				if (r1==r2)
				cout<<"\n\tLos numeros estan en prograsion aritmetica\n\n";
				if(q1==q2)
					cout<<"\n\tLos numeros estan en prograsion geometrica\n\n";
		}
			else
			cout<<"\n\tLos numeros no estan en progresion\n\n";
		}
	else
		cout<<"\n\tLos numeros no cumplen los requisitos solicitados\n\n";
system("pause");
}
