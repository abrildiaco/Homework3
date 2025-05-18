#include "headers/procesador.hpp"
#include <iostream>
#include <string>
#include <stdexcept>
using namespace std;

//g++ main2.cpp source/figuras.cpp -o main2

int main(){
    //Punto
    Punto punto(0.0f, -13.1f);
    punto.mostrar();
    cout << "Area del punto: " << ProcesadorFigura<Punto>::calcularArea(punto) <<"\n"<<endl;

    //Circulo
    Circulo circulo(0.1f, 5.5f, 3);
    circulo.mostrar();
    cout << "Area del circulo: " << ProcesadorFigura<Circulo>::calcularArea(circulo) << "\n"<<endl;

    //Elipse
    Elipse elipse(0.0f, -2.5f, 15, 1);
    elipse.mostrar();
    cout << "Area de la elipse: " << ProcesadorFigura<Elipse>::calcularArea(elipse) << "\n"<<endl;

    //Rectangulo
    Rectangulo rectangulo(1.2f, 13.5f, 5.2f, 8);
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
