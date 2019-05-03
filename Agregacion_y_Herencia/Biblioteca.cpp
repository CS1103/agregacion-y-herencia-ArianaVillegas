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
    numLibro=0;
    numRevista=0;
}

void Biblioteca::mostrarBiblioteca() {
    for (int i=0; i<numLibro+numRevista; i++){
        biblioteca[i]->mostrar();
    }
}

void Biblioteca::incluir(char tipo, std::string nombre) {
    switch (tipo){
        case 'L':{
            numLibro++;
            Libro* l=new Libro(numLibro,numRevista+numLibro,nombre);
            biblioteca.push_back(l);
            break;
        }
        case 'R':{
            numRevista++;
            Revista* r=new Revista(numRevista,numRevista+numLibro,nombre);
            biblioteca.push_back(r);
            break;
        }
    }
}

Biblioteca::~Biblioteca() {
    biblioteca.clear();
}