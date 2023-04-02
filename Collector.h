//
// Created by esteban on 3/12/23.
//

#ifndef TAREAEXTRACLASE1DATOS2_COLLECTOR_H
#define TAREAEXTRACLASE1DATOS2_COLLECTOR_H

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


#endif //TAREAEXTRACLASE1DATOS2_COLLECTOR_H
