#include "../headers/CrearJSON.hpp"
#include <iostream>
#include <string>

using namespace std;

//constructor
CrearJSON::CrearJSON(Datos& c1, string etiquetaVD_, string etiquetaVS_, string etiquetaME_)
    : c1(c1), etiquetaVD(etiquetaVD_), etiquetaVS(etiquetaVS_), etiquetaME(etiquetaME_) {}

//metodos
void CrearJSON::imprimirJSON() const {
    cout << "{ ";
    //vector de double
    cout<<"\"" << etiquetaVD << "\":";
    c1.procesarVD();
    cout << "," << endl;

    //vector de string
    cout<<"  \"" << etiquetaVS << "\":";
    c1.procesarVS();
    cout << "," << endl;

    //matriz de enteros
    cout<<"  \"" << etiquetaME << "\":";
    c1.procesarME();
    
    cout << "}" << endl;
}