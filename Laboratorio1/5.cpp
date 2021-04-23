//EJERCICIO 5
#include<iostream>
using namespace std;
int main(){
    int num=1;
    int divisores;
    while(divisores<=19){
        int cont=0;
        for(int i=1;i<=20;i++){
            if (num%i==0){
                cont=cont+1;
            }
        }
        divisores=cont;
        num=num+1;

    }
    cout<<num-1<<" es el menor numero divisible con numeros del 1 al 20";
    return 0;
}