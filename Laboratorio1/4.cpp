//EJERCICIO 4
#include<iostream>
using namespace std;
int main(){
    
    int may=1;
    int numero;
    for (int i=11;i<=999;i++){
        
        for(int j=11;j<=999;j++){
            numero=i*j;

            if((numero/100000==numero%10)&&(numero/10000%10==numero%100/10)&&( numero/1000%10==numero/100%10)){
                if(numero>may){
                    may=numero;
                }                
            }

        }
    }
    cout<<"Mayor numero palindromo: "<< may;
    return 0;
}