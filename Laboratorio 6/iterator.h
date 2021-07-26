#ifndef _ITERATOR_H__
#define _ITERATOR_H_
#include"LinkedList.h"
#include"node.h"

template <typename U>
class Iterator{
    Node<U>* p;

    public:
        //Iterator();
        

        //U Iterator& operator *();
        U operator *();
        void  operator++(U);
        void operator=(Node<U>* it);
        bool operator==(Node<U>* it);
        bool operator!=(Node<U>* it);
};


#endif 
