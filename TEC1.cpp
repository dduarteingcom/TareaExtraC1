#include <iostream>
//aafdgdfg
//dfasdf
int a;
class Node{
    public:
    
     int data;
     Node * next;
     Node(){
        data = 0;
        next = NULL;
     }
     Node (int data){
        this->data = data;
        this->next = NULL;
     }
     void setData(int x){
        data = x;
     }
     int getData(){
        return data;
     }
};
class List{
    public:
    Node* head;
    List(){
        head = NULL;
    }
    
    void setHead(Node* head){
        this->head = head;
    }
    int getHead(){
        return head->data;
    }
    void insert(int data){
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
