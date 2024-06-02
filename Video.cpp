/*
David Guerrero Aragon
A01285837
ITC
20 de mayo de 2024
*/

#include "Video.h"

Video::Video()
{

    id="A01285837";
    titulo="David Guerrero Aragon";
    duracion=1000;
    genero="Masculino";
    calificacion=100;

}


Video::Video(string _id, string _titulo, int _duracion, string _genero, double _calificacion){

    id=_id;
    titulo=_titulo;
    duracion=_duracion;
    genero=_genero;
    calificacion=_calificacion;

}

// Metodos de acceso

string Video:: getId(){

    return id;

}
string Video::getTitulo(){

    return titulo;

}
int Video::getDuracion(){

    return duracion;

}
string Video::getGenero(){

    return genero;

}
double Video::getCalificacion(){

    return calificacion;

}

// Metodos de mutacion

void Video::setId(string _id){

    id=_id;

}
void Video::setTitulo(string _titulo){

    titulo=_titulo;

}
void Video::setDuracion(int _duracion){

    duracion=_duracion;

}
void Video::setGenero(string _genero){

    genero=_genero;

}
void Video::setCalificacion(double _calificacion){

    calificacion=_calificacion;

}

// Otros metodos

string Video::str(){

    string str=id+" "+titulo+" "+to_string(duracion)+" "+genero+" "+to_string(calificacion);
    return str;
    
}