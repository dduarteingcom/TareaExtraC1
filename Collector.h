#ifndef COLLECTOR_H
#define COLLECTOR_H
#include "Node.h"

class Node;

class Collector {
    public:
    Node* cHeadPtr; 

    Collector(){
        cHeadPtr = nullptr;
    }
    
    void insertF(Node* x);
    Node* deleteF();
    bool available();
    void showCol();

    friend class Node;
};
#endif 
