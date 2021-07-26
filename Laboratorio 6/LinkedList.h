#ifndef __LINKEDLIST_H__
#define __LINKEDLIST_H__
#include"node.h"
#include<iostream>
//#include "iterator.h"

template <typename U>
class LinkedList{
    private:
        int size;
        Node<U>* head;
        Node<U>* cola; 
    public:
        LinkedList();
        LinkedList(const LinkedList<U> &N);

        void pushFront(U pF);
        void pushBack(U pB);
        void insert(U ins, U pos);

        
        void popBack();
        void popFront();
        void remove(U pos);

        bool search(U e);

        Node<U>* begin();
        Node<U>* end();
        //void buscar();


        void print();


        ~LinkedList();

        
};
#endif