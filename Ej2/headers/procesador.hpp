#pragma once
#include "figuras.hpp"
#include <stdexcept>

//Constante pi
#define PI 3.14159265358979323846


//CLASE PROCESADOR FIGURA

//los metodos son sttic para que no necesiten instanciar la clase

//caso general --> en el caso que no sea una figura producira un error
template <typename T>
class ProcesadorFigura {
    public:
        //metodos
        static double calcularArea(const T& figura){
            throw std::invalid_argument("Tipo de figura no soportado");
            return 0;
        }
};

//especializacion para el caso de un punto
template <>
class ProcesadorFigura<Punto> {
    public:
        //metodos
        static double calcularArea(const Punto& figura){
            return 0; //El area de un punto es 0
        }
};

//especializacion para el caso de un circulo
template <>
class ProcesadorFigura<Circulo> {
    public:
        //metodos
        static double calcularArea(const Circulo& figura){
            return PI * figura.getR() * figura.getR();
        }
};

//especializacion para el caso de una elipse
template <>
class ProcesadorFigura<Elipse> {
    public:
        //metodos
        static double calcularArea(const Elipse& figura){
            return PI * figura.getA() * figura.getB();
        }
};

//especializacion para el caso de un rectangulo
template <>
class ProcesadorFigura<Rectangulo> {
    public:
        //metodos
        static double calcularArea(const Rectangulo& figura){
            return figura.getAncho() * figura.getLargo();
        }
};
