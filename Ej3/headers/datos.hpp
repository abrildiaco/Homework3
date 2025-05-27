#pragma once
#include <string>
#include <vector>
#include <type_traits>
#include <iostream>

using VD = std::vector<double>; 
using VS = std::vector<std::string>;
using VE = std::vector<int>;

//Claclase Dato guarda datos del mismo tipo en un vector y los procesa
template<typename T>
class Dato{

    private:
        std::vector<T> datos; //vector que almacena los datos
    
    public:

        //constructor 
        Dato() = default;

        //metodos
        
        //opte por el uso de is_same_v para asegurar solo el ingreso
        //de esos tipos de datos
        void agregarValor(const T& valor){
            //verifico que el tipo de dato sea uno de los tres soportados
            static_assert(std::is_same_v<T, double> || std::is_same_v<T, std::string> || std::is_same_v<T, int>, "Tipo de dato no soportado");
            
            //agrego el valor al vector
            datos.push_back(valor);

        }

        //segun el tipo de vector a procesar, se devuelve un string correspondiente
        std::string procesar() const {
            //verifico que el tipo de dato sea uno de los tres soportados
            static_assert(std::is_same_v<T, double> || std::is_same_v<T, std::string> || std::is_same_v<T, int>, "Tipo de dato no soportado");

            if constexpr(std::is_same_v<T, double>){
                //proceso el vector de double
                std::string resultado = "[";
                for(const double valor : datos){
                    if (valor == datos.back()){
                        resultado += std::to_string(valor);
                    }else
                        resultado += std::to_string(valor) + ", ";
                }
                resultado += "]";
                
                return resultado;
            
            }else if constexpr(std::is_same_v<T, std::string>){
                //proceso el vector de string
                std::string resultado = "[";
                for(const std::string valor : datos){
                    if (valor == datos.back()){
                        resultado += "\"" + valor + "\"";
                    }else
                        resultado += "\"" + valor + "\"" + ", ";
                }
                resultado += "]";
                
                return resultado;

            }else if constexpr(std::is_same_v<T, int>){
                //proceso la matriz de enteros
                std::string resultado = "[\n";
                for(size_t i = 0; i < 4; i++){
                    if(i == 0 || i == 2)
                        resultado += "\t[" + std::to_string(datos[i]) + ", ";
                    
                    else if(i == 3)
                        resultado += std::to_string(datos[i]) + "]\n";
                    
                    else
                        resultado += std::to_string(datos[i]) + "],\n";
                }
                resultado += "\t]\n";

                return resultado;
            }
        }

        // Destructor
        ~Dato() = default;

};