#pragma once
#include "figuras.hpp"
#include <stdexcept>

//Constante pi
#define PI 3.14159265358979323846


//CLASE PROCESADOR FIGURA

//los metodos son staic para que no necesiten instanciar la clase

//caso general --> en el caso que no sea una figura producira un error
template <typename T>
class ProcesadorFigura {
    private:
        T figura;
    
    public:
        //constructor
        ProcesadorFigura(const T& figura_): figura(figura_) {}
    
        //metodos
        double calcularArea(){
            throw std::invalid_argument("Tipo de figura no soportado");
            return 0;
        }
};

//especializacion para el caso de un punto
template <>
class ProcesadorFigura<Punto> {
    private:
        Punto figura;
    public:
        //constructor
        ProcesadorFigura(const Punto& figura_);

        //metodos
        double calcularArea(){
            return 0; //El area de un punto es 0
        }
};

//especializacion para el caso de un circulo
template <>
class ProcesadorFigura<Circulo> {
    private:
        Circulo figura;
    public:
        //constructor
        ProcesadorFigura(const Circulo& figura_);

        //metodos
        double calcularArea(){
            return PI * figura.getR() * figura.getR();
        }
};

//especializacion para el caso de una elipse
template <>
class ProcesadorFigura<Elipse> {
    private:
        Elipse figura;

    public:
        //constructor
        ProcesadorFigura(const Elipse& figura_);

        //metodos
        double calcularArea(){
            return PI * figura.getA() * figura.getB();
        }
};

//especializacion para el caso de un rectangulo
template <>
class ProcesadorFigura<Rectangulo> {
    private:
        Rectangulo figura;
    
    public:
        //constructor
        ProcesadorFigura(const Rectangulo& figura_);

        //metodos
        double calcularArea(){
            return figura.getAncho() * figura.getLargo();
        }
};
