/*
David Guerrero Aragon
A01285837
ITC
30 de mayo de 2024
En esta clase se hace uso de conceptos como pointers ademas de polimorfismo mas profundo tal como el uso de las funciones virtuales para poder utilizar distintos metodos dependiendo de la clase a la cual pertenece el metodo
*/

#ifndef POLIMORFISMO_H
#define POLIMORFISMO_H
#include "Video.h"
#include "Serie.h"
#include "Pelicula.h"
#include <fstream>
#include <sstream>
#include <iostream>

class Polimorfismo:Video{
private: 

    // Definicion de atributos
    const int MAX_VIDEOS=100;
    Video *arrPtrVideos[100];
    int cantidad;

public:

    // Constructores

    Polimorfismo();

    // Metodos modificadores

    void setPtrVideo(int index,Video *video);
    void setCantidad(int _cantidad);

    // Metodos de acceso

    Video* getPtrVideo(int index);
    int getCantidad();

    // Otros metodos

    void leerArchivo(string _nombre);
    void reporteInventario();
    void reporteCalificacion(double _calificacion);
    void reporteGenero(string _genero);
    void reportePeliculas();
    void reporteSeries();

};

#endif