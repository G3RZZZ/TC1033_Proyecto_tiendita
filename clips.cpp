#include"clips.h"


//constructor por default
clips::clips()
{
    cout << "Constructor por default de clips..." << endl; 
    precioClips = AtributosComunes(17);
    marcaClips = AtributosComunes("Baco");
    setTipo("estandar");
    setCantidad(1);
}
//constructor con parámetros
clips::clips(AtributosComunes elPrecioClips, AtributosComunes laMarcaClips, string elTipo, int laCantidad) 
{
    cout << "Constructor paramtrizado de clips..." << endl; 
    precioClips = elPrecioClips;
    marcaClips = laMarcaClips;
    tipo = elTipo;  //el tipo, mariposa, estandar, de broche, etc...
    cantidad = laCantidad; //la cantidad de clips por paquete, 1,2, etc...
}

void clips::setPrecioClips(AtributosComunes elPrecioClips)
{
    precioClips = elPrecioClips;
}
AtributosComunes clips::getPrecioClips()
{
    return precioClips;
}
void clips::setMarcaClips(AtributosComunes laMarcaClips)
{
    marcaClips = laMarcaClips;
}
AtributosComunes clips::getMarcaClips()
{
    return marcaClips;
}
void clips::setTipo(string elTipo) //el tipo, mariposa, estandar, de broche, etc...
{
    tipo = elTipo;
}
string clips::getTipo()
{
    return tipo;
}

void clips::setCantidad(int laCantidad) //la cantidad de clips por paquete, 1,2, etc...
{
    cantidad = laCantidad;
}
int clips::getCantidad()
{
    return cantidad;
}

void clips::imprimirPrecioClips()
{
    precioClips.imprimirPrecio();
}