#include<iostream>
using namespace std;
#include"LinkedList.h"
#include"node.h"
#include"LinkedList.cpp"
#include "iterator.h"
int main(){
    LinkedList <int> lista;
    lista.pushFront(99);
    lista.pushBack(5);
    lista.pushBack(3);
    lista.insert(100,2);
    lista.insert(1111,0);
    //lista.insert(1111,8);

    
    lista.print();
    lista.remove(2);
    //cout<< endl;
    
    lista.print();
    lista.popFront();
    lista.print();
    lista.popBack();
    lista.print();


    cout<< endl;
    //lista.search(3);

    //for (Iterator <int>*it=lista.begin(); it!=lista.end();it++){
        //cout<<*it<<endl;
    //}
	    

    return 0;
}