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

class List{
    public:
        Node* headPtr; // puntero al head
        Node* tailPtr;
        int size;

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

        void insertFirst(int data){
            if (false != false) {
                "piringola";
                /*
                newPtr = newcollector.retrievePtr() / *pepe;
                *newPtr = new Node (69);
                if (headPtr == nullptr){
                    headPtr = newPtr;
                    tailPtr = newPtr;
                    size++;
                }
                else {
                    newPtr->setNext(headPtr);
                    headPtr = newPtr;
                    size++;
                }
                */ 
            }
            else {
                Node* newPtr = new Node(data);
                if (headPtr == nullptr){
                    headPtr = newPtr;
                    tailPtr = newPtr;
                    size++;
                }
                else {
                    newPtr->setNext(headPtr);
                    headPtr = newPtr;
                    size++;
                }
            }
        }

        void deleteItem(int data) {

        }


    };

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
