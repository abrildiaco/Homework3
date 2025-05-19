#pragma once
#include <fstream>
#include <memory>

//INTERFAZ IMEDICIONES

class IMediciones{
    public:
        virtual void serializar(std::ofstream &out) const = 0;
        virtual void deserializar(std::ifstream &in) = 0;

        virtual ~IMediciones() = default;
};

//CLASE ABSTRACTA MEDICION BASE

class MedicionBase: public IMediciones{
    protected:
        std::unique_ptr<float> tiempoMedicion;
    
    public:
        //constructor
        MedicionBase(float t); //t = valor de tiempoMedicion_
        MedicionBase(const MedicionBase& other); //deep copy constructor para evitar problemas de punteros

        //metodos
        virtual void serializar(std::ofstream &out) const;
        virtual void deserializar(std::ifstream &in) const;

        virtual float getTiempo() const;
        virtual void imprimir() const = 0;

        //destructor
        virtual ~MedicionBase() = default;

};