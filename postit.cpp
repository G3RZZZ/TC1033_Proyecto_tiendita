#include"postit.h"

postit::postit()
{
    cout << "Constructor por default de post-it..." << endl; //contructpr por default de post-it
    precioPostit = AtributosComunes(45);
    marcaPostit = AtributosComunes("3M");
    forma = "cuadrado "; //forma del post-it, cuadrado rectangulo etc.
    cantidad = 1; //cantidad de paquetes de post-it, 1, 2, etc...
}
postit::postit(AtributosComunes elPrecioPostit, AtributosComunes laMarcaPostit, string laForma, int laCantidad)
{
    cout << "Constructor parametrizado de post-it" << endl;
    precioPostit = elPrecioPostit;
    marcaPostit = laMarcaPostit;
    forma = laForma;
    cantidad = laCantidad;
}

void postit::setPrecioPostit(AtributosComunes elPrecioPostit)
{
    precioPostit = elPrecioPostit;
}
AtributosComunes postit::getPrecioPostit()
{
    return precioPostit;
}
void postit::setMarcaPostit(AtributosComunes laMarcaPostit)
{
    marcaPostit = laMarcaPostit;
}
AtributosComunes postit::getMarcaPostit()
{
    return marcaPostit;
}

void postit::setForma(string laForma) //forma del post-it, cuadrado rectangulo etc.
{
    forma = laForma;
}
string postit::getForma()
{
    return forma;
}

void postit::setCantidad(int laCantidad) //cantidad de paquetes de post-it, 1, 2, etc...
{
    cantidad = laCantidad;
}
int postit::getCantidad()
{
    return cantidad;
}
    
void postit::imprimirPrecioPostit()
{
    precioPostit.imprimirPrecio();
}