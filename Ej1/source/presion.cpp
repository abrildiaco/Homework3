#include "../headers/presion.hpp"
#include <iostream>
using namespace std;

//constructor
Presion::Presion(float p, float q, float t)
    :MedicionBase(t), presionEstatica(p), presionDinamica(q) {}

//metodos
void Presion::serializar(ofstream &out) const {
    MedicionBase::serializar(out); //primero serializo la parte base
    out.write(reinterpret_cast<const char*>(&presionEstatica), sizeof(presionEstatica)); 
    out.write(reinterpret_cast<const char*>(&presionDinamica), sizeof(presionDinamica));
}

void Presion::deserializar(ifstream &in) {
    MedicionBase::deserializar(in); //primero deserializo la parte base
    in.read(reinterpret_cast<char*>(&presionEstatica), sizeof(presionEstatica));
    in.read(reinterpret_cast<char*>(&presionDinamica), sizeof(presionDinamica));
}

void Presion::imprimir() const {
    cout << "Presion Estatica: " << presionEstatica <<endl;
    cout << "Presion Dinamica: " << presionDinamica <<endl;
    cout << "Tiempo de la medicion: " << getTiempo() <<endl;
}