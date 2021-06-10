#ifndef __LINKEDLIST_H__
#define __LINKEDLIST_H__
#include"Node.h"
#include<iostream>
using namespace std;
#include<stdio.h>


class LinkedList;

std::ostream& operator << (std::ostream &out,  LinkedList &salida);


class LinkedList{
    private:
        int size;
        Node* head;
    public:
        LinkedList();
        LinkedList(int tam, Node* cabeza);

        void insert(int elem_I);
        void remove(int elem_R);
        void print();

        ~LinkedList();

        friend std::ostream& operator <<  (std::ostream &out,  LinkedList &salida);
};

LinkedList::LinkedList(){
    size=0;
    head=nullptr;
}


LinkedList::LinkedList(int tam, Node* cabeza){
    size=tam;
    head=cabeza;
    
}

void LinkedList::insert(int elem_I){
    Node *Nuevo_nodo=new Node(elem_I);
    Node *temp=head;

    if (head==nullptr){
        head=Nuevo_nodo;
    }
    else if(elem_I < head->getElem() ){
        Nuevo_nodo->setNext(head);
        head=Nuevo_nodo;
    }
    else{
        while (temp->getNext()!=nullptr && temp->getNext()->getElem() <elem_I){
            temp=temp->getNext();
        }
        if (temp->getNext()!=nullptr){
            Nuevo_nodo->setNext(temp->getNext());
        }
        temp->setNext(Nuevo_nodo);
    }
    size=size+1;
}


void LinkedList::remove(int elem_R){
    Node *temp=head,*temp1;
    
    if(temp==nullptr){
        cout<<"No hay elementos en la lista";
    }
    else if(temp->getElem()==elem_R){
        head=temp->getNext();
        delete temp;
        size=size-1;
    }
    else{
        while(temp->getNext()!=NULL){
            temp1=temp;
            temp=temp->getNext();
            if(temp->getElem()==elem_R){
                temp1->setNext(temp->getNext());
                delete temp;
                size=size-1;
                //cout<<size<<"____";
                break;
            }
        }
    }
}

void LinkedList::print(){
    Node *it =head;
    while(it!=nullptr){
        cout<<it->getElem()<<"  ";
        it=it->getNext();
    }
    cout<<endl;
    
}


LinkedList::~LinkedList(){
    delete head;
}


std::ostream& operator << (std::ostream &out,  LinkedList &salida){
    Node *temp=salida.head;

    
    while(temp!=nullptr){
        
        out<<salida.head->getElem()<<" ";
        temp=salida.head->getNext();
        salida.head=salida.head->getNext();
        
        
    }
    return out;
    
}

#endif
