//
// Created by esteban on 3/12/23.
//
/**
 * @file Collector.h
 * @date 12/03/2023
 * @authors Esteban Secaida y Daniel Duarte
 */
#ifndef TAREAEXTRACLASE1DATOS2_COLLECTOR_H
#define TAREAEXTRACLASE1DATOS2_COLLECTOR_H

#include "Node.h"
#include "List.h"
/**
 * @brief Declaración de las Clases Node y List que serán requeridas por la clase collector.
 */
class Node;
class List;
/**
 *@brief Lista enlazada simple que almacena la dirección en memoria de los nodos eliminados por la clase list.
 */
class Collector {
    /**
     * @brief Se le da acceso a las clase List.
     */
    friend class List;
    /**
     * @brief Se le da acceso a las clase Node.
     */
    friend class Node;
public:
    /**
     * @brief Puntero que corresponde al primer elemento almacenado en Collector.
     */
    Node* cHeadPtr;
    /**
     * @brief Constructor de Collector.
     */
    Collector(){
        cHeadPtr = nullptr;
        std::cout<<"HO";
    }
    /**
     * @brief Método que inserta el puntero resibido al principio de la lista.
     * @param x Puntero que será añadido.
     */
    void insertF(Node* x);
    /**
     * @brief Método que elimina de colector el primer puntero.
     * @return Puntero eliminado.
     */
    Node* deleteF();
    /**
     * @brief Método que comprueba si el collector posee elementos que puedan ser usados en la clase List.
     * @return Retorna true o false
     */
    bool available();
    /**
     * @brief Método que muestra todas direcciones en memoria guardadas en el Collector.
     */
    void showCol();

    friend class Node;

};


#endif //TAREAEXTRACLASE1DATOS2_COLLECTOR_H
