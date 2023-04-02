//
// Created by esteban on 3/12/23.
//

#ifndef TAREAEXTRACLASE1DATOS2_NODE_H
#define TAREAEXTRACLASE1DATOS2_NODE_H

#include <fstream>
#include <iostream>

#include "List.h"
#include "Collector.h"

class Collector;

class List;

using namespace std;

class Node {
    friend class List;
    friend class Collector;

public:
    int data; // data del nodo
    Node* nextPtr; // puntero al siguiente nodo

    Node(){ // constructor sin data
        data = 0;
        nextPtr = nullptr;

    }
    Node (int x){ // constructor con data
        data = x;
        nextPtr = nullptr;
    }
    Node (int x, Node* sig){ // constructor con data y ptr al siguiente
        data = x;
        nextPtr = sig;
    }
    Node(int x, Collector* y){
        data = x;
        nextPtr = nullptr;
        std::cout<<"HI";
    }
    Node (int x, Node* sig, Collector* y){ // constructor con data y ptr al siguiente
        data = x;
        nextPtr = sig;
    }

    void setData(int x);
    void setNextPtr(Node* x);
    int getData();
    Node* getNextPtr();
    static void setPtrReciclaje(Collector* collector);
    static Collector* ptrReciclaje;
    void * operator new(size_t size); // overload de new
    void operator delete(void * p);



};


#endif //TAREAEXTRACLASE1DATOS2_NODE_H
