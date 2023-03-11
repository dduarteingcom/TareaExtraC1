
#ifndef LIST_H
#define LIST_H
#include "Node.h"
#include "Collector.h"

class List{
    public:
        Node* headPtr; // puntero al head
        int size; // size de lista
        Collector* reciclaje; //ptr a collector

        List(){ // constructor, siempre sin nodos
            headPtr = nullptr;
            size = 0;
            reciclaje = new Collector();
        }

        void setHeadData(int data);
        int getHeadData();
        void insertLast(int data);
        void insertFirst(int data);
        void deleteItem(int data);
        void showList();
};

#endif