#include"calc.h"

calc::calc() //constructor por default...
{
    cout << "Constructor por default de calculadora..." << endl;
    precioMarcaCalc = AtributosComunes("Casio ");
    precioCalc = AtributosComunes(80);
    // precioCacl = 80;
    setType("básica");
}
calc::calc(AtributosComunes elPrecioMarcaCalc, AtributosComunes elPrecioCalc, string thetype) // constructor con parámetros
{
    cout << "Constructor con parámetros de calculadora..." << endl;
    precioMarcaCalc = elPrecioMarcaCalc;
    precioCalc = elPrecioCalc;
    setType(thetype);
}



void calc::setPrecioMarcaCalc(AtributosComunes elPrecioMarcaCalc)
{
    precioMarcaCalc = elPrecioMarcaCalc;
}
AtributosComunes calc::getPrecioMarcaCalc()
{
    return precioMarcaCalc;
}

void calc::setPrecioCalc(AtributosComunes elPrecioCalc)
{
    precioCalc = elPrecioCalc;
}
AtributosComunes calc::getPrecioCalc()
{
    return precioCalc;
}

void calc::setType(string theType)
{
    type = theType;
}
string calc::getType()
{
    return type;
}

void calc::imprimirPrecioCalc()
{
    precioCalc.imprimirPrecio();
}

