#include "node.h"
template <typename U>
Node<U>::Node(){
    elem=0;
    next=nullptr;

}

template <typename U>
Node<U>::Node(U E){
    elem=E;
    next=nullptr;
}

template <typename U>
U Node<U>::setElem(U element){
    elem=element;
}

template <typename U>
U Node<U>::getElem(){
    return elem;
}


template <typename U>
Node<U>* Node<U>::setNext(Node<U>* nextE){
    next=nextE;
}

template <typename U>
Node<U>* Node<U>::getNext(){
    return next;
}