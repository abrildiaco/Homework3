#include "../headers/flight_data.hpp"
#include <iostream>

using namespace std;

//constructor
SaveFlightData::SaveFlightData(const Posicion& p, const Presion& q)
    : posicion(p), presion(q) {}

//metodos
void SaveFlightData::serializar(ofstream &out) const {
    posicion.serializar(out);
    presion.serializar(out);
}

void SaveFlightData::deserializar(ifstream &in) {
    posicion.deserializar(in);
    presion.deserializar(in);
}

void SaveFlightData::imprimir() const {
    cout << "== Datos de la medicion de vuelo ==" << endl;
    cout << "Posicion:" << endl;
    posicion.imprimir();
    cout << "Presion:" << endl;
    presion.imprimir();
}