//
// Created by esteban on 3/12/23.
//
/**
 * @file List.h
 * @date 12/03/2023
 * @authors Esteban Secaida y Daniel Duarte
 */
#ifndef TAREAEXTRACLASE1DATOS2_LIST_H
#define TAREAEXTRACLASE1DATOS2_LIST_H

#include "Node.h"
#include "Collector.h"
/**
 * @brief Declaración de la clase Node que será empleada por la clase List.
 */
class Node;
/**
 * @brief Declaración de la clase Collector que será empleada por la clase List.
 */
class Collector;

/**
 * @brief Lista simplente enlazada que inserta y elimina nodos.
 */
class List {
    friend class Node;
    friend class Collector;
public:
    /**
     * @brief Puntero hacia la cabeza de la lista.
     */
    Node* headPtr; // puntero al head
    /**
     * @brief Tamaño de la lista.
     */
    int size; // size de lista
    //Collector* reciclaje; //ptr a collector
    /**
     * @brief Constructor de la clase List.
     */
    List(){ // constructor, siempre sin nodos

        size = 0;
        //reciclaje = new Collector();
        headPtr = nullptr;
        std::cout<<"HE";
    }
    /**
     * @brief Modifica la data de la cabeza de la lista.
     * @param data Nueva data.
     */
    void setHeadData(int data);
    /**
     * @brief Retorna la data de la cabeza de la lista.
     * @return Data de la cabeza.
     */
    int getHeadData();
    /**
     * @brief Inserta nodos al final de la lista.
     * @param data Data que tendrá el nodo.
     */
    void insertLast(int data);
    /**
     * @brief Inserta nodos al inicio de la lista.
     * @param data Data que tendrá el nodo.
     */
    void insertFirst(int data);
    /**
     * @brief Elimina nodo de la lista.
     * @param data Data con la que se buscará el nodo a eliminar.
     */
    void deleteItem(int data);
    /**
     * @brief Método que muestra todas las data de los nodos presentes en la lista.
     */
    void showList();

};


#endif //TAREAEXTRACLASE1DATOS2_LIST_H
