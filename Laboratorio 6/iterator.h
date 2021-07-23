#ifndef _ITERATOR_H__
#define _ITERATOR_H_
#include"LinkedList.h"
#include<iostream>
using namespace std;

template <typename U>class Iterator;

template <typename U>
class Iterator{
    private:
        Node<U> *p;

    public:
        Iterator();

        //U Iterator& operator *();
        U  operator *();
        void  operator ++();
        bool operator=(const Iterator&);
};


#endif 
