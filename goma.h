#include<string>
#include<iostream>
#include"AtributosComunes.h"
#include"Dimensiones.h"

using namespace std;

#pragma once
class goma : public AtributosComunes
{
private:
    //atributos
    AtributosComunes precioGoma;
    AtributosComunes marcaGoma;
    string type;
    Dimensiones dimensionesGoma;

public:
    //constructores
    goma();
    goma(AtributosComunes elPrecioGoma, AtributosComunes laMarcaGoma, string theType, Dimensiones lasDimensionesGoma);

    //métodos
    void setPrecioGoma(AtributosComunes elPrecioGoma);
    AtributosComunes getPrecioGoma();

    void setMarcaGoma(AtributosComunes laMarcaGoma);
    AtributosComunes getMarcaGoma();

    void setType(string theType);
    string getType();

    void setDimensionesGoma(Dimensiones lasDimensionesGoma);
    Dimensiones getDimensionesGoma();

    void imprimirPrecioGoma();
};