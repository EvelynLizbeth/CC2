#include"iterator.h"
#include"Node.h"

template<typename U> void Iterator<U>::operator=(Node<U> *it){
    p=it;
}

template<typename U> bool Iterator<U>::operator==(Node<U> *it){
    return p==it;
}


template<typename U> U Iterator<U>::operator *() 
{
    return p->getElem();
}

template<typename U> void Iterator<U>::operator ++(U)
{

    p=p->getNext();
}


template<typename U> bool Iterator<U>::operator !=(Node<U> *it)
{
    return p!=it;
}





