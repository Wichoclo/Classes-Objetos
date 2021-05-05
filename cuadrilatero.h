#include "Punto.h"
#include "linea.h"
#include <cmath>
#include <iostream>

class cuadrilatero
{
private:
    Punto   cordenadaP1;
    Punto   cordenadaP2;
    Punto   cordenadaP3;
    Punto   cordenadaP4;


    linea   l1;
    linea   l2;
    linea   l3;
    linea   l4;
    linea   l5;//diagonal

public:
    cuadrilatero(float aX,float aY, float bX,float bY, float cX,float cY,float dX,float dY){
        cordenadaP1.setX(aX);
        cordenadaP1.setY(aY);
        cordenadaP2.setX(bX);
        cordenadaP2.setY(bY);
        cordenadaP3.setX(cX);
        cordenadaP3.setY(cY);
        cordenadaP4.setX(dX);
        cordenadaP4.setY(dY);

        l1.setP(cordenadaP1,cordenadaP2);
        l2.setP(cordenadaP2,cordenadaP3);
        l3.setP(cordenadaP3,cordenadaP4);
        l4.setP(cordenadaP4,cordenadaP1);
        l5.setP(cordenadaP1,cordenadaP3);
    }
    cuadrilatero(Punto A,Punto B,Punto C,Punto D){
        cordenadaP1 = A;
        cordenadaP2 = B;
        cordenadaP3 = C;
        cordenadaP4 = D;

        l1.setP(cordenadaP1,cordenadaP2);
        l2.setP(cordenadaP2,cordenadaP3);
        l3.setP(cordenadaP3,cordenadaP4);
        l4.setP(cordenadaP4,cordenadaP1);
        l5.setP(cordenadaP1,cordenadaP3);
    }
    void Describe(){
        cout << "vertice 1 en: "<< cordenadaP1.Describe();
        cout << "vertice 2 en: "<< cordenadaP2.Describe();
        cout << "vertice 3 en: "<< cordenadaP3.Describe();
        cout << "vertice 4 en: "<< cordenadaP4.Describe();
        cout << "perimetro = " << Perimetro() << endl;
        cout << "Area = " << Area() << endl;

    }
    float Perimetro(){
            return (l1.longitud()+l2.longitud()+l3.longitud()+l4.longitud());
    }
    float Area(){
        float semiP1 = (l1.longitud()+l2.longitud()+l5.longitud())/2;
        float semiP2 = (l3.longitud()+l4.longitud()+l5.longitud())/2;
        return sqrt(semiP1 (semiP1-l1.longitud()) (semiP1-l2.longitud()) (semiP1-l5.longitud()) ) * sqrt(semiP2 (semiP1-l3.longitud()) (semiP2-l4.longitud()) (semiP2-l5.longitud()) );
    }
};

