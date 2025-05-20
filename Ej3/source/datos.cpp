#include "../headers/datos.hpp"
#include <iostream>

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

void Datos::procesarVE() const{
    //imprimo la matriz de enteros
    std::cout<<"[\n";
    for(int i = 0; i < 4; i++){
        if(i == 0 || i == 2)
            std::cout<<"\t["<< vectorEnteros[i] <<", ";
        
        else if(i == 3)
            std::cout<< vectorEnteros[i] <<"]\n";
        else
            std::cout<< vectorEnteros[i] <<"],\n";
              
    }
    std::cout<<"\t]\n";
}
