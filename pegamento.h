#include<string>
#include<iostream>
#include"AtributosComunes.h"
#include"Dimensiones.h"

using namespace std;

#pragma once
class pegamento : public AtributosComunes
{
private:
    //declaración de varibales
    AtributosComunes precioPegamento;
    AtributosComunes marcaPegamento;
    string type;
    Dimensiones dimesionesPegamento;

public:
    //constructores
    //default
    pegamento(); 
    //parametrized
    pegamento(AtributosComunes elPrecioPegamento, AtributosComunes laMarcaPegamento, string theType, Dimensiones lasDimesionesPegamento);

    //métodos
    void setPrecioPegamento(AtributosComunes elPrecioPegamento);
    AtributosComunes getPrecioPegamento();

    void setMarcaPegamento(AtributosComunes laMarcaPegamento);
    AtributosComunes getMarcaPegamento();

    void setType(string theType);
    string getType();

    void setDimensionesPegamento(Dimensiones lasDimensionesPegamento);
    Dimensiones getDimensionesPegamento();

    void imprimirPrecioPegamento();
};