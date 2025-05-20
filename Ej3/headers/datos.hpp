#pragma once
#include <string>
#include <vector>
#include <type_traits>
#include <iostream>

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
        Datos();

        //metodos
        template<typename T>
        //opte por el uso de is_same_v para asegurar solo el ingreso
        //de esos tipos de datos
        void agregarValor(const T& valor){
            if constexpr(std::is_same_v<T, double>){
                vectorDouble.push_back(valor);
            
            }else if constexpr(std::is_same_v<T, std::string>){
                vectorString.push_back(valor);

            }else if constexpr(std::is_same_v<T, int>){
                
                //no es posible hacer etsa parte del codigo con constexpr,
                //pues el tamaño de la matriz no es conocido en tiempo de compilacion
                if (matrizEnteros[0].size() < 2){
                    matrizEnteros[0].push_back(valor);
                }
                else if (matrizEnteros[1].size() < 2){
                    matrizEnteros[1].push_back(valor);
                }
                else std::cout << "No se pueden agregar mas valores a la matriz" << std::endl;
            }

            else
                static_assert(std::is_same_v<T, double> || std::is_same_v<T, std::string> || std::is_same_v<T, int>, "Tipo de dato no soportado");
        }

        void procesarVD()const;
        void procesarVS()const;
        void procesarME()const;

        VD getVectorDouble() const;
        VS getVectorString() const;
        ME getMatrizEnteros() const;

        // Destructor
        ~Datos() = default;

};