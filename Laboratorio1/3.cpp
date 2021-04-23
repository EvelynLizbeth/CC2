//EJERCICIO 3
#include <iostream>
using namespace std;

bool esprimo(unsigned long long num) {
    unsigned long long div = 1, divs = 0;
    do{
        if(num % div == 0){
            divs++;
        }
        div++;
    }

    while(div <= num);
        if(divs == 2){
            return true;
        }
        else{
            return false;
        }
}



void factoresprimos(unsigned long long numero){
    unsigned long long max=0;
	for(unsigned long long i=2;(i*i)<=numero+1;i++){
        if(numero %i==0){
            if (esprimo(i)==true){
                if(i > max){
                    max = i;
                }
            }
	    }
    }   
    cout<<"El factor primo mas grande del numero 600851475143 es: "<<max;
}
int main()
{
    unsigned long long numero=600851475143;
    unsigned long long max=0;
	factoresprimos(numero);
    return 0;
}