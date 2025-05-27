#pragma once
#include <string>
#include "datos.hpp"

class CrearJSON{
    private:
    
        std::vector<std::pair<std::string, std::string>> datos; //vector de pares para almacenar etiquetas y datos

    public:
        //constructor
        CrearJSON() = default;

        //metodos
        template<typename T>
        void agregarDato(const std::string& etiqueta, const Dato<T>& dato) {
            datos.emplace_back(std::make_pair(etiqueta, dato.procesar()));
        }

        void imprimirJSON() const;

        //destructor
        ~CrearJSON() = default;
};
