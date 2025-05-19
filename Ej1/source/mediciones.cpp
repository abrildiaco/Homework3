#include "../headers/mediciones.hpp"
#include <iostream>
#include <memory>
#include <fstream>
#include <stdexcept>
using namespace std;

//MEDICION BASE

//cosntructor
MedicionBase::MedicionBase(float t) : tiempoMedicion(make_unique<float>(t)) {
    if (t < 0) {
        throw invalid_argument("El tiempo de la medicion no puede ser negativo");
    }
}

//deep copy constructor para evitar problemas de punteros
MedicionBase::MedicionBase(const MedicionBase& other)
 :tiempoMedicion(make_unique<float>(*other.tiempoMedicion)) {
}

//metodos
void MedicionBase::serializar(ofstream &out) const {
    out.write(reinterpret_cast<char*>(tiempoMedicion.get()), sizeof(*tiempoMedicion)); //uso .get() para obtener el puntero crudo
}

void MedicionBase::deserializar(ifstream &in) const {
    in.read(reinterpret_cast<char*>(tiempoMedicion.get()), sizeof(*tiempoMedicion));
}

float MedicionBase::getTiempo() const {
    return *tiempoMedicion; //devielvo el valor t
}


