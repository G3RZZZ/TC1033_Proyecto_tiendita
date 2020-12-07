#include<string>
#include<iostream>
#include"AtributosComunes.h"

using namespace std;

#pragma once
class pluma : public AtributosComunes
{
private:
    //atributos
    AtributosComunes precioPluma;
    AtributosComunes marcaPluma;
    string colorTinta;

public:
    //constructores
    pluma();
    pluma(AtributosComunes elPrecioPluma, AtributosComunes laMarcaPluma, string elColorTinta);

    //métodos

    void setPrecioPluma(AtributosComunes elPrecioPluma);
    AtributosComunes getPrecioPluma();

    void setMarcaPluma(AtributosComunes laMarcaPluma);
    AtributosComunes getMarcaPluma();

    void setColorTinta(string elColorTinta);
    string getColorTinta();

    void imprimirPrecioPluma();
};