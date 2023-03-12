#include <iostream>
#include <fstream>
#include "List.h"
#include "Node.h"
#include "Collector.h"

using namespace std;


void List::setHeadData(int data){
    if (size != 0){
        headPtr->setData(data);
    }
    else{
        cout << "Lista no posee elementos" << endl;
    }
}
int List::getHeadData(){
    if (size != 0){
        return headPtr->data;
    }
    else{
        cout << "Lista no posee elementos" << endl;
        return -404;
    }
}
void List::insertLast(int data){

    //Node* newPtr = new Node(data);

    /*
    if (reciclaje->available() != false){
        Node* newPtr = reciclaje->deleteF();
        if (headPtr == nullptr){
            headPtr = newPtr;
            headPtr->setData(data);
            headPtr->setNextPtr(nullptr);
            size++;
            cout << newPtr << endl;
            reciclaje->showCol();
        }
        else{
            Node* temp = headPtr;
            while (temp->nextPtr != nullptr){
                temp = temp->nextPtr;
            }
            temp->setNextPtr(newPtr);
            newPtr->setNextPtr(nullptr);
            newPtr->setData(data);
            size++;
            cout << newPtr << " - " << newPtr->data << endl;
        }
    }
    */
   Node* newPtr = new Node(data, reciclaje);
    if (headPtr == nullptr){
        headPtr = newPtr;
        size++;
    }
    else{
        Node* temp = headPtr;
        while (temp->nextPtr != nullptr){
            temp = temp->nextPtr;
        }
        temp->setNextPtr(newPtr);
        size++;
    }
}
void List::insertFirst(int data){
    /*
    if (reciclaje->available() != false){
        Node* newPtr = reciclaje->deleteF();
        
        if (headPtr == nullptr){
            headPtr = newPtr;
            headPtr->setData(data);
            headPtr->setNextPtr(nullptr);
            size++;
            reciclaje->showCol();

        }
        else{
            newPtr->setNextPtr(headPtr);
            headPtr = newPtr;
            headPtr->setData(data);
            size++;
            reciclaje->showCol();
            cout << "estoy aqui" << endl;
            cout << newPtr << " - " << newPtr->data << endl;

        }
    }
    */
    
    if (headPtr == nullptr){
            Node* newPtr = new Node(data, reciclaje);
            headPtr = newPtr;
            size++;
        }
    else{
        Node* newPtr = new Node(data, headPtr, reciclaje);
        headPtr = newPtr;
        size++;
    }

}
void List::deleteItem(int data){
    if (data == headPtr->data){
        Node* temp = headPtr;
        cout << "mem: " << headPtr << endl;
        headPtr = headPtr->nextPtr;
        //delete(temp);
        reciclaje->insertF(temp);
        reciclaje->showCol();
        size--;
        
        
    }
    else{
        Node* buscador = headPtr;
        Node* prev;
        while (buscador->data != data) {
            prev = buscador;
            buscador = buscador->nextPtr;
        }
        //cout << prev->data << endl;
        //cout << buscador->data << endl;
        prev->nextPtr = buscador->nextPtr; // prev->nextPtr = prev->nextPtr->nextPtr;
        cout << "mem: " << buscador << endl;
        reciclaje->insertF(buscador);
        reciclaje->showCol();
        size--;
    }
    
}
void List::showList(){
    Node* temp;
    if (headPtr == nullptr){
        cout << "No hay nada que mostrar, lo siento amiguito" << endl;
    }
    else{
        temp = headPtr;
        while(temp){
            cout << temp->data << " - ";
            temp = temp->nextPtr;
        }
        cout << endl;
    }
}
void List::donda(){
    cout << "kanye" << endl;
}