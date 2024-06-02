/*
David Guerrero Aragon
A01285837
ITC
20 de mayo de 2024
*/

#include "Pelicula.h"

// Metodos constructores

Pelicula::Pelicula():Video(){

    oscares=100;

}
Pelicula::Pelicula(string _id, string _titulo, int _duracion, string _genero, double _calificacion,int _oscares):Video(_id,_titulo,_duracion,_genero,_calificacion){
    
    oscares=_oscares;

}

// Metodos modificadores

void Pelicula::setOscares(int _oscares){

    oscares=_oscares;

}

// Metodos de acceso

int Pelicula::getOscares(){

    return oscares;

}

// Otros metodos

string Pelicula::str(){

    // Tenemos acceso a los atributos de la clase padre porque son Protected
    string str=id+" "+titulo+" "+to_string(duracion)+" "+genero+" "+to_string(calificacion)+" "+to_string(oscares);
    return str;
    
}