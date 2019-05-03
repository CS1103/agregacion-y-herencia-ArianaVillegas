//
// Created by ariana on 3/05/19.
//

#ifndef AGREGACION_Y_HERENCIA_BIBLIOTECA_H
#define AGREGACION_Y_HERENCIA_BIBLIOTECA_H

#include <string>
#include <vector>

class Volumen{
protected:
    int num_volumen;
    std::string nombre;
public:
    Volumen(int num_volumen,std::string nombre):num_volumen(num_volumen),nombre(nombre){}
    virtual void mostrar()=0;
};

class Libro:public Volumen{
    int num_libro;
public:
    Libro(int num_libro,int num_volumen,std::string nombre):Volumen(num_volumen, nombre),num_libro(num_libro){};
    void mostrar()override;
};

class Revista:public Volumen{
    int num_revista;
public:
    Revista(int num_revista,int num_volumen,std::string nombre):Volumen(num_volumen, nombre),num_revista(num_revista){};
    void mostrar()override;
};

class Biblioteca{
    std::vector <Volumen*> biblioteca;
    int numLibro;
    int numRevista;
public:
    Biblioteca();
    void mostrarBiblioteca();
    int tamano(){ return numLibro+numRevista;};
    void incluir(char tipo, std::string nombre);
    ~Biblioteca();
};

#endif //AGREGACION_Y_HERENCIA_BIBLIOTECA_H
