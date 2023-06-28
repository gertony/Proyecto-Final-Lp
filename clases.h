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
        
        Persona ( ) { }
        Persona(string email, string clave, int codigo, string nombre, int telefono) {
            this->email = email;
            this->clave = clave;
            this->codigo = codigo;
            this->nombre = nombre;
            this->telefono = telefono;
        }
};

class Cliente : public Persona{
    protected:
        double tasaDescuento;
    public:
        int codigo;
        string nombre;
        int telefono;
        char categoria;
        int ruc;
        string direccion;
        Cliente() { }
        Cliente (string email, string clave, int codigo, string nombre, int telefono, char categoria, int ruc, string direccion) : Persona(email, clave, codigo, nombre, telefono) {
            this->codigo = codigo;
            this->nombre = nombre;
            this->telefono = telefono;
            this->categoria = categoria;
            this->ruc = ruc;
            this->direccion = direccion;
        }
    friend ostream& operator<<(ostream& o, const Cliente& cliente){
        o<<"- Cliente: "<<cliente.nombre<<" "<<cliente.codigo<<" "<<cliente.telefono<<" "<<cliente.categoria<<" "<<cliente.ruc<<" "<<cliente.direccion<<endl;
        return o;
    }

};

class ClienteIndividual : public Cliente {
    private:
    
    public:
        ClienteIndividual() { }
        ClienteIndividual(string email, string clave, int codigo, string nombre, int telefono, char categoria, int ruc, string direccion) : Cliente(email, clave, codigo, nombre, telefono, categoria, ruc, direccion) {
            this->tasaDescuento = 0.03;
        }

};

class ClienteCorporativo : public Cliente {
    public:
        ClienteCorporativo() { }
        ClienteCorporativo(string email, string clave, int codigo, string nombre, int telefono, char categoria, int ruc, string direccion) : Cliente(email, clave, codigo, nombre, telefono, categoria, ruc, direccion) {
            this->tasaDescuento = 0.10;
        }
};

class Vendedores : public Persona {

    public:
        int codigo;
        double salario;
    Vendedores(int codigo, string nombre, double salario){
        this->codigo = codigo;
        this->nombre= nombre;
        this->salario = salario;
    }
};


#endif
