#include<iostream>
using namespace std;
#include"LinkedList.h"
#include"node.h"
#include"node.cpp"
//#include"iterator.h"
template<typename U> LinkedList<U>::LinkedList(){
    size=0;
    head=nullptr;
    cola=nullptr;
}

//void pushFront(U pF);
//void pushBack(U pB);
//void insert(U ins, U pos);


template<typename U> void LinkedList<U>::pushFront(U pF){
    Node<U> *nuevo_nodo=new Node<U>(pF);
    Node<U> *temp=head;
    if (head==nullptr){
        head=nuevo_nodo;
        //cola=nuevo_nodo;
        size=size+1;
    }
    else{
        
        nuevo_nodo->setNext(head);
        head=nuevo_nodo;
        while(temp->getNext()!=nullptr){//cuando solo haya uno
            temp=temp->getNext();
        }
        cola=temp;

        size=size+1;

    }
}

template<typename U> void LinkedList<U>::pushBack(U pB){
    Node<U> *nuevo_nodo=new Node<U>(pB);
    Node<U> *temp=head;
    if (head==nullptr){
        head=nuevo_nodo;
        cola=nuevo_nodo;
        size=size+1;
    }
    else{
        while(temp->getNext()!=nullptr){
            temp=temp->getNext();
        }
        temp->setNext(nuevo_nodo);
        cola=nuevo_nodo;
        size=size+1;

    }
}

template<typename U> void LinkedList<U>::insert(U ins, U pos){
    Node<U> *nuevo_nodo=new Node<U>(ins);
    Node<U> *temp=head;
    if (head==nullptr ){
        head= nuevo_nodo;
        //cola=nuevo_nodo;
        size++;
    }
    else if(pos==0){
        nuevo_nodo->setNext(head);
        head=nuevo_nodo;
        size++;

    }
    else if (pos<=size){
        Node<U> *nuevo_nodo=new Node<U>(ins);
        int cont=0;
        while (cont<pos-1){
            temp=temp->getNext();
            cont++;
        }
        nuevo_nodo->setNext(temp->getNext());
        temp->setNext(nuevo_nodo);
        size++;
    }
    else {
        cout<<"No es posible insertar en la posicion "<<pos<<endl;
    }
}

//void popBack();
//void popFront();
//void remove(U pos);

template<typename U> void LinkedList<U>::popBack(){
    Node<U> *temp=head;
    while(temp->getNext()->getNext()!=nullptr){
        temp=temp->getNext();
    }
    delete cola;
    temp->setNext(nullptr);
    cola=temp;
    size=size-1;
}

template<typename U> void LinkedList<U>::popFront(){
    Node<U> *temp=head;
    head=head->getNext();
    delete temp;
    size=size-1;
}

template<typename U> bool LinkedList<U>::search(U elem){
    Node<U> *temp=head;
    while(temp->getElem()!=elem){
        //temp=temp->getNext();
        temp=temp->getNext();
        return false;
    }
    return true;
    
}
template<typename U> void LinkedList<U>::remove(U pos){
    Node<U> *temp=head;

    if (pos==0){
        head=temp->getNext();
        delete temp;

        size--;
    }
    else if (pos<=size){
        int cont=0;
        Node<U> *temp2=nullptr;
        while (cont<pos){
            temp2=temp;
            temp=temp->getNext();
            cont++;
        }
        //temp2=temp;
        temp2->setNext(temp->getNext());
        delete temp;
        size--;
    }
}


template<typename U> void LinkedList<U>::print(){
    Node<U> *it =head;
    while(it!=nullptr){
        cout<<it->getElem()<<"  ";
        it=it->getNext();
    }
    cout<<endl;
}


template<typename U> LinkedList<U>::~LinkedList(){
    Node<U> *head_=head;
    cola=nullptr;
    while(head!=nullptr){
        head_=head->getNext();
        delete head;
        head=head_;
    }
}


template<typename U> Node<U>* LinkedList<U>::begin(){
    
    return head;
}


template<typename U> Node<U>*  LinkedList<U>::end(){
    Node<U> *it =head;
    while(it!=nullptr){
        it=it->getNext();
    }
    return it;
}




