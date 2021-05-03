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
        //cout<<num<<" ";

    }
    //cout<<"__";
}

void crear(unsigned long long int *&array, unsigned long long int tam)
{
    array=new unsigned long long int[tam];
}

void ordenar(unsigned long long int *array,unsigned long long int tam){
    int temp;
    for(int i=0;i<tam;i++){
        for(int j=0;j<tam;j++){
            if (*(array+i)<*(array+j)){
                temp=*(array+i);       	   
                *(array+i)=*(array+j);
                *(array+j)=temp;
            }
        }
    }	
}


void print(unsigned long long int  *array,int tam)
{   
    
    for(int i=0;i<tam;i++){
        cout<<*(array+i)<<" "; 
    }
}


void borrar(unsigned long long int *&array, unsigned long long int tam)
{
    delete[] array;
}


int main(){   
    unsigned long long int *array, tam=1000000;
    crear(array,tam);
    ingresar(array,tam);
    ordenar(array,tam);
    print(array,tam);
    borrar(array,tam);
	return 0;
}