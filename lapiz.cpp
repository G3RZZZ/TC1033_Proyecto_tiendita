#include"lapiz.h"

lapiz::lapiz() //constructor por default...
{
    cout << "Constructor por default de lapiz..." << endl;
    precioLapiz = AtributosComunes(2);
    marcaLapiz = AtributosComunes("Bic ");
    type = "2H ";  //tipo de grafito en el lapiz, 2h, hb, 4h, 2b, etc...
    eraser = "con goma "; // si hay coma en el lapiz o no...
}
//Constructor con parámetros...
lapiz::lapiz(AtributosComunes elPrecioLapiz, AtributosComunes laMarcaLapiz, string theType, string theEraser, Dimensiones lasDimensionesLapiz)
{
    cout << "Constructor con parametros..." << endl;
    precioLapiz = elPrecioLapiz;
    marcaLapiz = laMarcaLapiz;
    type = theType;
    eraser = theEraser;
    dimensionesLapiz = lasDimensionesLapiz;
}

void lapiz::setType(string theType) //tipo de grafito en el lapiz, 2h, hb, 4h, 2b, etc...
{
    type = theType;
}
string lapiz::getType()
{
    return type;
}

void lapiz::setEraser(string theEraser) // si hay coma en el lapiz o no...
{
    eraser = theEraser;
}
string lapiz::getEraser()
{
    return eraser;
}

void lapiz::setDimensionesLapiz(Dimensiones lasDiemnsionesLapiz)
{
    dimensionesLapiz = lasDiemnsionesLapiz;
}
Dimensiones lapiz::getDimensionesLapiz()
{
    return dimensionesLapiz;
}

void lapiz::imprimirPrecioLapiz()
{
    precioLapiz.imprimirPrecio();
}