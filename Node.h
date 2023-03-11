#include <fstream>
#ifndef NODE_H
#define NODE_H
#include "Collector.h"

class Collector;

class Node{
    
    public:
        int data; // data del nodo
        Node* nextPtr; // puntero al siguiente nodo
        Collector* ptrReciclaje; // Ptr al reciclaje que todos los nodos comparten

        Node(){ // constructor sin data
            data = 0;
            nextPtr = nullptr;
            ptrReciclaje = new Collector();
            
        }
        Node (int x){ // constructor con data
            data = x;
            nextPtr = nullptr;
            ptrReciclaje = nullptr;
        }
        Node (int x, Node* sig){ // constructor con data y ptr al siguiente
            data = x;
            nextPtr = sig;
            ptrReciclaje = nullptr;
        }
        Node(int x, Collector* y){
            data = x;
            nextPtr = nullptr;
            ptrReciclaje = y;
        }
        Node (int x, Node* sig, Collector* y){ // constructor con data y ptr al siguiente
            data = x;
            nextPtr = sig;
            ptrReciclaje = y;
        }

        void setData(int x);
        void setNextPtr(Node* x);
        int getData();
        Node* getNextPtr();
        void * operator new(size_t size); // overload de new
        //void operator delete(void * p);    
};

#endif