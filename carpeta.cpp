#include"carpeta.h"

carpeta::carpeta() //constructor por default
{
    cout << "Constructor por default de carpeta..." << endl;
    marcaCarpeta = AtributosComunes("Sable ");
    precioCarpeta = AtributosComunes(65);
    dimensionesCarpeta = Dimensiones(1.0);
}
carpeta::carpeta(AtributosComunes laMarcaCarpeta, AtributosComunes elPrecioCarpeta, Dimensiones lasDimensionesCarpeta)
{
    marcaCarpeta = laMarcaCarpeta;
    precioCarpeta = elPrecioCarpeta;
    dimensionesCarpeta = lasDimensionesCarpeta;
}

void carpeta::setMarcaCarpeta( AtributosComunes laMarcaCarpeta)
{
    marcaCarpeta = laMarcaCarpeta;
}
AtributosComunes carpeta::getMarcaCarpeta()
{
    return marcaCarpeta;
}

void carpeta::setPrecioCarpeta( AtributosComunes elPrecioCarpeta)
{
    precioCarpeta = elPrecioCarpeta;
}
AtributosComunes carpeta::getPrecioCarpeta()
{
    return precioCarpeta;
}

void carpeta::setPrecioMarcaCarpeta(Dimensiones lasDimensionesCarpeta)
{
    dimensionesCarpeta = lasDimensionesCarpeta;
}
Dimensiones carpeta::getDimensionesCarpeta()
{
    return dimensionesCarpeta;
}

void carpeta::imprimirPrecioCarpeta()
{
    precioCarpeta.imprimirPrecio();
}
