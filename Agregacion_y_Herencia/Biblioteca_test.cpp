//
// Created by ariana on 3/05/19.
//

#include "catch.hpp"
#include "Biblioteca.h"

SCENARIO("BIBLIOTECA"){
    GIVEN("Existen 3 libros y 3 revistas"){
        WHEN("Incluir 3 libros y 3 revistas dentro de la librería"){
            Biblioteca b;
            b.incluir('L',"El anticristo");
            b.incluir('R',"Hola");
            b.incluir('R',"Caretas");
            b.incluir('L',"Así habló Saratustra");
            b.incluir('R',"Nature");
            b.incluir('L',"Más allá del bien y del mal");
            THEN("Comprobar que la biblioteca tenga 6 volumenes"){
                REQUIRE(b.tamano()==6);
            }
        }
    }
}