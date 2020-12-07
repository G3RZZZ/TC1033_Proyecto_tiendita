#include<string>
#include<iostream>

using namespace std;

#pragma once
class AtributosComunes
{
protected:
    //Atributos
    int precio;
    string marca;

public:

    //Métodos
    AtributosComunes();
    AtributosComunes(int elPrecio);
    AtributosComunes(string laMarca);

    void setPrecio(int elPrecio);
    int getPrecio();
    
    void setMarca(string laMarca);
    string getMarca();

    void imprimirPrecio();
};