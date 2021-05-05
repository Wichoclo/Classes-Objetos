#include <iostream>
#include "Punto.h"
#include <cmath>

using namespace std;

class linea
{
private:
    Punto P_init;
    Punto P_fin;
public:
    linea(float x_init, float y_init, float x_fin, float y_fin){
        P_init.setX(x_init);
        P_init.setY(y_init);
        P_fin.setx(x_fin);
        P_fin.setY(y_fin);
    }
    linea(Punto init, Punto final){
        P_init = init;
        P_fin = final;
    }
    setP(Punto init, Punto final){
        P_init = Init;
        P_fin = final;
    }
    void Describe(){
        cout<< "x_0" << P_init.getX()<< "    " << "y_0" << P_init.getY << endl;
        cout<< "x_1" << P_fin.getX()<< "    " << "y_1" << P_fin.getY << endl;
        cout<< "longitud = " << longitud( << endl;
    }
    float longitud(){
        return sqrt(pow(P_init.getX()-P_fin.getX(),2) + pow(P_init.getY()-P_fin.getY(),2));
    }
    };

