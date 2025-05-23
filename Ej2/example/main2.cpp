#include "../headers/procesador.hpp"
#include <iostream>
#include <string>
#include <stdexcept>
using namespace std;

//g++ main2.cpp source/figuras.cpp -o main2

int main(){
    //Punto
    Punto punto(0.0f, -13.1f);
    punto.mostrar();
    ProcesadorFigura procesadorPunto(punto);
    cout << "Area del punto: " << procesadorPunto.calcularArea() <<"\n"<<endl;

    //Circulo
    Circulo circulo(0.1f, 5.5f, 3);
    circulo.mostrar();
    ProcesadorFigura<Circulo> procesadorCirculo(circulo);
    cout << "Area del circulo: " << procesadorCirculo.calcularArea() << "\n"<<endl;

    //Elipse
    Elipse elipse(0.0f, -2.5f, 15, 1);
    elipse.mostrar();
    ProcesadorFigura<Elipse> procesadorElipse(elipse);
    cout << "Area de la elipse: " << procesadorElipse.calcularArea() << "\n"<<endl;

    //Rectangulo
    Rectangulo rectangulo(1.2f, 13.5f, 5.2f, 8);
    rectangulo.mostrar();
    ProcesadorFigura<Rectangulo> procesadorRectangulo(rectangulo);
    cout << "Area del rectangulo: " << procesadorRectangulo.calcularArea() <<"\n"<<endl;

    //caso de error
    try {
        ProcesadorFigura<string> procesadorFigura("figura");

        cout << "Area de la figura: " << procesadorFigura.calcularArea() << endl;
    } catch (const invalid_argument& e) {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}
