#include "cuadrilatero.h"
#include <iostream>

int main(){
    cuadrilatero cuadrado(Punto (0,0),Punto (0,1),Punto (1,1), Punto(1,0));
    cuadrado.Describe();

    cuadrilatero rectangulo(Punto (1,2),Punto (1,-2),Punto (-1,-2),Punto (-1,2));
    rectangulo.Describe();

    cuadrilatero rombo(Punto (1,1),Punto (1,0),Punto (0,-1),Punto (-1,0));
    rombo.Describe();

    cuadrilatero romboide(Punto (1,1),Punto (1,0),Punto (0,-2),Punto (-1,0));
    romboide.Describe();

    cuadrilatero trapecio(Punto (1,2),Punto (2,0),Punto (-2,0),Punto (-1,2));
    trapecio.Describe();

    cuadrilatero irregular(Punto (1,2),Punto (1,0),Punto (-1,-1),Punto (0,1));
    irregular.Describe();

}