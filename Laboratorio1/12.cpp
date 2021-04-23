//EJERCICIO 12
#include<iostream>
using namespace std;
int main(){
    int i=1;
    int divisores;
    int numTriangular;
    while(divisores<500){
        int term;
        term=i*(i+1)/2;

        int cont=0;
        cout<<term<<"  : ";
        for(int k=1;k<=term;k++){
            if (term%k==0){
                cont=cont+1;
                //cout<<k<<" ";
            }
        }
        divisores=cont;
        cout<< " numero de  divisores: "<<divisores<<endl;

        i=i+1;
    }

    return 0;
}