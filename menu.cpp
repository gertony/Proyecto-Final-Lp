#include <iostream>
#include "funciones.h"

using namespace std;

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
