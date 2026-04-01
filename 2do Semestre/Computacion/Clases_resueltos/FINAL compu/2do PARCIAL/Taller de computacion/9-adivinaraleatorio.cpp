#include<iostream.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
main()
{
 int n,x;
 srand(time(NULL));
 n=1+rand()%(101-1);
 cout<<n<<"adivine un numero generado aleatoriamente entre el uno y el 100\n";
 cin>>x;
 int j=0;
 while(x!=n)
 {cout<<"no ha acertado intente de nuevo\n";
 cin>>x;j++;}
 cout<<"felicidades ha acertado luego de "<<j+1<<" intentos\n";
 system("pause");
 return 0;
}
