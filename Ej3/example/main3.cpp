#include "../headers/CrearJSON.hpp"
#include <string>
#include <iostream>

using namespace std;

int main() {
    // Creo un objeto de la clase Datos para doubles
    Dato<double> datosDouble;
    datosDouble.agregarValor(1.3d);
    datosDouble.agregarValor(2.1d);
    datosDouble.agregarValor(3.2d);

    // Creo un objeto de la clase Datos para strings
    Dato<string> datosString;
    datosString.agregarValor(std::string("Hola"));
    datosString.agregarValor(std::string("Mundo"));

    // Creo un objeto de la clase Datos para enteros
    Dato<int> datosEnteros;
    datosEnteros.agregarValor(1);
    datosEnteros.agregarValor(2);
    datosEnteros.agregarValor(3);
    datosEnteros.agregarValor(4);



    // Crear un objeto de la clase CrearJSON
    CrearJSON JSON;
    // Agregar datos al JSON
    JSON.agregarDato("vec_doubles", datosDouble);
    JSON.agregarDato("palabras", datosString);
    JSON.agregarDato("listas", datosEnteros);

    // Imprimir el JSON
    JSON.imprimirJSON();

    return 0;
}