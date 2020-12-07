#include"regla.h"

//constructor por default
regla::regla()
{
    cout << "la regla por default es..." << endl;
    precioRegla = AtributosComunes(15);
    marcaRegla = AtributosComunes("Baco");
    dimensionesRegla =  Dimensiones(30); //medidas en centimetros
    material = "plástico";
}
regla::regla(AtributosComunes elPrecioRegla, AtributosComunes laMarcaRegla, Dimensiones lasDimensionesRegla, string theMaterial)  // constructor por parámetros
{
    cout << "Esta es la regla con parametros..." << endl;
    precioRegla = elPrecioRegla;
    marcaRegla = laMarcaRegla;
    dimensionesRegla = lasDimensionesRegla;
    material = theMaterial;
}

void regla::setPrecioRegla(AtributosComunes elPrecioRegla)
{
    precioRegla = elPrecioRegla;
}
AtributosComunes regla::getPrecioRegla()
{
    return precioRegla;
}
void regla::setMarcaRegla(AtributosComunes laMarcaRegla)
{
    marcaRegla = laMarcaRegla;
}
AtributosComunes regla::getMarcaRegla()
{
    return marcaRegla;
}

void regla::setDimensionesRegla(Dimensiones lasDimensionesRegla)
{
    dimensionesRegla = lasDimensionesRegla;
}
Dimensiones regla::getDimensionesRegla()
{
    return dimensionesRegla;
}

void regla::setMaterial(string theMaterial) // material de la regla (madera, metal o plástico)
{
    material = theMaterial;
}
string regla::getMaterial()
{
    return material;
}
    
void regla::imprimirPrecioRegla()
{
    precioRegla.imprimirPrecio();
}