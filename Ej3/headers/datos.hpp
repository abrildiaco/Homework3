#pragma once
#include <string>
#include <vector>
#include <type_traits>
#include <iostream>

using VD = std::vector<double>; // Vector de double
using VS = std::vector<std::string>; // Vector de string
using VE = std::vector<int>; // vector de enteros

class Datos{

    private:
        VD vectorDouble;
        VS vectorString;
        VE ve<ctorEnteros;
    
    public:

        //constructor 
        Datos() = default;

        //metodos
        template<typename T>
        //opte por el uso de is_same_v para asegurar solo el ingreso
        //de esos tipos de datos
        void agregarValor(const T& valor){
            static_assert(std::is_same_v<T, double> || std::is_same_v<T, std::string> || std::is_same_v<T, int>, "Tipo de dato no soportado");
            
            if constexpr(std::is_same_v<T, double>){
                vectorDouble.push_back(valor);
            
            }else if constexpr(std::is_same_v<T, std::string>){
                vectorString.push_back(valor);

            }else if constexpr(std::is_same_v<T, int>){
                vectorEnteros.push_back(valor);
                
            }

        }

        void procesarVD()const;
        void procesarVS()const;
        void procesarVE()const;

        // Destructor
        ~Datos() = default;

};