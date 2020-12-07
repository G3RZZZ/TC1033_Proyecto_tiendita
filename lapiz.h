#include<string>
#include<iostream>
#include"AtributosComunes.h"
#include"Dimensiones.h"

using namespace std;

#pragma once
class lapiz : public AtributosComunes
{
private:
    //atributos
    AtributosComunes precioLapiz;
    AtributosComunes marcaLapiz;
    string type;
    string eraser;
    Dimensiones dimensionesLapiz;

public:
    //constructores
    lapiz();
    lapiz(AtributosComunes elPrecioLapiz, AtributosComunes laMarcaLapiz, string theType, string theEraser, Dimensiones lasDimensionesLapiz);

    //métodos
    void setPrecioLapiz(AtributosComunes elPrecioLapiz);
    AtributosComunes getPrecioLapiz();

    void setMarcaLapiz(AtributosComunes laMarcaLapiz);
    AtributosComunes getMarcaLapiz();

    void setType(string theType);
    string getType();

    void setEraser(string theEraser);
    string getEraser();

    void setDimensionesLapiz(Dimensiones lasDiemnsionesLapiz);
    Dimensiones getDimensionesLapiz();

    void imprimirPrecioLapiz();
    
};