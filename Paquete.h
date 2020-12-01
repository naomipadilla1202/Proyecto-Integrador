//Clase Paquete del proyecto integrador: Sistema de logística y organización en el proceso de entrega \
Autores: Sophia F. Valencia Bautista A01745091 y Naomi Padilla Mora A01745914 \
Fecha de creación: 23 de noviembre, 2020
#ifndef PAQUETE_C
#define PAQUETE_C

#include "Ubicacion.h"
#include <iostream>
#include <string>
using namespace std;

class Paquete{
private:
    int numeroPaquete;
    double tamanio;
    double peso;
    Ubicacion ubicacion;

public:
    Paquete(){
        numeroPaquete = 21;
        tamanio = 15.45;
        peso = 0.200;
        ubicacion = Ubicacion();
    };
    Paquete(int numeroPaquete, double tamanio, double peso, Ubicacion u1){
        this-> numeroPaquete = numeroPaquete;
        this-> tamanio = tamanio;
        this-> peso = peso;
        this-> ubicacion = u1;
    }

    void setPeso(double peso){this-> peso = peso;}

    void notificar(){
        if(peso <= 0.500){
            cout << "\nTu pedido esta confirmado" << endl;

        }

        else{
            cout << "\nTu pedido esta siendo evaluado, te confirmaremos a la brevedad" << endl;
            calcularPedido();
        }
    }

    void calcularPedido(){
        
        if(peso > 0.500 and peso <= 0.600 ){
            cout << "\n Tu pedido se confirmara en 10 minutos" << endl;
        }
        if(peso > 0.600 and peso <= 0.700 ){
            cout << "\n Tu pedido se confirmara en 20 minutos" << endl;
        }
        if(peso > 0.700 and peso <= 1.000 ){
            cout << "\n Tu pedido se confirmara en 30 minutos" << endl;
        }    
    }

    string imprimir(){

        return "\nEsta es la informacion de tu paquete. Numero paquete: " + to_string(numeroPaquete) + ", Tamanio: " + to_string(tamanio) + ", Peso: " + to_string(peso) + "\n";
    }
};


#endif