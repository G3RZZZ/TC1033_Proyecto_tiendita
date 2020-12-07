#include<string>
#include<iostream>
#include"AtributosComunes.h"

using namespace std;

#pragma once
class calc : public AtributosComunes
{
private:
    //atributos
    AtributosComunes precioMarcaCalc;
    AtributosComunes precioCalc;
    string type;

public:
    //constructores
    calc();
    calc(AtributosComunes elPrecioMarcaCalc, AtributosComunes elPrecioCalc, string thetype);

    //métodos
    void setPrecioMarcaCalc(AtributosComunes elPrecioMarcaCalc);
    AtributosComunes getPrecioMarcaCalc();

    void setPrecioCalc(AtributosComunes elPrecioCalc);
    AtributosComunes getPrecioCalc();

    void setType(string theType);
    string getType();

    void imprimirPrecioCalc();
};