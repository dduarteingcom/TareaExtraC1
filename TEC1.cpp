#include <iostream>
#include <fstream>

using namespace std;

class Collector {
    public:
    bool available;
    //Node *  list[1000];

    Collector() {
        available = false;

    }

};

    class Node{
    public:
     int data; // data del nodo
     Node* nextPtr; // puntero al siguiente nodo

     Node(){ //constructor sin data
        data = 0;
        nextPtr = nullptr;
     }
     Node (int x){ // constructor con data
        data = x;
        nextPtr = nullptr;
     }
     Node (int x, Node* sig){ //constructor con data y ptr al siguiente
        data = x;
        nextPtr = sig;
     }

     void setData(int x);
     void setNextPtr(Node* x);
     int getData();
     Node* getNextPtr();
};

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


class List{
    public:
        Node* headPtr; // puntero al head
        Node* tailPtr; //puntero al final
        int size;

        List(){ // constructor, siempre sin nodos
            headPtr = nullptr;
            tailPtr = nullptr;
            size = 0;
        }

        void setHeadData(int data);
        int getHeadData();
        void insertLast(int data);
        void insertFirst(int data);
        void deleteItem(int data);
};

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
        return headPtr->getData();
    }
    else{
        cout << "Lista no posee elementos" << endl;
        return -404;
    }
}
void List::insertLast(int data){
    if (false != false){
        "piringola";
    }
    else{
        Node* newPtr = new Node(data);
        if (headPtr == nullptr){
            headPtr = newPtr;
            tailPtr = newPtr;
            size++;
        }
        else{
            tailPtr->setNextPtr(newPtr);
            tailPtr = tailPtr->getNextPtr();
            size++;
        }
    }
}
void List::insertFirst(int data){
    if (false != false){
        "piringola";
        /*
        newPtr = newcollector.retrievePtr() // *pepe;
        *newPtr = new Node (data);
        if (headPtr == nullptr){
            headPtr = newPtr;
            tailPtr = newPtr;
            size++;
        }
        else {
            newPtr->setNextPtr(headPtr);
            headPtr = newPtr;
            size++;
        }
        */
    }
    else{
        if (headPtr == nullptr){
            Node* newPtr = new Node(data);
            headPtr = newPtr;
            tailPtr = newPtr;
            size++;
        }
        else{
            Node* newPtr = new Node(data, headPtr);
            headPtr = newPtr;
            size++;
        }
    }

}
void List::deleteItem(int data){
    "w";
}

int main(){

    List nuevaLista;
    nuevaLista.insertFirst(99);
    nuevaLista.insertFirst(100);
    nuevaLista.insertFirst(101);
    cout << nuevaLista.headPtr->getData() << endl;
    cout << nuevaLista.headPtr->nextPtr->getData() << endl;
    cout << nuevaLista.headPtr->nextPtr->nextPtr->getData() << endl;


    return 0;
}
