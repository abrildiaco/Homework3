/*
1. Clase 1: esta clase se encargará de generar los vectores de double y std::string, 
así como la matriz de enteros. Para ello, se debe utilizar un método para agregar 
los valores y las palabras a la instancia de la clase para luego procesarlas según 
el tipo de dato que se pasó. 
Deberá utilizar un template para poder trabajar con los distintos tipos de datos. 
En función del tipo, y mediante el uso obligatorio de “if constexpr”, s
*/

#pragma once
#include <string>
#include <vector>
#include <type_traits>

using VD = std::vector<double>; // Vector de double
using VS = std::vector<std::string>; // Vector de string
using ME = std::vector<std::vector<int>>; // Matriz de enteros

class Datos{

    private:
        VD vectorDouble;
        VS vectorString;
        ME matrizEnteros;
    
    public:

        //constructor 
        Datos() = default;

        //metodos
        template<typename T>
        //opte por el uso de is_same para asegurar solo el ingreso
        //de esos tipos de datos
        void agregarValor(const T& valor){
            if constexpr(std::is_same(T, double)){
                vectorDouble.push_back(valor);
            }else if constexpr(std::is_same(T, std::string)){
                vectorString.push_back(valor);

            }else if constexpr(std::is_same(T, int)){
                if constexpr(matrizEnteros.[0].size() < 2){
                    matrizEnteros[0]push_back(valor);
                }
                else if constexpr(matrizEnteros.[1].size() < 2){
                    matrizEnteros[1]push_back(valor);
                }
                else std::cout << "No se pueden agregar mas valores a la matriz" << std::endl;
            }

            else
                std::cout << "Tipo de dato no soportado" << std::endl;
        }

        VD& getVectorDouble() const;
        VS& getVectorString() const;
        ME& getMatrizEnteros() const;

        // Destructor
        ~Datos() = default;

};