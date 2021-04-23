//EJERCICIO 14
#include<iostream>
using namespace std;
unsigned long long Par_O_Impar(unsigned long long numero_prueba){
    int cont=0;
    do{
        cont=cont+1;
        numero_prueba=numero_prueba%2==0? (numero_prueba/2) : (3*numero_prueba+1);

    }while(numero_prueba!=1);
        return cont;
}

int main(){
    unsigned long long secuencia_cant,limite=1000000,primer_numero=0,longest=0,numero_rpta;
    for(int i=2;i<limite;i++){
        if ((secuencia_cant=Par_O_Impar(i))>longest){
            longest=secuencia_cant;
            numero_rpta=i;
        }
    }
    cout<<"El numero con la cadena mas larga es: "<<numero_rpta;

    return 0;
}