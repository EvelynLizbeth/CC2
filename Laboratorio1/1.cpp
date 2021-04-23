//EJERCICIO 1
#include<iostream>
using namespace std;

int main(){

    int suma;
    for(int i=0;i<1000;i++){
        if((i%3==0)||(i%5==0)){
            suma=suma+i;
        }
    }
    cout<<" La suma es: "<< suma;
    return 0;
}