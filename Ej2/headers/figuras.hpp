#pragma once

//CLASE PUNTO

class Punto {
    private:
        float x;
        float y;
    public:
        //constructor
        Punto(float x_ = 0, float y_ = 0);

        //metodos
        void setX(float x_);
        void setY(float y_);
        float getX() const;
        float getY() const;

        virtual void mostrar() const;

        //destructor
        ~Punto() = default;
};

//CLASE CIRCULO

class Circulo: public Punto { //el centro del circulo es un punto --> hereda de Punto
    private:
        float r;
    public:
        //constructor
        Circulo(float x_ = 0, float y_ = 0, float r_ = 0);

        //metodos
        void setR(float r_);
        float getR() const;

        void mostrar() const override;

        //destructor
        ~Circulo() = default;
};

//CLASE ELLIPSE

class Elipse: public Punto { //el centro de la elipse es un punto --> hereda de Punto
    private:
        float a;
        float b;
    public:
        //constructor
        Elipse(float x_ = 0, float y_ = 0, float a_ = 0, float b_ = 0);

        //metodos
        void setA(float a_);
        void setB(float b_);
        float getA() const;
        float getB() const;

        void mostrar() const override;

        //destructor
        ~Elipse() = default;
};

//CLASE RECTANGULO

class Rectangulo: public Punto { //el vertice inferior izquierdo del rectangulo es un punto --> hereda de Punto
    private:
        float ancho;
        float largo;
    public:
        //constructor
        Rectangulo(float x_ = 0, float y_ = 0, float ancho_ = 0, float largo_ = 0);

        //metodos
        void setAncho(float ancho_);
        void setLargo(float largo_);
        float getAncho() const;
        float getLargo() const;

        void mostrar() const override;

        //destructor
        ~Rectangulo() = default;
};