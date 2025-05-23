#include "../headers/procesador.hpp"

//Definicion de contructores

ProcesadorFigura<Punto>::ProcesadorFigura(const Punto& figura_) : figura(figura_) {}

ProcesadorFigura<Circulo>::ProcesadorFigura(const Circulo& figura_) : figura(figura_) {}

ProcesadorFigura<Elipse>::ProcesadorFigura(const Elipse& figura_) : figura(figura_) {}

ProcesadorFigura<Rectangulo>::ProcesadorFigura(const Rectangulo& figura_) : figura(figura_) {}
