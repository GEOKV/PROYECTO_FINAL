#pragma once
#include <iostream>
#include <string>
#include <regex>
#include <mysql.h>
#include "Cliente.h"
#include "Puestos.h"
#include "Empleados.h"
#include "Proveedores.h"
#include "Marcas.h"
#include "Productos.h"
#include "ventas_detalle.h"
#include "Compras.h"
#include <random>

using namespace std;

void Crear_Clientes();
void Mostrar_Clientes();
void Actualizar_Clientes();
void Eliminar_Clientes();

void Crear_Puestos();
void Mostrar_Puestos();
void Actualizar_Puestos();
void Eliminar_Puestos();

void Crear_Empleados();
void Mostrar_Empleados();
void Actualizar_Empleados();
void Eliminar_Empleados();

void Crear_Marcas();
void Mostrar_Marcas();
void Actualizar_Marcas();
void Eliminar_Marcas();

void Crear_Proveedores();
void Mostrar_Proveedores();
void Actualizar_Proveedores();
void Eliminar_Proveedores();


void Crear_Productos();
void Mostrar_Productos();
void Actualizar_Productos();
void Eliminar_Productos();

void Crear_Compras();
void Mostrar_Compras();
void Actualizar_Compras();
void Eliminar_Compras();

void Crear_ventas_detalle();
void Mostrar_ventas_detalle();
void Actualizar_ventas_detalle();
void Eliminar_ventas_detalle();
void imprimirFactura();

int main() {
    char opc;
    int opcion = 0;
    do {
        system("cls");
        cout << "------------------BIENVENIDOS AL MENU PRINCIPAL------------------" << endl;
        cout << "-------------------------ELIJA UNA OPCION-------------------------" << endl;
        cout << "1. Clientes " << endl;
        cout << "2. Puestos " << endl;
        cout << "3. Empleados " << endl;
        cout << "4. Marcas " << endl;
        cout << "5. Proveedores " << endl;
        cout << "6. Productos " << endl;
        cout << "7. Compras  " << endl;
        cout << "8. Ventas " << endl;
        cout << "9. Imprimir Factura" << endl;
        cout << endl;
        cout << "opcion: ";
        cin >> opcion;
        switch (opcion) {
        case 1:
            system("cls");
            
            int opcionclientes;
            cout << "------------------BIENVENIDOS A LA TABLA DE CLIENTES------------------" << endl;
            cout << "----------------------------ELIJA UNA OPCION--------------------------" << endl;
            cout << "1. Crear " << endl;
            cout << "2. Leer " << endl;
            cout << "3. Actualizar " << endl;
            cout << "4. Eliminar" << endl;

            cout << "opcion: ";
            cin >> opcionclientes;
            switch (opcionclientes) {
            case 1:
                Crear_Clientes();
                break;
            case 2:
                Mostrar_Clientes();
                break;
            case 3:
                Actualizar_Clientes();
                break;
            case 4:
                Eliminar_Clientes();
                break;
            default: cout << "Esa opcion no existe!" << endl;
                break;
            }
            break;
        case 2: 
            system("cls");
            int opcionpuestos;
            cout << "------------------BIENVENIDOS A LA TABLA DE PUESTOS------------------" << endl;
            cout << "----------------------------ELIJA UNA OPCION--------------------------" << endl;
            cout << "1. Crear " << endl;
            cout << "2. Leer " << endl;
            cout << "3. Actualizar " << endl;
            cout << "4. Eliminar" << endl;

            cout << "opcion: ";
            cin >> opcionpuestos;
            switch (opcionpuestos) {
            case 1:
                Crear_Puestos();
                break;
            case 2:
                Mostrar_Puestos();
                break;
            case 3:
                Actualizar_Puestos();
                break;
            case 4:
                Eliminar_Puestos();
                break;
            default: cout << "Esa opcion no existe!" << endl;
                break;
            }
            break;
        case 3: 
            system("cls");
            int opcionempleados;
            cout << "------------------BIENVENIDOS A LA TABLA DE EMPLEADOS------------------" << endl;
            cout << "-----------------------------ELIJA UNA OPCION--------------------------" << endl;
            cout << "1. Crear " << endl;
            cout << "2. Leer " << endl;
            cout << "3. Actualizar " << endl;
            cout << "4. Eliminar" << endl;

            cout << "opcion: ";
            cin >> opcionempleados;
            switch (opcionempleados) {
            case 1:
                Crear_Empleados();
                break;
            case 2:
                Mostrar_Empleados();
                break;
            case 3:
                Actualizar_Empleados();
                break;
            case 4:
                Eliminar_Empleados();
                break;
            default: cout << "Esa opcion no existe!" << endl;
                break;
            }
            break;
        case 4: 
            system("cls");
            int opcionmarcas;
            cout << "------------------BIENVENIDOS A LA TABLA DE MARCAS------------------" << endl;
            cout << "---------------------------ELIJA UNA OPCION-------------------------" << endl;
            cout << "1. Crear " << endl;
            cout << "2. Leer " << endl;
            cout << "3. Actualizar " << endl;
            cout << "4. Eliminar" << endl;

            cout << "opcion: ";
            cin >> opcionmarcas;
            switch (opcionmarcas) {
            case 1:
                Crear_Marcas();
                break;
            case 2:
                Mostrar_Marcas();
                break;
            case 3:
                Actualizar_Marcas();
                break;
            case 4:
                Eliminar_Marcas();
                break;
            default: cout << "Esa opcion no existe!" << endl;
                break;
            }
            break;
        case 5: 
            system("cls");
            int opcionproveed;
            cout << "------------------BIENVENIDOS A LA TABLA DE PROVEEDORES------------------" << endl;
            cout << "-----------------------------ELIJA UNA OPCION----------------------------" << endl;
            cout << "1. Crear " << endl;
            cout << "2. Leer " << endl;
            cout << "3. Actualizar " << endl;
            cout << "4. Eliminar" << endl;

            cout << "opcion: ";
            cin >> opcionproveed;
            switch (opcionproveed) {
            case 1:
                Crear_Proveedores();
                break;
            case 2:
                Mostrar_Proveedores();
                break;
            case 3:
                Actualizar_Proveedores();
                break;
            case 4:
                Eliminar_Proveedores();
                break;
            default: cout << "Esa opcion no existe!" << endl;
                break;
            }
            break;
        case 6: 
            system("cls");
            int opcionpro;
            cout << "------------------BIENVENIDOS A LA TABLA DE PRODUCTOS------------------" << endl;
            cout << "-----------------------------ELIJA UNA OPCION--------------------------" << endl;
            cout << "1. Crear " << endl;
            cout << "2. Leer " << endl;
            cout << "3. Actualizar " << endl;
            cout << "4. Eliminar" << endl;

            cout << "opcion: ";
            cin >> opcionpro;
            switch (opcionpro) {
            case 1:
                Crear_Productos();
                break;
            case 2:
                Mostrar_Productos();
                break;
            case 3:
                Actualizar_Productos();
                break;
            case 4:
                Eliminar_Productos();
                break;
            default: cout << "Esa opcion no existe!" << endl;
                break;
            }
            break;
        case 7: 
            system("cls");
            int opcioncompras;
            cout << "------------------BIENVENIDOS A LA TABLA DE COMPRAS------------------" << endl;
            cout << "----------------------------ELIJA UNA OPCION-------------------------" << endl;
            cout << "1. Crear " << endl;
            cout << "2. Leer " << endl;
            cout << "3. Actualizar " << endl;
            cout << "4. Eliminar" << endl;

            cout << "opcion: ";
            cin >> opcioncompras;
            switch (opcioncompras) {
            case 1:
                Crear_Compras();
                break;
            case 2:
                Mostrar_Compras();
                break;
            case 3:
                Actualizar_Compras();
                break;
            case 4:
                Eliminar_Compras();
                break;
            default: cout << "Esa opcion no existe!" << endl;
                break;
            }
            break;
        case 8:
            system("cls");
            int opcionv;
            cout << "------------------BIENVENIDOS A LA TABLA DE VENTAS------------------" << endl;
            cout << "---------------------------ELIJA UNA OPCION-------------------------" << endl;
            cout << "1. Crear " << endl;
            cout << "2. Leer " << endl;
            cout << "3. Actualizar " << endl;
            cout << "4. Eliminar" << endl;

            cout << "opcion: ";
            cin >> opcionv;
            switch (opcionv) {
            case 1:
                Crear_ventas_detalle();
                break;
            case 2:
                Mostrar_ventas_detalle();
                break;
            case 3:
                Actualizar_ventas_detalle();
                break;
            case 4:
                Eliminar_ventas_detalle();
                break;
            default: cout << "Esa opcion no existe!" << endl;
                break;
            }
            break;   
        case 9:
            imprimirFactura();
            break;
        default:
            cout << "La opcion ingresada no es valida!" << endl;
            break;
            break;
        }
        cout << "Desea continuar? (s/n)";
        cin >> opc;
    } while (opc == 's' || opc == 'S');
    system("pause");
    return 0;
}

bool validarNIT(const string& nit) {
    regex formato("^\\d{5}-\\d{3}-\\d{1}$");
    if (nit == "Consumidor Final" || nit == "C/F") {
        return true;
    }
    return regex_match(nit, formato);
}



void Crear_Clientes() {
    char opcion;
    do {
        string NIT, nombres, apellidos, telefono, correo_electronico;
        int idCliente = 0;
        bool genero;
        cin.ignore();
        cout << "Ingrese nombres: ";
        getline(cin, nombres);
        cout << "Ingrese apellidos: ";
        getline(cin, apellidos);
        cout << "Ingrese NIT   EJ. 00000-000-0: ";
        getline(cin, NIT);
        while (!validarNIT(NIT)) {
            cout << "El NIT ingresado no es valido." << endl;
            cout << "Ingrese otro NIT que si sea valido: " << endl;
            getline(cin, NIT);
        }
        cout << "Ingrese genero: (0 masculino. 1 femenino)" << endl;
        cin >> genero;
        cin.ignore();
        cout << "Ingrese telefono: ";
        getline(cin, telefono);
        cout << "Ingrese correo electronico: ";
        getline(cin, correo_electronico);
        Cliente c = Cliente(idCliente, nombres, apellidos, NIT, genero, telefono, correo_electronico);
        c.crear();
        cout << "Desea ingresar otro cliente? (s/n) " << endl;
        cin >> opcion;
    } while (opcion == 's' || opcion == 'S');
};
void Mostrar_Clientes() {
    system("cls");
    cout << "----------------CLIENTES GUARDADOS--------------" << endl;
    Cliente l = Cliente();
    l.leer();
};
void Actualizar_Clientes() {
    string NIT, nombres, apellidos, telefono, correo_electronico;
    int idCliente = 0;
    bool genero;
    cout << "Ingrese el idCliente que desea actualizar: " << endl;
    cin >> idCliente;
    cin.ignore();
    cout << "Ingrese nuevos Nombres: " << endl;
    getline(cin, nombres);
    cout << "Ingrese nuevos Apellidos: " << endl;
    getline(cin, apellidos);
    cout << "Ingrese nuevo nit: " << endl;
    getline(cin, NIT);
    cout << "Ingrese nuevo genero: (0 masculino. 1 femenino)" << endl;
    cin >> genero;
    cin.ignore();
    cout << "Ingrese nuevo telefono: " << endl;
    getline(cin, telefono);
    cout << "Ingrese nuevo correo electronico: " << endl;
    getline(cin, correo_electronico);
    Cliente x = Cliente(idCliente, nombres, apellidos, NIT, genero, telefono, correo_electronico);
    x.actualizar();

};
void Eliminar_Clientes() {
    int idCliente = 0;
    cout << "Ingrese el idCliente a eliminar:" << endl;
    cin >> idCliente;
    cin.ignore();
    Cliente d = Cliente(idCliente);
    d.eliminar();
};

void Crear_Puestos() {
    char opcion;
    do {
    int idPuesto = 0;
    string puesto;
    cin.ignore();
    cout << "Ingrese el puesto: " << endl;
    getline(cin, puesto);
    Puestos c = Puestos(idPuesto, puesto);
    c.crear();
    cout << "Desea ingresar otro Puesto? (s/n) " << endl;
    cin >> opcion;
    } while (opcion == 's' || opcion == 'S');
};
void Mostrar_Puestos() {
    system("cls");
    cout << "----------------PUESTOS GUARDADOS--------------" << endl;
    Puestos l = Puestos();
    l.leer();
};
void Actualizar_Puestos() {
    int idPuesto = 0;
    string puesto;
    cout << "Ingrese el idPuesto a modificar: " << endl;
    cin >> idPuesto;
    cin.ignore();
    cout << "Ingrese el nuevo puesto: " << endl;
    getline(cin, puesto);
    Puestos U = Puestos(idPuesto, puesto);
    U.actualizar();
};
void Eliminar_Puestos() {
    int idPuesto = 0;
    cout << "Ingrese el idPuesto a eliminar: " << endl;
    cin >> idPuesto;
    cin.ignore();
    Puestos D = Puestos(idPuesto);
    D.eliminar();
};


void Crear_Empleados() {
    char opcion;
    do {
    int idPuesto, idEmpleado = 0;
    string nombres, apellidos, direccion, telefono, Dpi, fechanacimiento, fecha_inicio_labores;
    bool genero = 0;
    bool valor = false;
   
    while (!valor) {
        cout << "Ingrese el idPuesto: ";
        cin >> idPuesto;
        cin.ignore();
        Empleados l = Empleados(idPuesto, nombres);
        valor = l.leerId();
    }
    
    cout << "Ingrese los nombres: ";
    getline(cin, nombres);
    cout << "Ingrese los apellidos: ";
    getline(cin, apellidos);
    cout << "Ingrese la direccion : ";
    getline(cin, direccion);
    cout << "Ingrese el telefono : ";
    getline(cin, telefono);
    cout << "Ingrese el DPI: ";
    getline(cin, Dpi);
    cout << "Ingrese genero (0. masculino 1. femenino): ";
    cin >> genero;
    cin.ignore();
    cout << "Ingrese la fecha de nacimiento: ";
    getline(cin, fechanacimiento);
    cout << "Ingrese la fecha de inicio de labores: ";
    getline(cin, fecha_inicio_labores);

    
    Empleados c = Empleados(idEmpleado, nombres, apellidos, direccion, telefono, Dpi, genero, fechanacimiento, idPuesto, fecha_inicio_labores);
    c.crear();
    cout << "Desea ingresar otro Empleado? (s/n) " << endl;
    cin >> opcion;
} while (opcion == 's' || opcion == 'S');

};
void Mostrar_Empleados() {
    system("cls");
    cout << "----------------EMPLEADOS GUARDADOS--------------" << endl;
    Empleados l = Empleados();
    l.leer();

};
void Actualizar_Empleados() {
    int idPuesto, idEmpleado;
    string nombres, apellidos, direccion, telefono, Dpi, fechanacimiento, fecha_inicio_labores;
    bool genero = 0;
    cout << "Ingrese el idEmpleado que quiere cambiar los datos:";
    cin >> idEmpleado;
    cin.ignore();
    cout << "Ingrese los nuevos nombres: ";
    getline(cin, nombres);
    cout << "Ingrese los nuevos apellidos: ";
    getline(cin, apellidos);
    cout << "Ingrese la nueva direccion : ";
    getline(cin, direccion);
    cout << "Ingrese el nuevo telefono : ";
    getline(cin, telefono);
    cout << "Ingrese el nuevo DPI: ";
    getline(cin, Dpi);
    cout << "Ingrese el idPuesto: ";
    cin >> idPuesto;
    cin.ignore();
    cout << "Ingrese nuevo genero (0. masculino 1. femenino): ";
    cin >> genero;
    cin.ignore();
    cout << "Ingrese la nueva fecha de nacimiento: ";
    getline(cin, fechanacimiento);
    cout << "Ingrese la nueva fecha de inicio de labores: ";
    getline(cin, fecha_inicio_labores);
    Empleados u = Empleados(idEmpleado, nombres, apellidos, direccion, telefono, Dpi, genero, fechanacimiento, idPuesto, fecha_inicio_labores);
    u.actualizar();
};
void Eliminar_Empleados() {
    int idEmpleado = 0;
    cout << "Ingrese el idEmpleado a eliminar: " << endl;
    cin >> idEmpleado;
    cin.ignore();
    Empleados D = Empleados(idEmpleado);
    D.eliminar();
};

void Crear_Marcas() {
    char opcion;
    do {
   
    int idMarca = 0;
    string marca;
    //cout << "Ingrese el idMarca: " << endl;  eliminar
    //cin >> idMarca; eliminar
    cin.ignore();
    cout << "Ingrese la marca: " << endl;
    getline(cin, marca);
    Marcas C = Marcas(idMarca, marca);
    C.crear();

    cout << "Desea ingresar otra Marca? (s/n) " << endl;
    cin >> opcion;
    } while (opcion == 's' || opcion == 'S');
};
void Mostrar_Marcas() {
    system("cls");
    cout << "----------------MARCAS GUARDADAS--------------" << endl;
    Marcas l = Marcas();
    l.leer();
};
void Actualizar_Marcas() {
    int idMarca;
    string marca;
    cout << "Ingrese el idMarca a buscar: " << endl;
    cin >> idMarca;
    cin.ignore();
    cout << "Ingrese la nueva marca: " << endl;
    getline(cin, marca);
    Marcas U = Marcas(idMarca, marca);
    U.actualizar();
};
void Eliminar_Marcas() {
    int idMarca = 0;
    cout << "Ingrese el idMarca a eliminar: " << endl;
    cin >> idMarca;
    cin.ignore();
    Marcas D = Marcas(idMarca);
    D.eliminar();
}

void Crear_Productos() {
    char opcion;
    do {
    
    int idProducto = 0, idMarca = 0, existencia = 0;
    string producto, descripcion, imagen, fecha_ingreso;
    float precio_costo = 0, precio_venta = 0;

    bool valor = false;
    while (!valor) {
        cout << "Ingrese el idMarca a comprobar si existe: " << endl;
        cin >> idMarca;
        cin.ignore();
        Productos l = Productos(idMarca);
        valor = l.leerId();
    }
    cout << "Ingrese el producto: " << endl;
    getline(cin, producto);
    cout << "Ingrese la descripcion: " << endl;
    getline(cin, descripcion);
    cout << "Ingrese la imagen: " << endl;
    getline(cin, imagen);
    cout << "Ingrese el precio costo: " << endl;
    cin >> precio_costo;
    cin.ignore();
    cout << "Ingrese el precio venta: " << endl;
    cin >> precio_venta;
    cin.ignore();
    cout << "Ingrese la existencia: " << endl;
    cin >> existencia;
    cin.ignore();
    Productos C = Productos(idProducto, producto, idMarca, descripcion, imagen, precio_costo, precio_venta, existencia, fecha_ingreso);
    C.crear();

    cout << "Desea ingresar otro Producto? (s/n) " << endl;
    cin >> opcion;
} while (opcion == 's' || opcion == 'S');
};
void Mostrar_Productos() {
    system("cls");
    cout << "----------------PRODUCTOS GUARDADOS--------------" << endl;
    Productos l = Productos();
    l.leer();
};
void Actualizar_Productos() {
    int idProducto, idMarca, existencia;
    string producto, descripcion, imagen, fecha_ingreso;
    float precio_costo, precio_venta;

    cout << "Ingrese el idProducto que desea actualizar:";
    cin >> idProducto;
    cin.ignore();
    cout << "Ingrese nuevo Producto: ";
    getline(cin, producto);
    cout << "Ingrese nuevo idMarca: ";
    cin >> idMarca;
    cin.ignore();
    cout << "Ingrese nueva descripcion : ";
    getline(cin, descripcion);
    cout << "Ingrese nueva imagen : ";
    getline(cin, imagen);
    cout << "Ingrese precio_costo: ";
    cin >> precio_costo;
    cout << "Ingrese precio_venta: ";
    cin >> precio_venta;
    cout << "Ingrese nueva existencia: ";
    cin >> existencia;
    cin.ignore();

    Productos u = Productos(idProducto, producto, idMarca, descripcion, imagen, precio_costo, precio_venta, existencia, fecha_ingreso);
    u.actualizar();
};
void Eliminar_Productos() {
    int idProducto = 0;
    cout << "Ingrese el idProducto a eliminar: " << endl;
    cin >> idProducto;
    cin.ignore();
    Productos d = Productos(idProducto);
    d.eliminar();
};

void Crear_Proveedores() {
    char opcion;
    do {

    int idProveedor = 0;
    string proveedor, nit, direccion, telefono;

   /*cout << "Ingrese idProveedor: ";   eliminar
    cin >> idProveedor;*/
    cin.ignore();
    cout << "Ingrese Proveedor: ";
    getline(cin, proveedor);
    cout << "Ingrese NIT: ";
    getline(cin, nit);
    cout << "Ingrese Direccion: ";
    getline(cin, direccion);
    cout << "Ingrese telefono: ";
    getline(cin, telefono);

    Proveedores c = Proveedores(idProveedor, proveedor, nit, direccion, telefono);
    c.crear();
    cout << "Desea ingresar otro Proveedor? (s/n) " << endl;
    cin >> opcion;
    } while (opcion == 's' || opcion == 'S');
};
void Mostrar_Proveedores() {
    system("cls");
    cout << "----------------PROVEEDORES GUARDADOS--------------" << endl;
    Proveedores r = Proveedores();
    r.leer();
};
void Actualizar_Proveedores() {
    int idProveedor;
    string proveedor, nit, direccion, telefono;

    cout << "Ingrese el idProveedor que desea actualizar: ";
    cin >> idProveedor;
    cin.ignore();
    cout << "Ingrese Nuevo Proveedor: ";
    getline(cin, proveedor);
    cout << "Ingrese Nuevo NIT: ";
    getline(cin, nit);
    cout << "Ingrese Nueva Direccion: ";
    getline(cin, direccion);
    cout << "Ingrese telefono: ";
    getline(cin, telefono);

    Proveedores u = Proveedores(idProveedor, proveedor, nit, direccion, telefono);
    u.actualizar();
};
void Eliminar_Proveedores() {
    int idProveedor = 0;
    cout << "Ingrese el idProveedor a eliminar:" << endl;
    cin >> idProveedor;
    cin.ignore();
    Proveedores d = Proveedores(idProveedor);
    d.eliminar();
};

void Crear_ventas_detalle() {
    int no_factura = 0;
    int idVenta = 0, idempleado = 0, idcliente = 0, idproducto = 0, idventa = 0, idventa_detalle = 0;
    char serie = 'A', opcion;
    string fechafactura, Nit, cantidad;
    float precio_unitario = 0;

    int valClientes = 0;
    while (valClientes == 0) {
        cin.ignore();
        cout << "Ingrese Nit del Cliente  EJ. 00000-000-0: " << endl;
        getline(cin, Nit);
        while (!validarNIT(Nit)) {
            cout << "El NIT ingresado no es valido." << endl;
            cout << "Ingrese Nit el formato debe ser 12345-123-1: " << endl;
            getline(cin, Nit);
        }
        Ventas_detalle VC = Ventas_detalle(Nit);
        valClientes = VC.leerNitClientes();
        idcliente = VC.getidC();
        if (valClientes == 0) {
            cout << "Ese Nit no existe desea crear un registro con ese Nit? (s/n)" << endl;
            cin >> opcion;
            cin.ignore();
            if (opcion == 's' || opcion == 'S') {
                Crear_Clientes();
            }
        }
    }
    bool valEmpleados = false;
    while (!valEmpleados) {
        cout << "Ingrese idEmpleado: " << endl;
        cin >> idempleado;
        cin.ignore();
        Ventas_detalle VE = Ventas_detalle(idempleado, no_factura, serie);
        valEmpleados = VE.leerIdEmpleados();
    }
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution < > dis(1, 5000);
    no_factura = dis(gen);
    Ventas_detalle C = Ventas_detalle(idVenta, no_factura, serie, fechafactura, idcliente, idempleado, idventa_detalle, idVenta, idproducto, cantidad, precio_unitario);
    C.crearVentas();
    Ventas_detalle r = Ventas_detalle(idempleado, no_factura, serie);
    idVenta = r.leerIdVentas();
    if (!idVenta) {
        return;
    };
    float valProducto = 0;
    char opcionpro;
    do {
        while (valProducto == 0) {
            cout << "============= Producto =============" << endl;
            cout << "Ingrese idProducto: " << endl;
            cin >> idproducto;
            cin.ignore();
            Ventas_detalle VP = Ventas_detalle(idproducto, idventa, idventa_detalle, cantidad);
            valProducto = VP.leerIdProductos();
            precio_unitario = valProducto;
            if (valProducto) {
                cout << "Ingrese la cantidad: " << endl;
                getline(cin, cantidad);
                cout << "-----------------------------------" << endl;
            }
        }
        cout << "Desea ingresar otro producto? (S/N)" << endl;
        cout << "opcion: ";
        cin >> opcionpro;
        Ventas_detalle CVD = Ventas_detalle(idVenta, no_factura, serie, fechafactura, idcliente, idempleado, idventa_detalle, idVenta, idproducto, cantidad, precio_unitario);
        CVD.crearVentasDetalle();
        valProducto = 0;
    } while (opcionpro == 's' || opcionpro == 'S');
};
void Mostrar_ventas_detalle() {
    system("cls");
    cout << "----------------VENTAS GUARDADAS--------------" << endl;
    Ventas_detalle r = Ventas_detalle();
    r.leer();
};
void Actualizar_ventas_detalle() {
    int idVenta = 0, no_factura = 0, idcliente = 0, idempleado = 0, idventa_detalle = 0, idproducto = 0, idventa = 0;
    char serie = ' ';
    string fechafactura, cantidad;
    float precio_unitario = 0;
    cout << "Ingrese idVenta a modificar de la tabla Ventas: " << endl;
    cin >> idVenta;
    cout << "Ingrese el nuevo numero de factura: " << endl;
    cin >> no_factura;
    cout << "Ingrese el nuevo idcliente: " << endl;
    cin >> idcliente;
    cout << "Ingrese el nuevo idempleado: " << endl;
    cin >> idempleado;
    cout << "_Ahora necesitamos los datos de ventas detalle_" << endl;
    fflush(stdin);
    cout << "Ingrese el idventa_detalle a actualizar: " << endl;
    cin >> idventa_detalle;
    cout << "Ingrese el nuevo idventa: " << endl;
    cin >> idventa;
    cout << "Ingrese el nuevo idProducto: " << endl;
    cin >> idproducto;
    cin.ignore();
    cout << "Ingrese la nueva cantidad: " << endl;
    getline(cin, cantidad);
    Ventas_detalle U = Ventas_detalle(idVenta, no_factura, serie, fechafactura, idcliente, idempleado, idventa_detalle, idventa, idproducto, cantidad, precio_unitario);
    U.actualizar();
};
void Eliminar_ventas_detalle() {
    int idVenta, idventa_detalle = 0;
    cout << "Ingrese el idVenta a eliminar: " << endl;
    cin >> idVenta;
    Ventas_detalle D = Ventas_detalle(idVenta, idventa_detalle);
    D.eliminar();
};

void imprimirFactura() {
    int idventa = 0, idcliente=0;
    int no_factura, serie;
    string nombres_cliente, apellidos_cliente, direccion_cliente, nit_cliente;
    string nombres_empleado, apellidos_empleado;
    string fecha_factura;
    float suma = 0.0, IVA = 0.0, total = 0.0;
    int q_estado;
    ConexionBD cn = ConexionBD();
    MYSQL_ROW fila;
    MYSQL_RES* resultado;

    string consultaFactura = "SELECT v.nofactura, v.serie, v.fechafactura, c.nombres, c.apellidos, c.nit, e.nombres, e.apellidos "
        "FROM ventas AS v "
        "INNER JOIN clientes AS c ON v.id_cliente = c.idCliente "
        "INNER JOIN empleados AS e ON v.id_empleado = e.idEmpleado "
        "WHERE v.idVenta = " + to_string(idcliente);
    const char* queryFactura = consultaFactura.c_str();
    q_estado = mysql_query(cn.getConectar(), queryFactura);
    if (!q_estado) {
        resultado = mysql_store_result(cn.getConectar());
        if (mysql_num_rows(resultado) == 0) {
            cout << "No se encontraron resultados en la tabla ventas para el idVenta: " << idventa << endl;
            return;
        }
        else {

            fila = mysql_fetch_row(resultado);
            no_factura = stoi(fila[0]);
            serie = stoi(fila[1]);
            fecha_factura = fila[2];
            nombres_cliente = fila[3];
            apellidos_cliente = fila[4];
            direccion_cliente = fila[5];
            nit_cliente = fila[6];
            nombres_empleado = fila[7];
            apellidos_empleado = fila[8];

            cout << "============= Factura ================" << endl;
            cout << "No factura: " << no_factura << "-" << serie << endl;
            cout << "Fecha Factura: " << fecha_factura << endl;
            cout << "NIT: " << nit_cliente << endl;
            cout << "CLIENTE: " << nombres_cliente << " " << apellidos_cliente << endl;
            cout << "Direccion: " << direccion_cliente << endl;
            cout << "============ Empleado ================" << endl;
            cout << "Empleado: " << nombres_empleado << " " << apellidos_empleado << endl;
            cout << "============ Productos ===============" << endl;
            cout << "Producto\tCantidad\tPrecio Unitario\tTotalProducto" << endl;
            cout << "---------------------------------------" << endl;


            string consultaProductos = "SELECT p.producto, vd.cantidad, vd.precio_unitario "
                "FROM ventas_detalle AS vd "
                "INNER JOIN productos AS p ON vd.id_producto = p.idProducto "
                "WHERE vd.idVenta = " + to_string(idventa);
            const char* queryProductos = consultaProductos.c_str();
            q_estado = mysql_query(cn.getConectar(), queryProductos);
            if (!q_estado) {
                resultado = mysql_store_result(cn.getConectar());
                if (mysql_num_rows(resultado) == 0) {
                    cout << "No se encontraron productos en la tabla ventas_detalle para el idVenta: " << idventa << endl;
                }
                else {
                    while (fila = mysql_fetch_row(resultado)) {
                        string producto = fila[0];
                        int cantidad = stoi(fila[1]);
                        float precio_unitario = stof(fila[2]);
                        float total_producto = cantidad * precio_unitario;

                        cout << producto << "\t" << cantidad << "\t\t" << precio_unitario << "\t\t" << total_producto << endl;
                        suma += total_producto;
                    }

                    cout << "----------------------------------------" << endl;
                    IVA = suma * 0.12;
                    cout << "IVA:\t\t\t\t\t" << IVA << endl;
                    total = suma + IVA;
                    cout << "TOTAL:\t\t\t\t\t" << total << endl;
                    cout << "----------------------------------------" << endl;
                }
            }
            else {
                system("cls");
                cout << "Query Select tuvo problemas: " << mysql_error(cn.getConectar()) << endl;
                return;
            }
        }
    }
    else {
        system("cls");
        cout << "Query Select tuvo problemas: " << mysql_error(cn.getConectar()) << endl;
        return;
    }
}

void Crear_Compras() {
    char opcion;
    int no_orden_compra = 0, idProveedor = 0, id_compra_detalle = 0, idproducto = 0, idcompra = 0;
    string fecha_orden, Nit, cantidad;
    float precio_costo_unitario = 0;
    int ValProveedor = 0;

    while (ValProveedor == 0) {
        cin.ignore();
        cout << "Ingrese Nit del Proveedor  EJ. 00000-000-0: " << endl;
        getline(cin, Nit);
        while (!validarNIT(Nit)) {
            cout << "El NIT ingresado no es valido." << endl;
            cout << "Ingrese Nit el formato debe ser 12345-123-1: " << endl;
            getline(cin, Nit);
        }
        Compras VP = Compras(Nit);
        ValProveedor = VP.leeridProveedores();

        if (ValProveedor) {
            idProveedor = ValProveedor;
        }
        if (ValProveedor == 0) {
            cout << "Ese Nit no existe desea crear un registro con ese Nit? (s/n)" << endl;
            cin >> opcion;
            cin.ignore();
            if (opcion == 's' || opcion == 'S') {
                Crear_Proveedores();
            }
        }
    }
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution < > dis(1, 5000);
    no_orden_compra = dis(gen);
    Compras C = Compras(idcompra, no_orden_compra, idProveedor, fecha_orden, id_compra_detalle, idcompra, idproducto, cantidad, precio_costo_unitario);
    C.crearCompras();
    Compras R = Compras(idcompra, no_orden_compra, idProveedor, fecha_orden, id_compra_detalle, idcompra, idproducto, cantidad, precio_costo_unitario);
    idcompra = R.leerIdCompras();
    if (!idcompra) {
        return;
    };
    float valProducto = 0;
    char opcionpro;
    do {
        while (valProducto == 0) {
            cout << "Ingrese idProducto: " << endl;
            cin >> idproducto;
            cin.ignore();
            Compras VPROD = Compras(idcompra, idproducto, id_compra_detalle, cantidad);
            valProducto = VPROD.leerIdProductos();
            precio_costo_unitario = valProducto;
            if (valProducto) {
                cout << "Ingrese la cantidad: " << endl;
                getline(cin, cantidad);
            }
        }
        cout << "Desea ingresar otro producto? (s/n)" << endl;
        cout << "opcion: ";
        cin >> opcionpro;
        Compras CD = Compras(idcompra, no_orden_compra, idProveedor, fecha_orden, id_compra_detalle, idcompra, idproducto, cantidad, precio_costo_unitario);
        CD.crearComprasDetalle();
        valProducto = 0;
    } while (opcionpro == 's' || opcionpro == 'S');
};
void Mostrar_Compras() {
    system("cls");
    cout << "----------------COMPRAS GUARDADAS--------------" << endl;
    Compras r = Compras();
    r.leer();
};
void Actualizar_Compras() {
    int idCompra = 0, no_orden_compra = 0, idProveedor = 0;
    string fecha_orden, cantidad;
    int idproducto = 0, idcompra = 0, idcompra_detalle = 0;
    float precio_costo_unitario = 0;
    cout << "Ingrese idCompra a modificar de la tabla Compras: " << endl;
    cin >> idCompra;
    cin.ignore();
    cout << "Ingrese el nuevo numero de Orden de Compra: " << endl;
    cin >> no_orden_compra;
    cin.ignore();
    cout << "Ingrese el nuevo ID de Proveedor: " << endl;
    cin >> idProveedor;
    cin.ignore();
    cout << "Ingrese la nueva fecha de orden: " << endl;
    getline(cin, fecha_orden);
    cin.ignore();
    cout << "Ingrese el idcompra_detalle a actualizar: " << endl;
    cin >> idcompra_detalle;
    cin.ignore();
    cout << "Ingrese el nuevo idcompra: " << endl;
    cin >> idcompra;
    cin.ignore();
    cout << "Ingrese el nuevo idProducto: " << endl;
    cin >> idproducto;
    cin.ignore();
    cout << "Ingrese la nueva cantidad: " << endl;
    cin >> cantidad;
    cin.ignore();
    cout << "Ingrese el nuevo precio de costo unitario: " << endl;
    cin >> precio_costo_unitario;
    cin.ignore();
    Compras U = Compras(idCompra, no_orden_compra, idProveedor, fecha_orden, idcompra_detalle, idcompra, idproducto, cantidad, precio_costo_unitario);
    U.actualizar();
};
void Eliminar_Compras() {
    int idCompra, idCompra_detalle = 0;
    cout << "Ingrese el idCompra a eliminar: " << endl;
    cin >> idCompra;
    Compras D = Compras(idCompra, idCompra_detalle);
    D.eliminar();
};










