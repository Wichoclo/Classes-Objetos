#include "cuadrilatero.h"
#include <iostream>

int main(){
    cuadrilatero cuadrado((0,0),(0,1),(1,1),(1,0));
    cuadrado.Describe();

    cuadrilatero rectangulo((1,2),(1,-2),(-1,-2),(-1,2));
    rectangulo.Describe();

    cuadrilatero rombo((1,1),(1,0),(0,-1),(-1,0));
    rombo.Describe();

    cuadrilatero romboide((1,1),(1,0),(0,-2),(-1,0));
    romboide.Describe();

    cuadrilatero trapecio((1,2),(2,0),(-2,0),(-1,2));
    trapecio.Describe();

    cuadrilatero irregular((1,2),(1,0),(-1,-1),(0,1));
    irregular.Describe();

}