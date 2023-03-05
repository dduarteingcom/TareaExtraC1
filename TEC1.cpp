#include <iostream>
#include <fstream>

using namespace std;
class Node{
    public:
    
     int data;
     Node * next;
     Node(){
        data = 0;
     }
     void new (int six){
    
}
}



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
     Node* next; // puntero al siguiente nodo

     Node(){
        data = NULL;
        next = nullptr;
     }

     Node (int x){ // constructor con data
        data = x;
        next = nullptr;
     }

     void setData(int x){ // setear data
        data = x;
     }

     void setNext(Node* x){
        next = x;
     }
     int getData(){ // obtener data
        return data;
     }

};

class List{
    public:
    Node inicio; // El nodo head de la lista
    Node* head = &inicio; // puntero al head
    //Collector reciclaje; // el collector propio de la instancia de la lista
    List(){ // constructor, siempre sin nodos
        head = NULL;

    }
    void setHead(Node* head){
        this->head = head;

    void setHead(int data){
         head->setData(data);

    }
    int getHead(){
        return head->getData();
    }
    void insert(int data){
        Node newNode(data);
        if (false != false){
            "piringola";
        }
        else{
            if(inicio.data == NULL){
            inicio = newNode;
            cout << "entre al inicio porque no habia nada" << endl;


            }
            else{
            Node temp = inicio;
            Node* tempPtr = &temp;
            cout << temp.getData() << endl;
            inicio = newNode;
            inicio.setNext(tempPtr);
            cout << "entre al inicio pero si habia algo" << endl;

            }
        }
    }
};

int main(){

    List nuevaLista;
    nuevaLista.insert(389);
    cout << nuevaLista.inicio.getData() << endl;
    nuevaLista.insert(999);
    cout << nuevaLista.inicio.getData() << endl;
    cout << nuevaLista.inicio.next->getData() << endl;


    return 0;
}
