#include "headers/flight_data.hpp"
#include <iostream>
#include <fstream>

using namespace std;

int main(){
    Posicion posicion(-34.6f, -58.4f, 950.0f, 5.3f);
    Presion presion(101.3f, 5.8f, 6.1f);

    SaveFlightData flightData(posicion, presion);

    //imprimo datos antes de serializar
    cout << "== Pre serializar ==" << endl;
    flightData.imprimir();

    // Serializar datos a un archivo
    ofstream out("flight_data.bin", std::ios::binary);
    if (out.is_open()) {
        // Serializo los datos
        flightData.serializar(out);
        out.close();
    }

    // Deserializar datos desde el archivo
    Posicion posicionDeserializada(0, 0, 0, 0);
    Presion presionDeserializada(0, 0, 0);

    SaveFlightData FlightDataDeserializada(posicionDeserializada, presionDeserializada);
    
    ifstream in("flight_data.bin", std::ios::binary);
    if (in.is_open()) {
        // Deserializo los datos
        FlightDataDeserializada.deserializar(in);
        in.close();
    }

    // Imprimir datos deserializados
    cout << "\n== Post deserializar ==" << endl;
    FlightDataDeserializada.imprimir();

    return 0;
}