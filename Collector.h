#ifndef COLLECTOR_H
#define COLLECTOR_H

#include "Node.h"
#include "List.h"

class Node;
class List;

class Collector {
    friend class List;
    friend class Node;
    public:
    Node* cHeadPtr; 

    Collector(){
        cHeadPtr = nullptr;
        std::cout<<"HO";
    }
    
    void insertF(Node* x);
    Node* deleteF();
    bool available();
    void showCol();

    friend class Node;
};
#endif 
