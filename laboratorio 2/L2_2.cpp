#include<iostream>
using namespace std;
#include<stdlib.h>
#include<time.h>
long long int ingresar(long long int *array,long long int tam){
    srand(time(NULL));
    int num=rand();
    for(int i=0;i<tam;i++){
        num=1+rand()%(21-1);
        *(array+i)=num;

    }
}

void crear(long long int *&array, long long int tam)
{
    array=new long long int[tam];
} 

long long int invertir_iterativa(long long int *array, long long int tam){
    for (int i=0;i<tam/2 ;i++){
        int temp=*(array+i);
        *(array+i)= *(array+(tam-i-1));
        *(array+(tam-i-1))=temp;

    }
    return *array;
}


long long int invertir_recursiva(long long int *array, long long int tam,int pos ){
    int temp;
    if(tam>pos){
        temp=*(array+(tam-1));
        *(array+(tam-1))=*(array+(pos));
        *(array+(pos))=temp;
        invertir_recursiva(array,--tam,++pos);
    }
}


void print(long long int  *array,int tam)
{   
    
    for(int i=0;i<tam;i++){
        cout<<*(array+i)<<" "; 
    }
}



void borrar(long long int *&array, long long int tam)
{
    delete array;
}
int main(){
    long long int *array ,tam=1000000;
    int pos=0;
    crear(array,tam);
    ingresar(array,tam);
    //print(array,tam);
    invertir_iterativa( array,  tam);
    //print(array,tam);
    borrar(array,tam);

    cout<<"Invertido forma iterativa"<<endl;
    crear(array,tam);
    ingresar(array,tam);
    invertir_recursiva( array,tam,pos );
    //print(array,tam);
    cout<<"Invertido forma recursiva";
    borrar(array,tam);
    return 0;
}