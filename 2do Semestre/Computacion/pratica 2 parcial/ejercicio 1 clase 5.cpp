#include<iostream>
#include<math.h>
#include<stdlib.h>
#include<stdio.h>
using namespace std;

float hipotenusa (int a, int b);
float hipotenusa1( float , float );

main()
{
	int a, b ;
	float c, d, h , h1;
	cout<<" introduzca los catetos del triangulo  \n";
	cin>>a;
	cin>>b;
    h = hipotenusa (a,b);
	cout<<" la hipotenusa es "<< h;
	
	cout<<"introduzca los catetos del triangulo 2 \n";
	cin>>c;
	cin>>d;
	h1 = hipotenusa(c,d) ;
	cout<<"la hipotenusa  es"<< h1;
	system("pause");

	
}
float hipotenusa ( int a, int b){
		float e;
		e = sqrt(a*a + b*b);
		return e;
	}
	 
	float hipotenusa1 ( float c, float d)
	{
		float f;
		f = sqrt(c*c + d*d);
		return f;
	}
