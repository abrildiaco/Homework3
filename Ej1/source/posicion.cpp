#include "../headers/posicion.hpp"
#include <iostream>

using namespace std;

//constructor
Posicion::Posicion(float lat, float lon, float alt, float t)
    :MedicionBase(t), latitud(lat), longitud(lon), altitud(alt) {}

//metodos
void Posicion::serializar(ofstream &out) const {
    MedicionBase::serializar(out); //primero serializo la parte base
    out.write(reinterpret_cast<const char*>(&latitud), sizeof(latitud)); 
    out.write(reinterpret_cast<const char*>(&longitud), sizeof(longitud));
    out.write(reinterpret_cast<const char*>(&altitud), sizeof(altitud));
}

void Posicion::deserializar(ifstream &in) {
    MedicionBase::deserializar(in); //primero deserializo la parte base
    in.read(reinterpret_cast<char*>(&latitud), sizeof(latitud));
    in.read(reinterpret_cast<char*>(&longitud), sizeof(longitud));
    in.read(reinterpret_cast<char*>(&altitud), sizeof(altitud));
}

void Posicion::imprimir() const {
    cout << "Latitud: " << latitud <<endl;
    cout << "Longitud: " << longitud <<endl;
    cout << "Altitud: " << altitud <<endl;
    cout << "Tiempo de la medicion: " << getTiempo() <<endl;
}