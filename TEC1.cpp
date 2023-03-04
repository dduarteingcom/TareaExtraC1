#include <iostream>
<<<<<<< HEAD
//aafdgdfg
//dfasdf
int a;
class Node{
    public:
    
     int data;
     Node * next;
     Node(){
        data = 0;
=======

using namespace std;

class Collector {
    public:
    bool available;
    Node *  list[1000];

    Collector() {
        available = false;

    }


    
};

class Node{
    public:
     int data; // data del nodo
     Node * next; // puntero al siguiente nodo

     Node(){  //constructor
        data = NULL;
>>>>>>> cd8b05dbff3ab91ddf755bc7cc7f759e16819598
        next = NULL;
     }
     Node (int data){ // constructor con data
        this->data = data;
        this->next = NULL;
     }

     void setData(int x){ // setear data
        data = x;
     }
     int getData(){ // obtener data
        return data;
     }
};

class List{
    public:
    Node * head; // El nodo head de la lista
    
    Collector reciclaje; // el collector propio de la instancia de la lista
    List(){ // constructor, siempre sin nodos
        head = NULL;

    }
    
    void setHead(Node* head){
        this->head = head;
    }
    int getHead(){
        return head->data;
    }
    void insert(int data){
        //if 
        Node* newNode = new Node(data);
        if(head == NULL){
            head = newNode;
        }
        else{
            newNode->next = this->head;
            this->head=newNode;
        }
    }
};

int main(){
    return 0;
}
