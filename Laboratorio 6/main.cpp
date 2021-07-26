#include<iostream>
using namespace std;
#include"LinkedList.h"
#include"node.h"
#include"LinkedList.cpp"
#include"iterator.cpp"

#include<list>
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
    //lista.search(3);

    cout<< "------------Iterator-------------"<<endl;
    

    //cout<<lista.begin()<<endl;
    Iterator <int>it;
    for (it=lista.begin() ; it!=lista.end() ; it++){
        cout<<*it<<endl;
    }
	    


    cout<< "------------Iterator STL-------------"<<endl;
    //list<int> l;
    //list<int> l(A);
    //l=A;
    //l.push_front(3);
    //l.push_front(6);
    //l.push_front(333);
    //l.push_front(99);
    //list<int>::iterator<int> it2;
    //for (it2=l.begin() ; it2!=l.end() ; it2++){
    //    cout<<*it2<<endl;
    //}
    std::list<int> lst1;
 
 
	for (int i = 0; i < 3; i++)
	{
		lst1.push_back(i + 1);
	}// 1 2 3
	for (int i = 0; i < 3; i++)//3 2 1 1 2 3
	{
		lst1.push_front(i + 1);
	}

    lst1.push_front(333);
    
    lst1.pop_back();
    lst1.pop_front();
    lst1.remove(3);//borra todos los elementos iguales a 3

    cout<<"tam: "<<lst1.size()<<endl;


    list<int>::iterator it2;
    for (it2=lst1.begin() ; it2!=lst1.end() ; it2++){
        cout<<*it2<<endl;
    }
    
    return 0;
}