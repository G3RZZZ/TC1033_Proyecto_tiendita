#include<string>
#include<iostream>
#include"AtributosComunes.h"
#include"Dimensiones.h"

using namespace std;

class regla : public AtributosComunes
{
private: //declaración de variables
    AtributosComunes precioRegla;
    AtributosComunes marcaRegla;
    Dimensiones dimensionesRegla;
    string material;

public: // constructores, getts y setts
    regla();
    regla(AtributosComunes elPrecioRegla, AtributosComunes laMarcaRegla, Dimensiones lasDimensionesRegla, string theMaterial);

    //métodos
    void setPrecioRegla(AtributosComunes elPrecioRegla);
    AtributosComunes getPrecioRegla();

    void setMarcaRegla(AtributosComunes laMarcaRegla);
    AtributosComunes getMarcaRegla();

    void setDimensionesRegla(Dimensiones lasDimensionesRegla);
    Dimensiones getDimensionesRegla();

    void setMaterial(string theMaterial);
    string getMaterial();

    void imprimirPrecioRegla(); 
};