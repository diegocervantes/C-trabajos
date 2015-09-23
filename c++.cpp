#include<iostream>
#include<stdlib.h>

using namespace std;


int main(){

    int x = rand()%21;
    int arr[x];
    int *ptr = arr;
    for(int j=0; j<x; j++){
        (*(ptr+j))=rand()%101;


    }

    for(int i = 0; i < x; i++){
        cout<<(*(ptr+i))<<endl;
    }

    return 0;
}
