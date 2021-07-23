#ifndef _NODE_H__
#define _NODE_H__

template <typename U>
class Node{
    private:
        U elem;
        Node* next;
    public:
        Node();
        Node(U E);

        U setElem(U element);
        U getElem();
        
        Node* setNext(Node* nextE);
        Node* getNext();

        
        
        //~Node();
};


#endif