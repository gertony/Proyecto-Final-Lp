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

void agregarNuevoProducto(vector<Producto>& productos) {
    cout << "Opcion: Nuevo Producto" << endl;
    int codigo;
    string descripcion;
    double precio;
    string tipo;
    int stock;
    int capacidad;

    cout << "Ingrese el codigo del producto: ";
    cin >> codigo;

    cout << "Ingrese la descripcion del producto: ";
     cin >>descripcion;

    while (true) {
        cout << "Ingrese el precio del producto: ";
        if (cin >> precio && precio >= 0) {
            break;
        } else {
            cout << "ERR0R: El precio no puede ser negativo, intente nuevamente" << endl;
        }
    }
    cout << "Ingrese el tipo del producto: ";
    cin >> tipo;

    cout << "Ingrese el stock del producto: ";
    cin >> stock;

    while (true) {
        cout << "Ingrese la capacidad del producto: ";
        if (cin>>capacidad && capacidad <= 5) {
            break;
        } else {
            cout<<"ERR0R: La capacidad no puede exceder a 5, intente nuevamente"<<endl;

        }
    }

    Producto nuevoProducto(codigo, descripcion, precio, tipo, stock, capacidad);
    productos.push_back(nuevoProducto);

    cout << "Producto agregado correctamente." << endl;
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
