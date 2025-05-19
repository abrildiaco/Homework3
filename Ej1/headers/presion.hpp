#pragma once
#include "mediciones.hpp"

class Presion: public MedicionBase{
    public:
        float presionEstatica; //p
        float presionDinamica; //q
        
        //constructor
        Presion(float p, float q, float t); //t = valor de tiempoMedicion_

        //metodos
        void serializar(std::ofstream &out) const override;
        void deserializar(std::ifstream &in) override;
        void imprimir() const override;

        //destructor
        ~Presion() = default;

};