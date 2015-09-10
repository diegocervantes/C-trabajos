#include <iostream>
#include "Prueba.h"
using namespace std;

int main()
{
	int x,a,y;
	a=1;
	while(a==1){
		cout<<"Ingrese numero o ingrese (0) para acabar el programa: "<<endl;
		cin>>x;
		cout<<"Quiere el fibonacci(3) o el cuadrado(2) o el cubo(1)? Si quiere detener el programa presione(0)---->";
		cin>>y;
		if(y==0)
		{
			cout<<"Acabo el programa :)"<<endl;	
			a=2;
		}
		if(y==3){
			cout<<"El fibonacci es: ";
			cout<<fib(x)<<endl;
		}				
		if(y==2){
			cout<<"El cuadrado es: ";		
			cout<<square(x)<<endl;
		}
		if(y==1){
			cout<<"El cubo es: ";
			cout<<cube(x)<<endl;
		}
	}
	return 0;
}

int square(int x)
{
	return x*x;
}
int cube(int x)
{
	return x*square(x);
	
}
int fib(int x)
{
	if (x==0 or x==1)
		return 1;
	else
		return fib(x-2) + fib(x-1);
}
