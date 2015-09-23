#include<iostream>

using namespace std;

int main(){
    int cont=0,j ,y;
    cout<<"Cuantas letras tiene su palabra"<<endl;
    cin>>y;
    j=y;
    char palabra[y];
    char *ptr = palabra;
    cout<<"Ingrese las letras"<<endl;
    cin>>palabra;
    /*for(int i=0; i<y; i++){
        cout<<"Ingrese las letras"<<endl;
        cin>>(*(ptr+i));
    }*/

    cout<<palabra<<endl;
    for(int i=0; i<y; i++){
        if(j!=-1){
            if((*(ptr+i)) ==(*(ptr+j-1)) ){
                cont+=1;
                j-=1;
            }
        }
    }

    if(cont==y){
        cout<<"Es palindrome"<<endl;
    }
    /*cout<<cont<<endl;*/
    else{
        cout<<"No es palindrome"<<endl;
    }

    return 0;
}

