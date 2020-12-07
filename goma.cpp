#include"goma.h"

goma::goma() //Contructor por default
{
    cout << "Constructor por default de goma..." << endl;
    precioGoma = AtributosComunes(8);
    marcaGoma = AtributosComunes("Factis");
    type = "Suave";
    dimensionesGoma = Dimensiones("normal");
}
goma::goma(AtributosComunes elPrecioGoma, AtributosComunes laMarcaGoma, string theType, Dimensiones lasDimensionesGoma) //Constructor con parámetros
{
    cout << "Constructor con parámetros para goma..." << endl;
    precioGoma = elPrecioGoma;
    marcaGoma = laMarcaGoma;
    type = theType;
    dimensionesGoma = lasDimensionesGoma;
}

void goma::setPrecioGoma(AtributosComunes elPrecioGoma)// precio y marca de goma
{
    precioGoma = elPrecioGoma;
}
AtributosComunes goma::getPrecioGoma()
{
    return precioGoma;
}
void goma::setMarcaGoma(AtributosComunes laMarcaGoma)// precio y marca de goma
{
    marcaGoma = laMarcaGoma;
}
AtributosComunes goma::getMarcaGoma()
{
    return marcaGoma;
}

void goma::setType(string theType) //tipo de goma, suave, borracha, cojín, etc...
{
    type = theType;
}
string goma::getType()
{
    return type;
}

void goma::setDimensionesGoma(Dimensiones lasDimensionesGoma)// dimensiones de la goma
{
    dimensionesGoma = lasDimensionesGoma;
}
Dimensiones goma::getDimensionesGoma()
{
    return dimensionesGoma;
}

void goma::imprimirPrecioGoma()
{
    precioGoma.imprimirPrecio();
}