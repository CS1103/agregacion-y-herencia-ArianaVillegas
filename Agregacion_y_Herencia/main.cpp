#include <iostream>
#include "Biblioteca.h"

#define CATCH_CONFIG_MAIN

#include "catch.hpp"

#ifndef CATCH_CONFIG_MAIN

int main() {
    Biblioteca b;
    b.incluir('L',"El anticristo");
    b.incluir('R',"Hola");
    b.incluir('R',"Caretas");
    b.incluir('L',"Así habló Saratustra");
    b.mostrarBiblioteca();
    return 0;
}

#endif