#include"pegamento.h"

pegamento::pegamento() //constructor default
{
    cout << "constructor por default del pegamento...";
    precioPegamento = AtributosComunes(14);
    marcaPegamento = AtributosComunes("Prit ");
    type = "en barra ";
    dimesionesPegamento = Dimensiones(11);
}
pegamento::pegamento(AtributosComunes elPrecioPegamento, AtributosComunes laMarcaPegamento, string theType, Dimensiones lasDimesionesPegamento)  //parametrized
{
    cout << "contructor parametrizado del pegamento...";
    precioPegamento = elPrecioPegamento;
    marcaPegamento = laMarcaPegamento;
    type = theType;
    dimesionesPegamento = lasDimesionesPegamento;
}

void pegamento::setPrecioPegamento(AtributosComunes elPrecioPegamento)
{
    precioPegamento = elPrecioPegamento;
}
AtributosComunes pegamento::getPrecioPegamento()
{
    return precioPegamento;
}
void pegamento::setMarcaPegamento(AtributosComunes laMarcaPegamento)
{
    marcaPegamento = laMarcaPegamento;
}
AtributosComunes pegamento::getMarcaPegamento()
{
    return marcaPegamento;
}

void pegamento::setType(string theType) //tipo de pegamento, prit, resistol, silicón, ect.
{
    type = theType;
}
string pegamento::getType()
{
    return type;
}

    //tamaño del pegamento en ml o gramos según sea el caso.
void pegamento::setDimensionesPegamento(Dimensiones lasDimensionesPegamento)
{
    dimesionesPegamento = lasDimensionesPegamento;
}
Dimensiones pegamento::getDimensionesPegamento()
{
    return dimesionesPegamento;
}

void pegamento::imprimirPrecioPegamento()
{
    precioPegamento.imprimirPrecio();
}