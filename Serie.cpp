/*
David Guerrero Aragon
A01285837
ITC
20 de mayo de 2024
*/

#include "Serie.h"

// Metodos constructores

Serie::Serie():Video(){

    cantidad=0;

}

Serie::Serie(string _id, string _titulo, int _duracion, string _genero, double _calificacion){

    id=_id;
    titulo=_titulo;
    duracion=_duracion;
    genero=_genero;
    calificacion=_calificacion;

}

// Metodos modificadores

void Serie::setEpisodio(int posicion, Episodio episodio){

    if (posicion>=0 && posicion<cantidad){

        episodios[posicion]=episodio;

    }

}
void Serie::setCantidad(int _cantidad){

    cantidad=_cantidad;

}

// Metodos de acceso

Episodio Serie::getEpisodio(int posicion){

    Episodio epi;

    // Validar que el episodio existe

    if (posicion>=0 && posicion<cantidad){

        return episodios[posicion];

    }

    return epi;

}
int Serie::getCantidad(){

    return cantidad;

}

// Otros metodos

double Serie::calculaPromedio(){

    // Declaracion de variables
    double acumulado;
    
    // Inicializacion de variables
    acumulado=0;

    for (int index=0;index<cantidad;index++){

        acumulado+=episodios[index].getCalificacion();

    }

    // Validar que tenga episodios
    if (cantidad>0){

        return acumulado/cantidad;

    }
    else {

        return 0;

    }

}

// Vamos a hacer overriding del metodo str()
string Serie::str(){

    calculaDuracion();

    string str= id + " " +titulo+" "+ to_string(duracion)+" "+genero+" "+to_string(calculaPromedio())+" "+ to_string(cantidad)+"\n";
    
    if (cantidad>0){

        for (int index=0;index<cantidad;index++){

            str+=episodios[index].str()+"\n";

        }

        return str;

    }
    else {

        return str;

    }

}

void Serie::agregaEpisodio(Episodio episodio){

    if (cantidad<5){

        episodios[cantidad++]=episodio;

    }

}

void Serie::calculaDuracion(){

    // Creacion de variables
    Episodio dummy;

    // Inicializacion de variables
    duracion=0;
    
    for (int index=0;index<cantidad;index++){

        duracion+=getEpisodio(index).getTemporada();

    }
    
}