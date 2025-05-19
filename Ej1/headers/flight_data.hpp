#pragma once
#include "presion.hpp"
#include "posicion.hpp"
#include <fstream>

class SaveFlightData{
    public:
        Posicion posicion;
        Presion presion;

        // Constructor
        SaveFlightData(const Posicion& p, const Presion& q);

        void serializar(std::ofstream &out) const;
        void deserializar(std::ifstream &in);
        void imprimir() const;

        // Destructor
        ~SaveFlightData() = default;


};