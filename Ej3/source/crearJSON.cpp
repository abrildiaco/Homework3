#include "../headers/CrearJSON.hpp"
#include <iostream>
#include <string>

using namespace std;

//metodos

void CrearJSON::imprimirJSON() const {
    cout << "{ ";
    
    for (size_t i = 0; i < datos.size(); ++i){
        if(i == 0)
            cout<<"\"" << datos[i].first << "\":"<<datos[i].second;
        else
           cout<<"  \"" << datos[i].first << "\":"<<datos[i].second;
        if (i < datos.size() - 1) {
            cout << "," << endl;
        }

    }
    
    cout << "}" << endl;
}