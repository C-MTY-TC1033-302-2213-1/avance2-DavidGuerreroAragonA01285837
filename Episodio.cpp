/*
David Guerrero Aragon
A01285837
ITC
20 de mayo de 2024
*/

#include "Episodio.h"

// Metodos constructores

Episodio::Episodio(){

    titulo="Episodio prueba";
    temporada=1;
    calificacion=7.5;
    
}

Episodio::Episodio(string _titulo,int _temporada, int _calificacion){

    titulo=_titulo;
    temporada=_temporada;
    calificacion=_calificacion;

}

// Metodos de acceso

string Episodio::getTitulo(){

    return titulo;

}
int Episodio::getTemporada(){

    return temporada;

}
int Episodio::getCalificacion(){

    return calificacion;

}

// Metodos de mutacion

void Episodio::setTemporada(int _temporada){

    temporada=_temporada;

}
void Episodio::setTitulo(string _titulo){

    titulo=_titulo;

}
void Episodio::setCalificacion(int _calificacion){

    calificacion=_calificacion;

}
// Otros Metodos

string Episodio::str(){

    return titulo+" "+to_string(temporada)+" "+to_string(calificacion);

}