#include"Dimensiones.h"

Dimensiones::Dimensiones()
{
    numTamanio = 0;
    tamanio = "0";
}

Dimensiones::Dimensiones(float elNumTamanio)
{
    numTamanio = elNumTamanio;
}

Dimensiones::Dimensiones(string elTamanio)
{
    tamanio = elTamanio;
}

void Dimensiones::setNumTamanio(float elNumTamanio)
{
    numTamanio = elNumTamanio;
}
float Dimensiones::getNumTamanio()
{
    return numTamanio;
}

void Dimensiones::setTamanio(string elTamanio)
{
    tamanio = elTamanio;
}
string Dimensiones::getTamanio()
{
    return tamanio;
}