#include<iostream>
using namespace std;
#include<stdlib.h>
#include<time.h>

unsigned long long int ingresar(unsigned long long int *array,unsigned long long int tam){
    srand(time(NULL));
    int num=rand();
    for(int i=0;i<tam;i++){
        num=1+rand()%(21-1);
        *(array+i)=num;

    }
    //cout<<"__";
}

void crear(unsigned long long int *&array, unsigned long long int tam)
{
    array=new unsigned long long int[tam];
}

unsigned long long int suma_Iterativa(unsigned long long int *array,unsigned long long int tam){
    unsigned long long int sum=0;
    for(int i=0;i<tam;i++){
        sum=sum + *(array+i);
    }
    return sum;
}

unsigned long long int suma_Recursiva(unsigned long long int *array, unsigned long long int tam,unsigned long long int suma){

    
    if(tam>0){
        return suma_Recursiva(array,tam-1,suma+ *(array+(tam-1)));
    }
    else{
        return suma;
    }   
}





void borrar(unsigned long long int *&array, unsigned long long int tam)
{
    delete[] array;
}
int main(){
    unsigned long long int *array, tam=1000000;
    unsigned long long int suma=0;
    crear(array,tam);
    ingresar(array,tam);
    cout<<"La suma es: "<<suma_Iterativa(array,tam)<<endl;
    cout<<"La suma es: "<<suma_Recursiva(array,tam,suma);   
    borrar(array,tam);
    
    return 0;
}

























