#include"AtributosComunes.h"

AtributosComunes::AtributosComunes()
{
    precio = 0;
    marca = " ";
}
AtributosComunes::AtributosComunes(int elPrecio)
{
    precio = elPrecio;
}

AtributosComunes::AtributosComunes(string laMarca)
{
    marca = laMarca;
}

void AtributosComunes::setPrecio(int elPrecio)
{
    precio = elPrecio;
}
int AtributosComunes::getPrecio()
{
    return precio;
}
    
void AtributosComunes::setMarca(string laMarca)
{
    marca = laMarca;
}
string AtributosComunes::getMarca()
{
    return marca;
}

void AtributosComunes::imprimirPrecio()
{
    cout << precio << endl;
}