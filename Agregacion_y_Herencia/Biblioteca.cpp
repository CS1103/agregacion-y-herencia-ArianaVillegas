//
// Created by ariana on 3/05/19.
//
#include <iostream>
#include "Biblioteca.h"

void Libro::mostrar() {
    std::cout<<"\nVolumen #"<<num_volumen<<":   Libro #"<<num_libro<<"   Título: \""<<nombre<<'\"';
}

void Revista::mostrar() {
    std::cout<<"\nVolumen #"<<num_volumen<<":   Revista #"<<num_revista<<"   Título: \""<<nombre<<'\"';
}

Biblioteca::Biblioteca() {
    numVolumen=0;
}

void Biblioteca::mostrarBiblioteca() {
    for (int i=0; i<numVolumen; i++){
        biblioteca[i]->mostrar();
    }
}

void Biblioteca::incluir(Volumen *v) {
    Libro* l= dynamic_cast<Libro*>(v);
    Revista* r= dynamic_cast<Revista*>(v);
    if(l!= nullptr){biblioteca.push_back(l);}
    if(r!= nullptr){biblioteca.push_back(r);}
    numVolumen++;
}

Biblioteca::~Biblioteca() {
    biblioteca.clear();
}