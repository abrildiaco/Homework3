#pragma once
#include <string>
#include "datos.hpp"


class CrearJSON{
    private:
        Datos& c1; //referencia a la clase 1
        std::string etiquetaVD;
        std::string etiquetaVS;
        std::string etiquetaME;

    public:
        //constructor
        CrearJSON(Datos& c1, std::string etiquetaVD_, std::string etiquetaVS_, std::string etiquetaME_); //incluyo las etiquetas

        //metodos
        void imprimirJSON() const;

        //destructor
        ~CrearJSON() = default;
};
