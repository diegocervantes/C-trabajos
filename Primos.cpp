#include<iostream>
using namespace std;
void primo(int num){
	int cont, i;
	cont=0;
	for(i=1; i<=num;i++){
		if(num % i == 0)
			cont=cont+1;
	}
	if(cont==2)
		cout<<"Es primo \n ";
	else	
		cout<<"No es primo \n ";

}

int main( ){
	int a,num;
	a=1;
	while(a==1){
		cout<<"Ingresa un numero: "<<endl;
		cin>>num;
		if(num==0){
			cout<<"Acabo el programa \n ";
			a=2;
			return a;
		}
		primo(num);		
	}
	return 0;
}


