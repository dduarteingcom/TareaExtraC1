#include <iostream>
#include <fstream>

using namespace std;



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

        friend class Collector;
};

//-------------------------------------------------

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

//------------------------------------------------

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

//------------------------------------------------

void Collector::insertF(Node* x){
    if (cHeadPtr == nullptr){
        cHeadPtr = x;
        cHeadPtr->setData(0); //se va a usar 0 en vez de null
        cHeadPtr->setNextPtr(nullptr);
    }
    else{
        x->setNextPtr(cHeadPtr); //aca
        cHeadPtr= x;
        cHeadPtr->setData(0);
    }
}
Node* Collector::deleteF(){
    if ( cHeadPtr->nextPtr == nullptr){
        Node* tmp = cHeadPtr;
        cHeadPtr = nullptr;
        return tmp;
    }
    else{
        Node* tmp = cHeadPtr;
        cHeadPtr = cHeadPtr->nextPtr;
        return tmp;
    }
    
}
bool Collector::available(){
    if (cHeadPtr == nullptr){
        cout << "opa" << endl;
        return false;
    }
    else{
        cout << "estoy en true" << endl;
        return true;
    }
}
void Collector::showCol(){
    if(cHeadPtr != nullptr){
        for(Node* temp = cHeadPtr; temp != nullptr; temp=temp->nextPtr){
            cout << temp << endl;
        }
    }
    else{
        cout << "estoy empty :(" << endl;
    }
}

//------------------------------------------------

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

//------------------------------------------------

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
            Node* newPtr = reciclaje->deleteF();
            newPtr->setNextPtr(headPtr);
            headPtr = newPtr;
            headPtr->setData(data);
            size++;
            reciclaje->showCol();
            cout << "estoy aqui" << endl;
            cout << newPtr << " - " << newPtr->data << endl;

        }
    }
    else{
        if (headPtr == nullptr){
            Node* newPtr = new Node(data);
            headPtr = newPtr;
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
    if (data == headPtr->data){
        Node* temp = headPtr;
        cout << "mem: " << headPtr << endl;
        headPtr = headPtr->nextPtr;
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

//------------------------------------------------

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

    nuevaLista.deleteItem(101);

    nuevaLista.showList();

    nuevaLista.insertFirst(25);
    nuevaLista.reciclaje->showCol();
    nuevaLista.insertLast(9);

    nuevaLista.showList();
    
    

    //FILO

    return 0;
}