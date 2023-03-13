//
// Created by esteban on 3/12/23.
//
/**
 * @file Node.h
 * @date 12/03/2023
 * @authors Esteban Secaida y Daniel Duarte
 */
#ifndef TAREAEXTRACLASE1DATOS2_NODE_H
#define TAREAEXTRACLASE1DATOS2_NODE_H

#include <fstream>
#include <iostream>

#include "List.h"
#include "Collector.h"
/**
 * @brief Declaración de las clase Collector que será requerida por la clase Node.
 */
class Collector;
/**
 * @brief Declaración de las clase List que será requerida por la clase Node.
 */
class List;

using namespace std;
/**
 * @brief Nodo que almacena un entero.
 */
class Node {
    friend class List;
    friend class Collector;

public:
    /**
     * @brief entero almacenado dentro de Node.
     */
    int data; // data del nodo
    /**
     * @brief Puntero hacia el siguiente nodo.
     */
    Node* nextPtr; // puntero al siguiente nodo
    /**
     * @brief Constructor sin data.
     */
    Node(){ // constructor sin data
        data = 0;
        nextPtr = nullptr;

    }
    /**
     * @brief Constructor con data.
     * @param x Entero que será almacenado como data.
     */
    Node (int x){ // constructor con data
        data = x;
        nextPtr = nullptr;
    }
    /**
     * @brief Constructor con data y ptr al siguiente.
     * @param x Entero que será almacenado como data.
     * @param sig Puntero hacia el siguiente nodo.
     */
    Node (int x, Node* sig){ // constructor con data y ptr al siguiente
        data = x;
        nextPtr = sig;
    }
    /**
     * @brief Constructor con data y puntero a collector.
     * @param x data
     * @param y puntero a collector.
     */
    Node(int x, Collector* y){
        data = x;
        nextPtr = nullptr;
        std::cout<<"HI";
    }
    /**
     * @brief Constructor con data, siguiente nodo y puntero a collector.
     * @param x data.
     * @param sig siguiente nodo del seleccionado.
     * @param y puntero a Collector.
     */
    Node (int x, Node* sig, Collector* y){ // constructor con data y ptr al siguiente
        data = x;
        nextPtr = sig;
    }
    /**
     * @brief Modifica la data del nodo.
     * @param x Nuevo entero para la data.
     */
    void setData(int x);
    /**
     * @brief Modifica el nodo siguiente del nodo seleccionado.
     * @param x Puntero hacia el nuevo siguiente.
     */
    void setNextPtr(Node* x);
    /**
     * @brief Se obtiene la data del nodo.
     * @return Data.
     */
    int getData();
    /**
     * @brief Se obtiene el nodo que le sigue al seleccionado.
     * @return Nodo siguiente.
     */
    Node* getNextPtr();
    /**
     * @brief Modifica el puntero hacia la instacia ptrReciclaje de tipo Collector.
     * @param collector Puntero hacia la instancia de tipo Collector.
     */
    static void setPtrReciclaje(Collector* collector);
    /**
     * @brief Puntero hacia la instancia de tipo Collector.
     */
    static Collector* ptrReciclaje;
    /**
     * @brief Sobrecarga del método new para almacenar datos en el heap.
     * @param size Tamaño en bytes requeridos para guardar en heap.
     * @return Puntero hacia el nuevo nodo creado.
     */
    void * operator new(size_t size); // overload de new
    /**
     * @brief Sobrecarga del método delete para eliminar del heap el nodo creado.
     * @param p Nodo a eliminar.
     */
    void operator delete(void * p);



};


#endif //TAREAEXTRACLASE1DATOS2_NODE_H
