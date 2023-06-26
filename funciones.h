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

void agregarNuevoVendedor() {
    cout << "Opción: Agregar nuevo vendedor" << endl;
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

int obtenerOpcion() {
    int opcion;
    string entrada;

    while (true) {
        getline(cin, entrada);

        bool esNumerico = true;
        for (char c : entrada) {
            if (!isdigit(c)) {
                esNumerico = false;
                break;
            }
        }

        if (esNumerico) {
            opcion = stoi(entrada);  
            break;
        } else {
            cout << "Opción inválida. Intente nuevamente: ";
        }
    }

    return opcion;
}

#endif
