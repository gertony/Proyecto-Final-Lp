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







int main() {
    int opcion;

    do {
        cout << "SISTEMA COMERCIAL" << endl;
        cout << "1. NUEVOS CLIENTES" << endl;
        cout << "2. BUSCAR CLIENTES" << endl;
        cout << "3. NUEVO VENDEDOR" << endl;
        cout << "4. NUEVO PRODUCTO" << endl;
        cout << "5. VENTAS" << endl;
        cout << "6. LISTA DE CLIENTES" << endl;
        cout << "7. LISTA DE VENDEDORES" << endl;
        cout << "8. SALIR" << endl;
        cout << "Ingrese la opción a realizar_________ ";

        opcion = obtenerOpcion();

        switch (opcion) {
            case 1:
                agregarNuevoCliente();
                break;
            case 2:
                buscarCliente();
                break;
            case 3:
                agregarNuevoVendedor();
                break;
            case 4:
                agregarNuevoProducto();
                break;
            case 5:
                realizarVenta();
                break;
            case 6:
                mostrarListaClientes();
                break;
            case 7:
                mostrarListaVendedores();
                break;
            case 8:
                cout << "Saliendo..." << endl;
                break;
            default:
                cout << "Opción inválida. Intente nuevamente." << endl;
                break;
        }

        cout << endl;
    } while (opcion != 8);

    return 0;
}
