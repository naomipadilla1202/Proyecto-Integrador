//Clase Compra del proyecto integrador: Sistema de logística y organización en el proceso de entrega \
Autores: Sophia Fernanda Valencia Bautista A01745091 y Naomi Padilla Mora A01745914 \
Fecha de creación: 23 de noviembre, 2020
#ifndef COMPRA_C
#define COMPRA_C

#include "Paquete.h"
#include <iostream>
#include <string>
using namespace std;

class Compra{
private:
    string nombreUsuario;
    int cantidadCompra;
    string direccion;
    string telefono;
    string correo;
    char producto;
    Paquete paquete;

public:
    Compra(){
        nombreUsuario = "Carlos Perez Castillo";
        direccion = "Mexico";
        telefono = "5576892345";
        correo = "carlos.p98@gmail.com";
        cantidadCompra = 1;
        producto = 'Z';
        paquete = Paquete();
    }  //constructor

    Compra(string nombreUsuario, string direccion, string telefono, string correo, char producto, int cantidadCompra){
        this-> nombreUsuario = nombreUsuario;
        this-> cantidadCompra = cantidadCompra;
        this-> direccion = direccion;
        this-> telefono = telefono;
        this-> correo = correo; 
        this-> producto = producto;
        this-> paquete = paquete;
    } //constructor

    void solicitar(){
        cout << "Proporciona la siguiente informacion" << endl;
        
        cout << "\nNombre Completo: ";
        getline(cin >> ws,nombreUsuario);

        cout << "\nDirección (País): ";
        getline(cin >> ws,direccion);
         
        cout << "\nNumero celular: ";
        getline(cin >> ws,telefono); 

        cout << "\nCorreo electronico: ";  
        cin >> correo;

        cout << "\n Selecciona tu Producto\n"; 
        cout << "<B> para bolsa\n";
        cout << "<C> para camisa \n";
        cout << "<Z> para zapatos\n";
        cout << "<J> para juguete\n"; 
        cout << ": ";
        cin >> producto;

        cout << "\nCantidad de productos: ";
        cin >> cantidadCompra;

    } //pide al usuario la informacion

 
    void pagar(){
        int cb{}, cc{}, cz{}, cj{};

        switch (producto){

        case 'B':
            cb = cantidadCompra * 500;
            cout << "\nTu total a pagar es de: $" << to_string(cb) << endl;   
            break;

        case 'C':
            cc = cantidadCompra * 450;
            cout << "\nTu total a pagar es de: $" << to_string(cc) << endl;
            break;

        case 'Z':
            cz = cantidadCompra * 600;
            cout << "\nTu total a pagar es de: $" << to_string(cz) << endl;
            break;
        
        case 'J':
            cj = cantidadCompra * 350;
            cout << "\nTu total a pagar es de: $" << to_string(cj) << endl;
            break;

        default:
            cout << "\nProducto no disponible. Selecciona otro\n";
            solicitar();
            break;
        }
    }

    void continuar(){
        cout << "\nContinua con tu proceso de compra" << endl;
    }
    
    Paquete getPaquete(){return paquete;}
    
    string imprimirCom(){
        string prod(1,producto);
        return "\nEsta es tu informacion. Usuario: " + nombreUsuario + ", Direccion: " + direccion + ", Telefono: " + telefono + ", Correo: " + correo + ", Producto: " + prod + ", Cantidad de compra: " + to_string(cantidadCompra) + "," + paquete.imprimir() + "\n";
    }

};//Clase Compra

#endif
