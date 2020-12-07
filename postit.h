#include<string>
#include<iostream>
#include"AtributosComunes.h"

using namespace std;

#pragma once
class postit : public AtributosComunes
{
private:
    //atributos
    AtributosComunes precioPostit;
    AtributosComunes marcaPostit;
    string forma;
    int cantidad;

public:
    //constructores
    postit();
    postit(AtributosComunes elPrecioPostit, AtributosComunes laMarcaPostit, string laForma, int laCantidad);

    //métodos

    void setPrecioPostit(AtributosComunes elPrecioPostit);
    AtributosComunes getPrecioPostit();

    void setMarcaPostit(AtributosComunes laMarcaPostit);
    AtributosComunes getMarcaPostit();

    void setForma(string laForma);
    string getForma();

    void setCantidad(int laCantidad);
    int getCantidad();

    void imprimirPrecioPostit();
    
};