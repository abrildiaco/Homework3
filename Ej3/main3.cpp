#include "headers/CrearJSON.hpp"
#include <string>
#include <iostream>


int main() {
    // Crear un objeto de la clase Datos
    Datos datos;

    // Agregar datos a los vectores y matriz
    datos.agregarValor(1.3d);
    datos.agregarValor(2.1d);
    datos.agregarValor(3.2d);
    datos.agregarValor(std::string("Hola"));
    datos.agregarValor(std::string("Mundo"));
    datos.agregarValor(1);
    datos.agregarValor(2);
    datos.agregarValor(3);
    datos.agregarValor(4);

    // Crear un objeto de la clase CrearJSON
    CrearJSON crearJSON(datos, "vec_doubles", "palabras", "listas");

    // Imprimir el JSON
    crearJSON.imprimirJSON();

    return 0;
}