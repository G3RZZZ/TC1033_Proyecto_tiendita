#include"regla.h"
#include"pegamento.h"
#include"postit.h"
#include"clips.h"
#include"carpeta.h"
#include"calc.h"
#include"lapiz.h"
#include"goma.h"
#include"cuaderno.h"
#include"pluma.h"
#include"AtributosComunes.h"
#include"Dimensiones.h"
#include<string>
#include <iostream>
using namespace std;


int main()
{
    //instancias de productos:
    calc calculadora1;
    calculadora1.setPrecio(80);
    carpeta carpeta1;
    carpeta1.setPrecio(65);
    clips clips1;
    clips1.setPrecio(17);
    cuaderno cuaderno1;
    cuaderno1.setPrecio(130);
    goma goma1;
    goma1.setPrecio(8);
    lapiz lapiz1;
    lapiz1.setPrecio(2);
    pegamento pegamento1;
    pegamento1.setPrecio(14);
    pluma pluma1;
    pluma1.setPrecio(9);
    postit postit1;
    postit1.setPrecio(45);
    regla regla1;
    regla1.setPrecio(15);

    //Listado de productos en venta
    double costoFinal = 0;
    int producto;
    cout << "los productos en la papelería son: " << endl;
    cout << "1. Calucluadoras " << endl;
    cout << "2. Carpetas " << endl;
    cout << "3. Clips " << endl;
    cout << "4. Cuadernos " << endl;
    cout << "5. Gomas " << endl;
    cout << "6. Lapices " << endl; 
    cout << "7. Pegamento " << endl;
    cout << "8. Plumas " << endl; 
    cout << "9. Post-its " << endl; 
    cout << "10. Reglas " << endl;
    cout << "Ingrese '0' para salir..." << endl;

    //Carrito de compras y Total en pesos de los productos
    cout << "Ingrese los artículos a comprar: " << endl;
    while (producto != 0)
    {
        cin >> producto;
        if (producto == 1)
        {
            costoFinal = costoFinal + calculadora1.getPrecio();
        }
        else
        {
            if (producto == 2)
            {
                costoFinal = costoFinal + carpeta1.getPrecio();
            }
            else
            {
               if (producto == 3)
               {
                   costoFinal = costoFinal + clips1.getPrecio();
               }
               else 
               {
                   if (producto == 4)
                   {
                       costoFinal = costoFinal + cuaderno1.getPrecio();
                   }
                   else
                   {
                       if (producto == 5)
                       {
                           costoFinal = costoFinal + goma1.getPrecio();
                       }
                       else
                       {
                            if (producto == 6)
                            {
                               costoFinal = costoFinal + lapiz1.getPrecio();
                            }
                            else
                            {
                                if (producto == 7)
                                {
                                   costoFinal = costoFinal + pegamento1.getPrecio();
                                }
                                else
                                {
                                    if (producto == 8)
                                    {
                                        costoFinal = costoFinal + pluma1.getPrecio();
                                    }
                                    else
                                    {
                                        if (producto == 9)
                                        {
                                           costoFinal = costoFinal + postit1.getPrecio();
                                        }
                                        else
                                        {
                                            if (producto == 10)
                                            {
                                               costoFinal = costoFinal + regla1.getPrecio();
                                            }
                                            else
                                            {
                                                cout << "error, ingese un número de la lista de compras..." << endl;
                                            }
                                        }
                                    }
                                }
                            }  
                        }
                       
                    }
                }
            }
        }   
    }
    cout << "costo total: " << costoFinal << endl;
    //Mensaje final
    cout << "Su compra ha sido exitosa!" << endl;
}