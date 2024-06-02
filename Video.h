/*
David Guerrero Aragon
A01285837
ITC
30 de mayo de 2024
Para hacer esta clase aprendi las diferencias de hacer uso de elementos protected en una clase en lugar de usar elementos private como habia estado haciendo con anterioridad.
*/

#ifndef VIDEO_H
#define VIDEO_H
#include <string>
using namespace std;

class Video{
public:

    // Constructores

    Video();
    Video(string _id, string _titulo, int _duracion, string _genero, double _calificacion);

    // Metodos de acceso

    string getId();
    string getTitulo();
    int getDuracion();
    string getGenero();
    double getCalificacion();  

    // Metodos de mutacion

    void setId(string _id);
    void setTitulo(string _titulo);
    void setDuracion(int _duracion);
    void setGenero(string _genero);
    void setCalificacion(double _calificacion);

    // Otros metodos

    virtual string str();

protected:

    // Propiedades
    
    string id;
    string titulo;
    int duracion;
    string genero;
    double calificacion;

};

#endif