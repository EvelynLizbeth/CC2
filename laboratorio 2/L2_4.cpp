#include <iostream>
using namespace std;
int cont_cadena_iterativa(char cadena[],int i){
    while(cadena[i]!='\0'){
        i++;
    }
    return i;
}

int cont_cadena_recursiva(char cadena[],int i){
    int tam=0;
    
    if(cadena[i]=='\0')
        return tam;
    else{
        return tam+cont_cadena_recursiva(cadena,i+1) +1 ;
    }

}
int main()
{
    char cadena[]="prueba de cadena"; 
    int i=0;     

    cout<<"Longitud de cadena(forma iterativa): ";
    cout<<cont_cadena_iterativa(cadena,i)<<endl;
    cout<<"Longitud de cadena(forma recursiva): ";
    cout<<cont_cadena_recursiva(cadena,i);
    return 0;
}


