#ifndef _NODE_H__
#define _NODE_H__


class Node{
    private:
        int elem;
        Node* next;
    public:
        Node();
        Node(int E);

        int setElem(int element);
        int getElem();
        
        Node* setNext(Node* nextE);
        Node* getNext();

        
        
        //~Node();
};

Node::Node(){
    elem=0;
    next=nullptr;

}


Node::Node(int E){
    elem=E;
    next=nullptr;
}


int Node::setElem(int element){
    elem=element;
}

int Node::getElem(){
    return elem;
}


Node* Node::setNext(Node* nextE){
    next=nextE;
}
Node* Node::getNext(){
    return next;
}

#endif