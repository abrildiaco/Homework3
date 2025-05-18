#include "../headers/figuras.hpp"
#include <iostream>
using namespace std;

//PUNTO

//constructor
Punto::Punto(float x_, float y_) : x(x_), y(y_) {}

//metodos
void Punto::setX(float x_) {x = x_;}
void Punto::setY(float y_) {y = y_;}

float Punto::getX() const {return x;}
float Punto::getY() const {return y;}

void Punto::mostrar() const {
    cout << "Punto: (" << x << ", " << y << ")" << endl;
}

//CIRCULO

//constructor
Circulo::Circulo(float x_, float y_, float r_) : Punto(x_, y_), r(r_) {}

//metodos
void Circulo::setR(float r_) {r = r_;}
float Circulo::getR() const {return r;}

void Circulo::mostrar() const {
    cout << "Circulo: centrado en (" << getX() << ", " << getY() << ") y de radio  r = " << r << endl;
}

//ELIPSE

//constructor
Elipse::Elipse(float x_, float y_, float a_, float b_) : Punto(x_, y_), a(a_), b(b_) {}

//metodos
void Elipse::setA(float a_) {a = a_;}
void Elipse::setB(float b_) {b = b_;}
float Elipse::getA() const {return a;}
float Elipse::getB() const {return b;}

void Elipse::mostrar() const {
    cout << "Elipse: centrada en (" << getX() << ", " << getY() << ") con semi-eje mayor  a = " << a << " y semi-eje menor b = " << b << endl;
}

//RECTANGULO

//constructor
Rectangulo::Rectangulo(float x_, float y_, float ancho_, float largo_) : Punto(x_, y_), ancho(ancho_), largo(largo_) {}

//metodos
void Rectangulo::setAncho(float ancho_) {ancho = ancho_;}
void Rectangulo::setLargo(float largo_) {largo = largo_;}
float Rectangulo::getAncho() const {return ancho;}
float Rectangulo::getLargo() const {return largo;}

void Rectangulo::mostrar() const {
    cout << "Rectangulo: vertice inferior izquierdo en (" << getX() << ", " << getY() << ") con ancho = " << ancho << " y largo = " << largo << endl;
}