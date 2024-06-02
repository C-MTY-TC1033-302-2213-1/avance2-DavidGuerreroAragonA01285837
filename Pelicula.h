/*
David Guerrero Aragon
A01285837
ITC
30 de mayo de 2024
En esta clase se hace uso de los elementos de herencia en donde esta clase es una clase hija y hereda ciertos atributos. Ademas se hace uso de elemento tales como el overriding de funciones para tener un metodo std distinto a el de la clase padre
*/

#ifndef PELICULA_H
#define PELICULA_H
#include "Video.h"

class Pelicula:public Video
{
private:

    // Atributos

    int oscares;

public:

    // Constructores
    
    Pelicula();
    Pelicula(string _id, string _titulo, int _duracion, string _genero, double _calificacion,int _oscares);

    // Metodos modificadores

    void setOscares(int _oscares);

    // Metodos de acceso

    int getOscares();

    // Otros metodos

    string str();

};

#endif