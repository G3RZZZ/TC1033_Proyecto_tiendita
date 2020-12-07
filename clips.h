#include<string>
#include<iostream>
#include"AtributosComunes.h"

using namespace std;

#pragma once
class clips : public AtributosComunes
{
private:
    //atributos
    AtributosComunes precioClips;
    AtributosComunes marcaClips;
    string tipo;
    int cantidad;

public:
    //constructores
    clips();
    clips(AtributosComunes elPrecioClips, AtributosComunes laMarcaClips, string elTipo, int laCantidad);

    //métodos
    void setPrecioClips(AtributosComunes elPrecioClips);
    AtributosComunes getPrecioClips();

    void setMarcaClips(AtributosComunes laMarcaClips);
    AtributosComunes getMarcaClips();

    void setTipo(string elTipo);
    string getTipo();

    void setCantidad(int laCantidad);
    int getCantidad();

    void imprimirPrecioClips();
};