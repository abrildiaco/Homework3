#pragma once
#include "mediciones.hpp"

class Posicion: public MedicionBase{
    public:
        float latitud;
        float longitud;
        float altitud; //z
        
        //constructor
        Posicion(float lat, float lon, float alt, float t); //t = valor de tiempoMedicion_
        
        //metodos
        void serializar(std::ofstream &out) const override;
        void deserializar(std::ifstream &in) override;
        void imprimir() const override;

        //destructor
        ~Posicion() = default;
};