#ifndef CLASES_H
#define CLASES_H

#include <iostream>
#include <string>
#include <vector>

using namespace std;


class Persona {
    private:
        string email;
        string clave;

    public:
        int codigo;
        string nombre;
        int telefono;
        char categoria;
        int ruc;
        string direccion;

    Persona ( ) { }
    Persona(string email, string clave, int codigo, string nombre, int telefono, char categoria, int ruc, string direccion) {
        this->email = email;
        this->clave = clave;
        this->codigo = codigo;
        this->nombre = nombre;
        this->telefono = telefono;
        this->categoria = categoria;
        this->ruc = ruc;
        this->direccion = direccion;
    }

    
};

class ClienteIndividual : public Persona {
    private:
        double tasaDescuento;
    
    public:
        ClienteIndividual() { }
        ClienteIndividual(string email, string clave, int codigo, string nombre, int telefono, char categoria, int ruc, string direccion) : Persona(email, clave, codigo, nombre, telefono, categoria, ruc, direccion) {
            this->tasaDescuento = 0.03;
        }

};

class ClienteCorporativo : public Persona {
    private:
        double tasaDescuento;
    
    public:
        ClienteCorporativo() { }
        ClienteCorporativo(string email, string clave, int codigo, string nombre, int telefono, char categoria, int ruc, string direccion) : Persona(email, clave, codigo, nombre, telefono, categoria, ruc, direccion) {
            this->tasaDescuento = 0.10;
        }

};




#endif
