#include <iostream>
#include <fstream>

using namespace std;

class Collector {
    public:
    Collector(){
        headPtr = nullptr;
    }
    void insertF(Node* x);
    Node* deleteF();
    bool available();
    void showCol();
    Node* headPtr; 
};


class Node{
public:
    int data; // data del nodo
    Node* nextPtr; // puntero al siguiente nodo
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
void Collector::insertF(Node* x){
    if (this->headPtr = nullptr){
        this->headPtr = x;
        this->headPtr->setData(NULL);
    }
    else{
        x->setNextPtr(this->headPtr);
        this->headPtr= x;
        this->headPtr->setData(NULL);
    }
}
Node* Collector::deleteF(){
    Node* tmp = this->headPtr;
    this->headPtr=this->headPtr->nextPtr;
    return tmp;
}
bool Collector::available(){
    if (this->headPtr == nullptr){
        return false;
    }
    else{
        return true;
    }
}
void Collector::showCol(){
    if(this->headPtr != nullptr){
        for(Node* temp = this->headPtr; temp != nullptr; temp=temp->nextPtr){
            cout << temp;
        }
    }
}
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
        int size;
        Collector* reciclaje;

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
    if (false != false){
        "piringola";
    }
    else{
        Node* newPtr = new Node(data);
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
            size++;
        }
        else{
            Node* newPtr = new Node(data, headPtr);bool
            headPtr = newPtr;
            size++;
        }
    }

}
void List::deleteItem(int data){
    if (data == headPtr->data){
        cout << "mem: " << headPtr << endl;
        headPtr = headPtr->nextPtr;
    }
    else{
        Node* buscador = headPtr;
        Node* prev;
        while (buscador->data != data) {
            prev = buscador;
            buscador = buscador->nextPtr;
        }
        cout << prev->data << endl;
        cout << buscador->data << endl;
        prev->nextPtr = prev->nextPtr->nextPtr;
        cout << "mem: " << buscador << endl;
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

int main(){

    List nuevaLista;

    nuevaLista.insertFirst(99);
    nuevaLista.insertLast(100);
    nuevaLista.insertLast(101);
    nuevaLista.insertLast(102);
    nuevaLista.insertLast(103);

    nuevaLista.showList();

    nuevaLista.deleteItem(99);

    nuevaLista.showList();

    return 0;
}
