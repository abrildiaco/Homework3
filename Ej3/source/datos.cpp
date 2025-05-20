#include "../headers/datos.hpp"

//comstrunctp
Datos::Datos(): matrizEnteros(2) {} //al menos existen dos filas en la matriz


//metodos
void Datos::procesarVD() const{
    //imprimo el vector de double
    std::cout<<"[";
    for(double valor : vectorDouble){
        if (valor == vectorDouble.back()){
            std::cout<<valor;
        }else
            std::cout<<valor<<", ";
    }
    std::cout<<"]";
}

void Datos::procesarVS() const{
    //imprimo el vector de string
    std::cout<<"[";
    for(std::string valor : vectorString){
        if (valor == vectorString.back()){
            std::cout<<"\""<<valor<<"\"";
        }else
            std::cout<<"\""<<valor<<"\""<<", ";
    }
    std::cout<<"]";
}

void Datos::procesarME() const{
    //imprimo la matriz de enteros
    std::cout<<"[\n";
    for(int i = 0; i < matrizEnteros.size(); i++){
        std::cout<<"\t[";
        for(int j = 0; j < matrizEnteros[i].size(); j++){
            
            if (j == 1){
                std::cout<<matrizEnteros[i][j];
            }else
                std::cout<<matrizEnteros[i][j]<<",";
        }
        if (i == 1)
            std::cout<<"]\n";
        
        else std::cout<<"],\n";
    }
    std::cout<<"\t]\n";
}

VD Datos::getVectorDouble() const{
    return vectorDouble;
}

VS Datos::getVectorString() const{
    return vectorString;
}

ME Datos::getMatrizEnteros() const{
    return matrizEnteros;
}