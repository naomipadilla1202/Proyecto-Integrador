//Pruebas proyecto integrador: Sistema de logística y organización en el proceso de entrega con las clases Compra, Paquete y Ubicacion \
Autores: Sophia F. Valencia Bautista A01745091 y Naomi Padilla Mora A01745914\
Fecha de creación: 23 de noviembre, 2020
#include "Compra.h"
#include "Paquete.h"
#include "Ubicacion.h"


#include <iostream>
using namespace std;

int main(){

    cout << "\n******Pruebas clase Compra" << endl; 
    cout << "\n Compra 1" << endl; 
    Compra compra1; 
    cout << compra1.imprimirCom(); 
    compra1.pagar(); 
    compra1.continuar(); 
    cout << "\n Compra 2" << endl; 
    Compra compra2{"Sophia Valencia", "Mexico", "8239837", "sophiaF.val@gmail.com", 'Z', 3};  
    cout << compra2.imprimirCom(); 
    compra2.pagar(); 
    compra2.continuar(); 
    cout << "\n Compra 3" << endl;
    Compra compra3; 
    compra1.solicitar(); 
    compra1.pagar(); 
    compra1.continuar(); 
    
    cout << "\n\n******Pruebas clase Paquete" << endl; 
    cout << "\n Paquete 1" << endl; 
    Paquete paquete1; 
    cout << paquete1.imprimir(); 
    paquete1.notificar(); 
    cout << "\nActualización de peso: ";
    paquete1.setPeso(0.600); 
    cout<< paquete1.imprimir(); 
    paquete1.calcularPedido(); 
    cout << "\nPaquete 2" << endl;  
    Paquete paquete2{2312,18.123,0.700,Ubicacion('J',"Tequila",6238, "Juarez", "Jal", 10)};  
    cout << paquete2.imprimir(); 
    paquete2.notificar();  

    cout << "\n\n******Pruebas clase Ubicacion" << endl;  
    cout << "\nUbicacion 1"; 
    Ubicacion u1; 
    cout << u1.imprimirUbi(); 
    u1.clasificarPorZona(); 
    u1.darFolio(); 
    cout << "\nUbicacion 2"; 
    Ubicacion u2{'Q', "Santiago de Queretaro", 76160, "Blvd. Bernardo Quintana", "Plaza Boulevares", 4050};  
    cout << u2.imprimirUbi(); 
    u2.clasificarPorZona(); 
    u2.darFolio(); 
    cout << "\nUbicacion 3";  
    Ubicacion u3; 
    u3.pedirDatos(); 
    cout << u3.imprimirUbi(); 
    u3.clasificarPorZona(); 
    u3.darFolio(); 

    cout << "\n\n*********Prueba completa" << endl; 
    Compra compradef; 
    compradef.solicitar(); 
    compradef.pagar(); 
    compradef.continuar();

    Ubicacion udef; 
    udef.pedirDatos(); 

    Paquete paquetedef {2312,18.123,0.700, udef}; 
    cout << paquetedef.imprimir(); 
    paquetedef.notificar(); 

    cout << udef.imprimirUbi(); 
    udef.clasificarPorZona(); 
    udef.darFolio(); 

    return 0;
}
