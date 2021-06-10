#include<iostream>
using namespace std;
#include"Node.h"
#include"LinkedList.h"
int main(){ 
    LinkedList *lista_E=new LinkedList;
    int tam,num,num_E;
    cout<<"Ingrese cantidad de elementos: ";cin>>tam;
    for(int i=0;i<tam;i++){ 
        cout<<"Ingrese el elemento: ";cin>>num;
        lista_E->insert(num);   
    }

    cout<<endl<<"Imprimiendo Lista:"<<endl;
    lista_E->print();
   
    cout<<endl<<"Ingrese el numero que quiere eliminar:";cin>>num_E;
    lista_E->remove(num_E);
    lista_E->print();

    cout<<endl<<"Insertando el numero 100"<<endl;
    lista_E->insert(100);
    lista_E->print();

    cout<<endl<<"Sobrecarga:"<<endl;
    cout<<*lista_E;
    
    return 0;
}