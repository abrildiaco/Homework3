#include "headers/procesador.hpp"
#include <iostream>
#include <string>
#include <stdexcept>
using namespace std;

//g++ main2.cpp source/figuras.cpp -o main2

int main(){
    //Punto
    Punto punto(0, 13);
    punto.mostrar();
    cout << "Area del punto: " << ProcesadorFigura<Punto>::calcularArea(punto) <<"\n"<<endl;

    //Circulo
    Circulo circulo(0, 13, 3);
    circulo.mostrar();
    cout << "Area del circulo: " << ProcesadorFigura<Circulo>::calcularArea(circulo) << "\n"<<endl;

    //Elipse
    Elipse elipse(0, 13, 15, 1);
    elipse.mostrar();
    cout << "Area de la elipse: " << ProcesadorFigura<Elipse>::calcularArea(elipse) << "\n"<<endl;

    //Rectangulo
    Rectangulo rectangulo(0, 13, 5, 8);
    rectangulo.mostrar();
    cout << "Area del rectangulo: " << ProcesadorFigura<Rectangulo>::calcularArea(rectangulo) <<"\n"<<endl;

    //caso de error
    try {
        cout << "Area de la figura: " << ProcesadorFigura<string>::calcularArea("figura") << endl;
    } catch (const invalid_argument& e) {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}
