#include"cuaderno.h"

//Contructor por default
cuaderno::cuaderno() 
{
    cout << "Constructor por default de cuaderno..." << endl;
    marcaCuaderno = AtributosComunes("Norma ");
    precioCuaderno = AtributosComunes(130);
    // precio y marca del cuaderno
    setTipoHojas("Rayado"); //tipo de cuaderno, rayado, cuadro, cuadro grande o chico, etc...
    setNumHojas(200); //número de hojas
    dimensionesCuaderno = Dimensiones("Tamaño Carta"); //tamaño del cuaderno
}
//constructor con parámetros
cuaderno::cuaderno(AtributosComunes laMarcaCuaderno, AtributosComunes elPrecioCuaderno, string elTipoHojas, int elNumHojas, Dimensiones lasDimensionesCuaderno) 
{
    cout << "Constructor con parámetros de cuaderno..." << endl;
    marcaCuaderno = laMarcaCuaderno;
    precioCuaderno = elPrecioCuaderno;
    tipoHojas = elTipoHojas;
    numHojas = elNumHojas;
    dimensionesCuaderno = lasDimensionesCuaderno;
}

void cuaderno::setMarcaCuaderno(AtributosComunes laMarcaCuaderno)
{
    marcaCuaderno = laMarcaCuaderno;
}
AtributosComunes cuaderno::getMarcaCuaderno()
{
    return marcaCuaderno;
}

void cuaderno::setPrecioCuaderno(AtributosComunes elPrecioCuaderno)
{
    precioCuaderno = elPrecioCuaderno;
}
AtributosComunes cuaderno::getPrecioCuaderno()
{
    return precioCuaderno;
}

void cuaderno::setTipoHojas(string elTipoHojas) //tipo de hojas, rayado, cuadro grando o chico, etc...
{
    tipoHojas = elTipoHojas;
}
string cuaderno::getTipoHojas()
{
    return tipoHojas;
}

void cuaderno::setNumHojas(int elNumHojas) // número de hojas, 100, 50 , 200 etc...
{
    numHojas = elNumHojas;
}
int cuaderno::getNumHojas()
{
    return numHojas;
}

void cuaderno::setDimensionesCuaderno(Dimensiones lasDimensionesCuaderno) // dimesiones del cuaderno, carta, tamaño frances, etc...
{
    dimensionesCuaderno = lasDimensionesCuaderno;
}
Dimensiones cuaderno::getDimensionesCuaderno()
{
    return dimensionesCuaderno;
}

void cuaderno::imprimirPrecioCuaderno()
{
    precioCuaderno.imprimirPrecio();
}