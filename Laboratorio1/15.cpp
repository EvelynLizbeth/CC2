//EJERCICIO 15
#include<iostream>
using namespace std;
int main(){
    unsigned long long Cuadrilla[45][45];
    int numero_cuadrilla=20;
    for(int i=0;i<=numero_cuadrilla;i++){
        for(int j=0;j<=numero_cuadrilla;j++){
            Cuadrilla[i][j]=1;
            if((i>0)&&(j>0)){
                Cuadrilla[i][j]=Cuadrilla[i-1][j]+Cuadrilla[i][j-1];
            }
        }
    }
    cout<<"Las rutas posibles son: "<<Cuadrilla[numero_cuadrilla][numero_cuadrilla];
    return 0;
}