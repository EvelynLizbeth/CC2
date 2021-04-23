//EJERCICIO 2
#include<iostream>
using namespace std;
int main(){
    int a=1,b=2,sum=0,aux;
    while(b<4000000){
        aux=a+b;
        a=b;
        b=aux;
        if ((a%2==0)){
            //cout<<a;
            sum=sum+a;
        } 
    }
    cout<<sum;
    return 0;
}