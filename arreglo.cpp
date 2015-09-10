#include<iostream>
using namespace std;

void ordenar(int x[10]);

int main(){
    int x[10];
    int i;
    for(i=0; i<10; i++){
        cout<<"Ingrese un numero para la lista \n ";
        cin>>x[i];
    }
    ordenar(x);
    for(i=0; i<10; i++){
        cout<<x[i]<<" ";
    }
    return 0;
}
 void ordenar(int x[10]){
     int cambio, i, j;
     for(i=1; i<10; i++){
         for(j=0; j<9; j++){
            if(x[j]>x[j+1]){
                    cambio = x[j];
                    x[j] = x[j+1];
                    x[j+1] = cambio;
            }
        }
    }
}
