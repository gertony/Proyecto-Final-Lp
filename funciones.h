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

void buscarCliente() {
    cout << "Opción: Buscar cliente" << endl;
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
    cout << "Opción: Mostrar lista de clientes" << endl;
}

void mostrarListaVendedores() {
    cout << "Opción: Mostrar lista de vendedores" << endl;
}



#endif
