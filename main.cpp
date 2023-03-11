#include <iostream>
#include <fstream>
#include "List.h"
#include "Node.h"
#include "Collector.h"

using namespace std;

int main(){

    List nuevaLista;

    nuevaLista.insertFirst(99);
    nuevaLista.insertLast(100);
    nuevaLista.insertLast(101);
    nuevaLista.insertLast(102);
    nuevaLista.insertLast(103);

    //nuevaLista.showList();

    nuevaLista.deleteItem(99);

    //nuevaLista.showList();

    nuevaLista.deleteItem(101);
    nuevaLista.deleteItem(102);

    cout << "AAAAAAAAAAAAAAAAAAAAAA";
    nuevaLista.showList();
    cout << "AAAAAAAAAAAAAAAAAAAAAA";
    nuevaLista.insertFirst(25);
    
    nuevaLista.insertLast(9);

    nuevaLista.showList();
    nuevaLista.reciclaje->showCol();
    
    
    

    
    

    //FILO

    return 0;
}