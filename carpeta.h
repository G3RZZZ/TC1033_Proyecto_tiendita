#include<iostream>
#include"AtributosComunes.h"
#include"Dimensiones.h"

using namespace std;

#pragma once
class carpeta : public AtributosComunes
{
private:
    //atributos
    AtributosComunes marcaCarpeta;
    AtributosComunes precioCarpeta;
    Dimensiones dimensionesCarpeta;

public:
    //constructores
    carpeta();
    carpeta(AtributosComunes laMarcaCarpeta, AtributosComunes elPrecioCarpeta, Dimensiones lasDimensionesCarpeta);

    //Métodos
    void setMarcaCarpeta( AtributosComunes laMarcaCarpeta);
    AtributosComunes getMarcaCarpeta();

    void setPrecioCarpeta( AtributosComunes elPrecioCarpeta);
    AtributosComunes getPrecioCarpeta();

    void setPrecioMarcaCarpeta(Dimensiones lasDimensionesCarpeta);
    Dimensiones getDimensionesCarpeta();

    void imprimirPrecioCarpeta();

};