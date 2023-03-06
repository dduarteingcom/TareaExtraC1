#include <iostream>
#include <fstream>

using namespace std;


class Collector {
    public:
    Collector(){
        headPtr = nullptr;
    }
    void insertF(Node* x);
    void deleteF();
    Node* headPtr; 
};


class Node{
public:
    int data; // data del nodo
    Node* nextPtr; // puntero al siguiente nodo

    Node(){
    data = 0;
    nextPtr = nullptr;
    }

    Node (int x){ // constructor con data
    data = x;
    nextPtr = nullptr;
    }
    void setData(int x){ // setear data
    data = x;
    }

    void setNext(Node* x){
    nextPtr = x;
    }
    int getData(){ // obtener data
    return data;
    }
    Node* getNexPtrt() {
    return nextPtr;
    }

};
void Collector::insertF(Node* x){
    if (this->headPtr = nullptr){
        this->headPtr = x;
    }
    else{
        x->setNext(this->headPtr);
        this->headPtr= x;

    }
}

class List{
    public:
        Node* headPtr; // puntero al head
        Node* tailPtr;
        int size;
        //Collector* reciclaje; // el collector propio de la instancia de la lista
        List(){ // constructor, siempre sin nodos
            headPtr = nullptr;
            tailPtr = nullptr;
            size = 0;

        }
        void setHead(int data){
            if (size != 0){
                 headPtr->setData(data);
            }
            else{
                cout << "Lista no posee elementos" << endl;
            }
           
        }
        int getHead(){
            if (size != 0){
                 return headPtr->getData();
            }
            else{
                cout << "Lista no posee elementos" << endl;
            }
            
        }
        void insertLast(int data){
            Node* newPtr = new Node(data);
            if (false != false){
                "piringola";
            }
            else{
                if(headPtr == nullptr){
                    headPtr = newPtr;
                    tailPtr = newPtr;
                    size++;

                }
                else{
                     tailPtr->setNext(newPtr);
                     tailPtr = tailPtr->getNexPtrt();
                     size++;

                }
            }
        }
    };

int main(){

    List nuevaLista;
   nuevaLista.insertLast(99);
   nuevaLista.insertLast(100);
   nuevaLista.insertLast(101);
   cout << nuevaLista.headPtr->getData() << endl;
   cout << nuevaLista.headPtr->nextPtr->getData() << endl;
   cout << nuevaLista.headPtr->nextPtr->nextPtr->getData() << endl;
    return 0;

}

