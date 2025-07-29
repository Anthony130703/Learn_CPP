#include <iostream>

int main()
{
    /*
    int x; // Declaracion de una variable
    x = 5; // Asignacion de un valor
    */

    // Enteros
    int x = 5;
    int y = 6;
    int suma = x + y;

    std::cout << suma << std::endl;

    // Double o Flotante   
    double precio = 10.99;
    double promedio = 2.5;
    double temperatura = 25.1152647;

    float precio2 = 22.98;

    std::cout << temperatura << std::endl;

    // Char
    char calificacion = 'A';
    char inicial = 'C';

    std::cout << calificacion << std::endl;

    // Booleanos
    bool estudiante = false;
    bool encendido = true;
    bool venta = true;

    std::cout << encendido << std::endl;

    // String
    std::string nombre = "Anthony";

    std::cout << nombre << std::endl;

    return 0;
}