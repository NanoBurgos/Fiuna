#include<iostream.h>
#include<stdlib.h>
int entpos(){
float n;
do{cout<<"ingrese un numero entero y positivo= ";cin>>n;}
while(int(n)!=n || n<=0);
return int (n); }
int cuantasveces(float n,float i);
main(){ int r=0,i,j,rp=0,cp=0;
float n=entpos(),primo;
cout<<"el numero ingresado es "<<n<<" y si no es primo,\na continuacion se mostraran sus divisores primos\n\n";
for(i=2;i<n;i++){
r=int(n)%i;
if (r==0){
for(j=2;j<i;j++)
{rp=i%j;
if(rp==0){cp++;}
}
if(cp<2){cout<<"un divisor primo es "<<i<<"\n";
primo=i;cout<<"y lo divide "<<cuantasveces(n,primo)<<" veces\n";}
cp=1;}
}
system("pause");}

int cuantasveces(float n,float i){
int r, c=0;
if((n/i)==1){ return c=c+1;}
if((n/i)>1){r=int(n)%int(i); 
if (r==0) {c=c+1;
return c+cuantasveces((n/i),i);}
else{return c;}
}
else return c;}
