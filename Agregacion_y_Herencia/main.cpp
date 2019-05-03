#include <iostream>

#define CATCH_CONFIG_MAIN

#include "catch.hpp"

#ifndef CATCH_CONFIG_MAIN

int main() {
    Biblioteca b;
    Libro *l1=new Libro(1,1,"El anticristo");
    Revista *r1=new Revista(1,2,"Hola");
    Revista *r2=new Revista(2,3,"Caretas");
    Libro *l2=new Libro(2,4,"Así habló Saratustra");
    b.incluir(l1);
    b.incluir(r1);
    b.incluir(r2);
    b.incluir(l2);
    b.mostrarBiblioteca();
    return 0;
}

#endif