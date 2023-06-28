#ifndef FUNCIONES_H
#define FUNCIONES_H

#include <iostream>
#include <string>
#include <vector>

#include "clases.h"

using namespace std;

void agregarNuevoCliente() {
    cout << "Opción: Agregar nuevo cliente" << endl;
}

void buscarCliente(int codigo, vector<Cliente>& clientes) {
        Cliente cl;
        bool clienteExistente=false;
        for (auto& cliente:clientes){
            if (cliente.codigo==codigo){
                cl=cliente;
                clienteExistente=true;
                break;
            }
        }
        if (clienteExistente){
            cout<<"Si existe (nombre, codigo, telefono, categoria, RUC, direccion)"<<endl;
            cout<<cl;
        }
        else{
            cout<<"El cliente no existe en la lista."<<endl;
        }
}

void agregarNuevoVendedor(string nombre, vector<Vendedores>& vendedores) {
    bool vendedorExistente = false;
    for (auto& vendedor : vendedores) {
        if (vendedor.nombre == nombre) {
            vendedorExistente = true;
            break;
        }
    }

    if (vendedorExistente) {
        cout<<"ERR0R, vendedor ya registrado"<<endl;
    } else {
        int codigo;
        double salario;
        cout<<"Ingrese el codigo del cliente: ";
        cin>>codigo;
        cout<<"Ingrese el salario del vendedor: ";
        cin>>salario;
        Vendedores nuevoVendedor(codigo, nombre, salario);
        vendedores.push_back(nuevoVendedor);
        cout<<"Se agregará el nuevo vendedor..."<<nuevoVendedor.nombre<<endl;
    }
}

void agregarNuevoProducto() {
    cout << "Opción: Agregar nuevo producto" << endl;
}

void realizarVenta() {
    cout << "Opción: Realizar venta" << endl;
}

void mostrarListaClientes() {
    cout<<"Mostar Lista de Clientes."<<endl;
}

void mostrarListaVendedores() {
    cout<<"Mostrar Lista de Vendedores"<<endl;
}



#endif
