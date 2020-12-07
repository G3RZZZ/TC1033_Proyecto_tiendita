#include"pluma.h"

pluma::pluma() //contructor por default
{
    cout << "Constructor por default de pluma..." << endl; 
    precioPluma = AtributosComunes(9); // marca y precio de la pluma, bic, pellican, pilot, etc..
    marcaPluma = AtributosComunes("Bic ");
    colorTinta = "Pluma Azul "; //color de tinta
}
pluma::pluma(AtributosComunes elPrecioPluma, AtributosComunes laMarcaPluma, string elColorTinta) //constructor con parámetros
{
    cout << "Constructor con parámetros de pluma..." << endl;
    precioPluma = elPrecioPluma;
    marcaPluma = laMarcaPluma;
    colorTinta = elColorTinta;
}


void pluma::setPrecioPluma(AtributosComunes elPrecioPluma)
{
    precioPluma = elPrecioPluma;
}
AtributosComunes pluma::getPrecioPluma()
{
    return precioPluma;
}

void pluma::setMarcaPluma(AtributosComunes laMarcaPluma)
{
    marcaPluma = laMarcaPluma;
}
AtributosComunes pluma::getMarcaPluma()
{
    return marcaPluma;
}

void pluma::setColorTinta(string elColorTinta) //color de tinta
{
    colorTinta = elColorTinta;
}
string pluma::getColorTinta()
{
    return colorTinta;
}

void pluma::imprimirPrecioPluma()
{
    precioPluma.imprimirPrecio();
}