#include "Collector.h"
using namespace std;


Collector* pepe = new Collector();

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
void* Node::operator new (size_t size){
    
    
    if (pepe->available() != false){
        Node* newPtr = pepe->deleteF();
        return newPtr;
    
    }
    else{
        void * newPtr = ::operator new(size); // new sin memoria reciclada
        return newPtr;
    }
    
}