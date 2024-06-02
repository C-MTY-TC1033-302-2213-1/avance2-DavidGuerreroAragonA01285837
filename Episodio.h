/*
David Guerrero Aragon
A01285837
ITC
30 de mayo de 2024
En esta clase se hace uso de conocimiento acerca de metodos y atributos de las clases.
*/

#ifndef EPISODIO_H
#define EPISODIO_H
#include <string>
using namespace std;
class Episodio
{
public:

    // Metodos constructores

    Episodio();
    Episodio(string _titulo,int _temporada, int _calificacion);

    // Metodos de acceso

    int getTemporada();
    string getTitulo();
    int getCalificacion();

    // Metodos de mutacion

    void setTemporada(int _temporada);
    void setTitulo(string _titulo);
    void setCalificacion(int _calificacion);

    // Otros Metodos

    string str();

private:
    // Atributos
    
    int temporada;
    string titulo;
    int calificacion;
};

#endif