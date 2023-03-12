#ifndef LIST_H
#define LIST_H

#include "Node.h"
#include "Collector.h"

class Node;
class Collector;


class List{
    friend class Node;
    friend class Collector;
    public:
        Node* headPtr; // puntero al head
        int size; // size de lista
        Collector* reciclaje; //ptr a collector

        List(){ // constructor, siempre sin nodos
            
            size = 0;
            reciclaje = new Collector();
            headPtr = nullptr;
            std::cout<<"HE";
        }

        void setHeadData(int data);
        int getHeadData();
        void insertLast(int data);
        void insertFirst(int data);
        void deleteItem(int data);
        void showList();
        void donda();
};

#endif