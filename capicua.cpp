#include<iostream>
using namespace std;


int digitos(int n){
    int a = 10, b = 100, c = 1;
    bool mayor = true;
    if(n<a)
        return c;
    while(mayor==true){
        if(n>a and n<b){
            c+=1;
            mayor = false;
            return c;
        }
        c+=1;
        a=a*10;
        b=b*10;
    }
}

int capicua(int n, int inv){
    if(n==0)
        return inv;
    else
        return capicua(n/10,inv*10+n%10);

}


int main(){
    int n;
    cout<<"Ingrese un numero: ";
    cin>>n ;
    if(n==capicua(n,0))
        cout<<"Es capicua"<<endl;

    else
        cout<<"No es capicua"<<endl;
    return 0;

}
