#include "../headers/CrearJSON.hpp"
#include <iostream>
#include <string>

using namespace std;

//constructor
CrearJSON::CrearJSON(Datos& c1, string etiquetaVD_, string etiquetaVS_, string etiquetaME_)
    : c1(c1), etiquetaVD(etiquetaVD_), etiquetaVS(etiquetaVS_), etiquetaME(etiquetaME_) {}

//metodos
void CrearJSON::imprimirJSON() const {
    cout << "{" << endl;
    cout << "  \"" << etiquetaVD << "\": [";
    for (size_t i = 0; i < c1.getVectorDouble().size(); ++i) {
        cout << c1.getVectorDouble()[i];
        if (i != c1.getVectorDouble().size() - 1) {
            cout << ", ";
        }
    }
    cout << "]," << endl;

    cout << "  \"" << etiquetaVS << "\": [";
    for (size_t i = 0; i < c1.getVectorString().size(); ++i) {
        cout << "\"" << c1.getVectorString()[i] << "\"";
        if (i != c1.getVectorString().size() - 1) {
            cout << ", ";
        }
    }
    cout << "]," << endl;

    cout << "  \"" << etiquetaME << "\": ["; //matriz de enteros
    for (size_t i = 0; i < c1.getMatrizEnteros().size(); ++i) {
        cout << "[";
        for (size_t j = 0; j < c1.getMatrizEnteros()[i].size(); ++j) {
            cout << c1.getMatrizEnteros()[i][j];
            if (j != c1.getMatrizEnteros()[i].size() - 1) {
                cout << ", ";
            }
        }
        cout << "]";
        if (i != c1.getMatrizEnteros().size() - 1) {
            cout << ", ";
        }
    }
    cout << "]" << endl;

    cout << "}" << endl;
}