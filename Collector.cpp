//
// Created by esteban on 3/12/23.
//

#include "Collector.h"
#include "List.h"
#include "Node.h"

using namespace std;

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
    cout << "Soy pendejo"<< endl;
    if ( cHeadPtr->nextPtr == nullptr){
        Node* tmp = cHeadPtr;
        cout << tmp->getNextPtr()<<"TOdos somos agripinos";
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