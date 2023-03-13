//
// Created by esteban on 3/12/23.
//

#include "Node.h"
#include "Collector.h"

using namespace std;

void Node::setData(int x){
    data = x;
}
void Node::setNextPtr(Node* x){
    nextPtr = x;
}
int Node::getData(){
    return data;
}
Node* Node::getNextPtr(){
    return nextPtr;
}
void Node::setPtrReciclaje(Collector* collector) {
    ptrReciclaje = collector;
}
Collector* Node::ptrReciclaje = nullptr;
void* Node::operator new (size_t size){ //NEW


    if (ptrReciclaje->available() != false){
        Node* newPtr = ptrReciclaje->deleteF();
        ptrReciclaje->showCol();
        return newPtr;

    }
    else{
        void * newPtr = ::operator new(size); // new sin memoria reciclada
        return newPtr;
    }

}
void Node::operator delete(void* p) { //DELETE

    cout << "Entre al delete hd" << endl;
    ptrReciclaje->insertF(static_cast<Node*>(p));
    ptrReciclaje->showCol();
}