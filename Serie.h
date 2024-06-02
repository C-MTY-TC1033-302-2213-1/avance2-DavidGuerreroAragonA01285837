/*
David Guerrero Aragon
A01285837
ITC
30 de mayo de 2024
Para crear esta clase hice uso de conceptos nuevos como herencia y composicion.
*/

#ifndef SERIE_H
#define SERIE_H

// Para herencia

#include "Video.h"

// Para composicion

#include "Episodio.h"


class Serie: public Video{

private:

    // Atributos

    Episodio episodios[5];
    int cantidad;

public:

    // Metodos constructores

    Serie();
    
    Serie(string _id, string _titulo, int _duracion, string _genero, double _calificacion);

    // Metodos modificadores

    void setEpisodio(int _posicion, Episodio episodio);
    void setCantidad(int _cantidad);

    // Metodos de acceso

    Episodio getEpisodio(int _posicion);
    int getCantidad();

    // Otros metodos

    double calculaPromedio();
    string str();
    void agregaEpisodio(Episodio _episodio);
    void calculaDuracion();

};

#endif