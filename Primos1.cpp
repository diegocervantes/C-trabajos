#include<iostream>
using namespace std;
int main( ){
	int num, cont=0;
	while(int a=1){
		cout<<"Ingresa un numero: "<<endl;
		cin>>num;
		cont = 0;
		if(num==0){
			cout<<"Acabo el programa \n ";
			a=2;
			return a;
		}
		for(int i=1; i<=num;i++){
			if(num % i == 0)
				cont=cont+1;
		}
		if(cont==2)
			cout<<"Es primo \n ";
		else	
			cout<<"No es primo \n ";
		
	}	
}


