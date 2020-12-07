#include<string>
#include<iostream>

using namespace std;

#pragma once
class Dimensiones
{
protected:
    float numTamanio;
    string tamanio;

public:
    Dimensiones();
    Dimensiones(float elNumTamanio);
    Dimensiones(string elTamanio);

    void setNumTamanio(float elNumTamanio);
    float getNumTamanio();

    void setTamanio(string elTamanio);
    string getTamanio();
};

