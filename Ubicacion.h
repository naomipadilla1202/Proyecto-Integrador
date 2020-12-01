//Clase Ubicacion del proyecto integrador: Sistema de logística y organización en el proceso de entrega \
Autores: Sophia F. Valencia Bautista A01745091 y Naomi Padilla Mora A01745914 \
Fecha de creación: 23 de noviembre, 2020
#ifndef UBICACION_C
#define UBICACION_C

#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;

class Ubicacion{
private:
    char estado;
    string municipio;
    int codigoPostal;
    string colonia;
    string calle;
    int numeroExt;

public:
    Ubicacion(){
        estado = 'E';
        municipio = "Tlalnepantla de Baz";
        codigoPostal = 54070;
        colonia = "El Cortijo";
        calle = "Atlacomulco";
        numeroExt = 128;
    } //Constructor default

    Ubicacion(char estado, string municipio, int codigoPostal, string colonia, string calle, int numeroExt){
        this-> estado = estado;
        this-> municipio = municipio;
        this-> codigoPostal = codigoPostal;
        this-> colonia = colonia ;
        this-> calle = calle;
        this-> numeroExt = numeroExt;
    }

    void pedirDatos(){

        cout << "\nProporciona la siguiente informacion" << endl;
        cout << "\n Selecciona tu Estado\n"; 
        cout << "<E> para Estado de Mexico\n";
        cout << "<C> para Ciudad de Mexico \n";
        cout << "<Q> para Queretaro\n";
        cout << "<J> para Jalisco\n";
        cout << "<G> para Guerrero\n";
        cout << "<O> para Oaxaca \n";
        cout << "<V> para Veracruz\n";
        cout << "<H> para Chiapas\n";  
        cout << "\n: ";
        cin >> estado;

        cout << "Municipio: ";
        getline(cin >> ws,municipio);

        cout << "\nCodigo Postal: ";
        cin >> codigoPostal;

        cout << "\nColonia: ";
        getline(cin >> ws, colonia);
         
        cout << "\nCalle: ";
        getline(cin >> ws, calle); 

        cout << "\nNumero exterior: ";  
        cin >> numeroExt;
    }

    void clasificarPorZona(){
        switch (estado)
        {

        case 'E':
            cout << "\nTu entrega se realizara mañana" << endl;
            break;

        case 'C':
            cout << "\nTu entrega se realizara mañana" << endl;
            break;

        case 'Q':
            cout << "\nTu entrega se realizara en 2 días" << endl;
            break;
        
        case 'J':
            cout << "\nTu entrega se realizara en 4 días" << endl;
            break;

        case 'G':
            cout << "\nTu entrega se realizara en 3 días" << endl;
            break;

        case 'O':
            cout << "\nTu entrega se realizara en 6 días" << endl;
            break;

        case 'V':
            cout << "\nTu entrega se realizara en 5 días" << endl;
            break;
        
        case 'H':
            cout << "\nTu entrega se realizara en 10 días" << endl;
            break;

        default:
            cout << "\nAun no contamos con servicio para ese estado. Selecciona otro\n";
            pedirDatos();
            break;

        }
    }
    void darFolio(){

        int num{};
        srand(time(NULL));
        num = (rand()%265)+1;
        cout << "\nTu folio es: " << to_string(num) + "\n";
    }

    string imprimirUbi(){
        string est(1,estado);
        return "\nEstos son los datos de tu ubicacion. Estado: " + est + ", Municipio: " + municipio + ", Codigo Postal: " + to_string(codigoPostal) + ", Colonia: " + colonia + ", Calle: " + calle + ", Numero ext: " + to_string(numeroExt) + "\n";
    }
};

#endif