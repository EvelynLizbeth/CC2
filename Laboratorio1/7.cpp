//EJERCICIO 7
#include<iostream>
using namespace std;
bool Primo(int numero) {
    if (numero <= 1) {
        return false;
    }
    if(numero == 2){
        return true;
    }
    if (numero % 2 == 0) {
        return false;
    }
 
    int cont = 3;
 
    while ((cont * cont) <= numero) {
        if (numero % cont == 0) {
            return false;
        } 
        else {
            cont +=2;
        }
    }
    return true;
}

int main(){
    int aumentando_primos = 1;
    int numero = 1;
    
    while (aumentando_primos < 10001) {
        numero = numero + 2;
        if (Primo(numero)) {
            aumentando_primos++;
        }
    }
    cout<<"El primo en posicion 10001 es: "<<numero;
    return 0;
}