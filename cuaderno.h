#include<string>
#include<iostream>
#include"AtributosComunes.h"
#include"Dimensiones.h"

using namespace std;

#pragma once
class cuaderno : public AtributosComunes
{
private:
    //atributos
    AtributosComunes marcaCuaderno;
    AtributosComunes precioCuaderno;
    string tipoHojas;
    int numHojas;
    Dimensiones dimensionesCuaderno;

public:
    //constructores
    cuaderno();
    cuaderno(AtributosComunes laMarcaCuaderno, AtributosComunes elPrecioCuaderno, string elTipoHojas, int elNumHojas, Dimensiones lasDimensionesCuaderno);

    //métodos
    void setMarcaCuaderno(AtributosComunes laMarcaCuaderno);
    AtributosComunes getMarcaCuaderno();

    void setPrecioCuaderno(AtributosComunes elPrecioCuaderno);
    AtributosComunes getPrecioCuaderno();

    void setTipoHojas(string elTipoHojas);
    string getTipoHojas();

    void setNumHojas(int elNumHojas);
    int getNumHojas();

    void setDimensionesCuaderno(Dimensiones lasDimensionesCuaderno);
    Dimensiones getDimensionesCuaderno();

    void imprimirPrecioCuaderno();
};