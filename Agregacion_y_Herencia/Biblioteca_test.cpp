//
// Created by ariana on 3/05/19.
//

#include "catch.hpp"
#include "Biblioteca.h"

SCENARIO("BIBLIOTECA"){
    GIVEN("Existen 3 libros y 3 revistas"){
        WHEN("Incluir 3 libros y 3 revistas dentro de la librería"){
            Biblioteca b;
            Libro *l1=new Libro(1,1,"El anticristo");
            Revista *r1=new Revista(1,2,"Hola");
            Revista *r2=new Revista(2,3,"Caretas");
            Libro *l2=new Libro(2,4,"Así habló Saratustra");
            Revista *r3=new Revista(3,5,"Nature");
            Libro *l3=new Libro(3,6,"Más allá del bien y del mal");
            THEN("Comprobar que la biblioteca tenga 6 volumenes"){
                REQUIRE(b.tamano()==6);
            }
        }
    }
}