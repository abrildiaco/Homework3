#include "headers/flight_data.hpp"
#include <iostream>

using namespace std;

int main(){
    // Creo objetos de mediciones
    Posicion pos(-34.6f, -58.4f, 950.0f, 5.3f);
    Presion pres(101.3f, 5.8f, 6.1f);

    // Creo objeto de SaveFlightData
    SaveFlightData flightData(pos, pres);

    //imprimo datos antes de serializar
    cout << "== Pre serializar ==" << endl;
    flightData.imprimir();

    // Serializar datos a un archivo
    ofstream outFile("flight_data.bin", std::ios::binary);
    if (outFile) {
        flightData.serializar(outFile);
        outFile.close();
    }

    // Deserializar datos desde el archivo
    SaveFlightData FlightDataDeserializada(Posicion(0, 0, 0, 0), Presion(0, 0, 0));
    ifstream inFile("flight_data.bin", std::ios::binary);
    
    if (inFile) {
        FlightDataDeserializada.deserializar(inFile);
        inFile.close();
    }

    // Imprimir datos deserializados
    cout << "== Post deserializar ==" << endl;
    FlightDataDeserializada.imprimir();

    return 0;
}