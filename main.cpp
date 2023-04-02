#include <iostream>

#include "Node.h"
#include "List.h"

using namespace std;

int main() {
    cout<< "Inicio" << endl;

    Collector* ptrReciclaje = new Collector();
    Node::setPtrReciclaje(ptrReciclaje);
    List nuevaLista;

    nuevaLista.insertFirst(99);
    nuevaLista.insertLast(100);
    nuevaLista.insertLast(101);
    nuevaLista.insertLast(102);
    nuevaLista.insertLast(103);

    nuevaLista.donda();

    nuevaLista.showList();

    nuevaLista.deleteItem(99); //aca ver

    nuevaLista.showList();

    nuevaLista.deleteItem(101);
    nuevaLista.deleteItem(102);

    cout << "AAAAAAAAAAAAAAAAAAAAAA";
    nuevaLista.showList();
    cout << "AAAAAAAAAAAAAAAAAAAAAA";
    nuevaLista.insertFirst(25);

    nuevaLista.insertLast(9);

    nuevaLista.showList();



    return 0;
}
