#include "Polimorfismo.h"

// Constructores

Polimorfismo::Polimorfismo(){

    for (int index=0;index<100;index++){

        arrPtrVideos[index]=nullptr;

    }

    cantidad=0;

}

// Metodos modificadores

void Polimorfismo::setPtrVideo(int index,Video *video){

    // Validar index  >=0 &&index < cantidad
    if (index>=0 && index<cantidad){

        //Modificar el apuntador
        arrPtrVideos[index]=video;

    }

}

// Cambia el valor del atributo cantidad
void Polimorfismo::setCantidad(int _cantidad){

// Validar que cantidad se encuentre entre 1 y el maximo de video -1
    if (_cantidad>=0 && _cantidad<=MAX_VIDEOS){

        //Modificar el valor de cantidad
        cantidad=_cantidad;

    }
}

// Metodos de acceso

Video* Polimorfismo::getPtrVideo(int index){

    // Validar que exista el index
    if (index>=0 && index<cantidad){

        // Retornar el valor
        return arrPtrVideos[index];

    }

    // Si no existe

    return nullptr;

}

int Polimorfismo::getCantidad(){

    return cantidad;

}

// Otros metodos
    
void Polimorfismo::leerArchivo(string nombre){

    Serie *arrPtrSeries[50];
    Pelicula *arrPtrPeliculas[50];
    Episodio episodio;
    fstream entrada;
    string row[7];
    string line,word;
    int cantidad_peliculas=0;
    int cantidad_series=0;
    int cantidad_videos=0;
    int iR=0,index;
    double promedio;
    entrada.open(nombre,ios::in);

    while (getline(entrada,line)){
        stringstream s(line);
        iR=0;

        while (getline(s,word,',')){
            row[iR++]=word;
        }

        if (row[0]=="P"){
            arrPtrPeliculas[cantidad_peliculas]=new Pelicula(row[1],row[2],stoi(row[3]),row[4],stod(row[5]),stoi(row[6]));
            cantidad_peliculas++;
        }

        if (row[0]=="S"){
            arrPtrSeries[cantidad_series]=new Serie(row[1],row[2],stoi(row[3]),row[4],stod(row[5]));
            cantidad_series++;
        }

        if (row[0]=="E"){
            index=stoi(row[1])-500;
            arrPtrSeries[index]->agregaEpisodio (*(new Episodio(row[2],stoi(row[3]),stoi(row[4]))));
        }

    }

    for (int index=0;index<cantidad_series;index++){
        promedio=arrPtrSeries[index]->calculaPromedio();
        arrPtrSeries[index]->setCalificacion(promedio);
        arrPtrVideos[cantidad++]=arrPtrSeries[index];
    }

    for (int index=0;index<cantidad_peliculas;index++){
        arrPtrVideos[cantidad++]=arrPtrPeliculas[index];
    }


    entrada.close();

}

// Despliega todas las series y peliculas del arreglo
// Luego se despliegan las peliculas
void Polimorfismo::reporteInventario(){

    // Declaracion de contadores

    int contPeliculas,contSeries;
    
    // Inicializacion de contadores

    contPeliculas=0;
    contSeries=0;   
    cout<<cantidad<<endl;

    // Nos movemos a lo largo de la lista
    for (int index = 0;index<cantidad;index++){

        cout<<arrPtrVideos[index]->str()<<endl;

        if (typeid(*arrPtrVideos[index])==typeid(Pelicula)){

            contPeliculas++;

        }
        if (typeid(*arrPtrVideos[index])==typeid(Serie)){

            contSeries++;

        }
    }

    // Fuera del for desplegamos los totales
    cout<<"Peliculas = "<<contPeliculas<<endl;
    cout<<"Series = "<<contSeries<<endl;

}

void Polimorfismo::reporteCalificacion(double _calificacion){
    
    // Definimos el contador

    int total;
    
    // Inicializamos el contador
    
    total=0;

    for (int index=0;index<cantidad;index++){

        // Verificar si tiene la calificacion
        // Si es un apuntador se usa la notacion ->
        if (arrPtrVideos[index]->getCalificacion()==_calificacion){

            cout<<arrPtrVideos[index]->str()<<endl;
            total++;

        }
    }

    cout<<"Total = "<<total<<endl;

}

void Polimorfismo::reporteGenero(string _genero){

    // Definimos el contador

    int total;
    
    // Inicializamos el contador
    
    total=0;

    for (int index=0;index<cantidad;index++){

        // Verificar si tiene el genero deseado
        // Si es un apuntador se usa la notacion ->
        if (arrPtrVideos[index]->getGenero()==_genero){

            cout<<arrPtrVideos[index]->str()<<endl;
            total++;

        }
    }

    cout<<"Total = "<<total<<endl;

}

void Polimorfismo::reportePeliculas(){

    // Definimos el contador

    int total;
    
    // Inicializamos el contador
    
    total=0;

    for (int index=0;index<cantidad;index++){

        // Verificar si es una pelicula
        if (typeid(*arrPtrVideos[index])==typeid(Pelicula)){

            cout<<arrPtrVideos[index]->str()<<endl;
            total++;

        }
    }

    if (total==0){

        cout<<"No peliculas"<<endl;

    }
    else{

        cout<<"Total Peliculas = "<<total<<endl;
        
    }
    
}

void Polimorfismo::reporteSeries(){

    // Definimos el contador

    int total;
    
    // Inicializamos el contador
    
    total=0;

    for (int index=0;index<cantidad;index++){

        // Verificar si es una serie
        if (typeid(*arrPtrVideos[index])==typeid(Serie)){

            cout<<arrPtrVideos[index]->str()<<endl;
            total++;

        }
    }

    if (total==0){

        cout<<"No series"<<endl;

    }
    else{

        cout<<"Total Series = "<<total<<endl;

    }
    
}