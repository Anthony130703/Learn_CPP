#include <iostream>
#include <iomanip>

int main()
{
    //Inicializacion por asignacion
    // int Edad = 22;
    // double Salario = 4580.52;
    // char letra = 'A';
    // bool estado = false;

    // std::cout << "Edad: " << Edad << std::endl;
    // std::cout << "Salario: " << Salario << std::endl;
    // std::cout << "Letra: " << letra << std::endl;
    // std::cout << "Estado: " << estado << std::endl;

    //inicializacion por llaves
    // int Edad{22};
    // double Salario{4580.52};
    // char letra{'A'};
    // bool estado{false};

    // std::cout << "Edad: " << Edad << std::endl;
    // std::cout << "Salario: " << Salario << std::endl;
    // std::cout << "Letra: " << letra << std::endl;
    // std::cout << "Estado: " << estado << std::endl;

    // Edad = 40;
    // std::cout << "Edad: " << Edad << std::endl;
    
    // //Casting explicito
    // double a = 5.89;
    // int b = int(a);
    // //int b = static_cast<int>(a);
    // std::cout << "Valor original: " << a << std::endl;
    // std::cout << "Valor convertido: " << b << std::endl;

    //Ejercicio
    //Deben desarrollar un programa que convierta grados Fahrenheit a Celsius
    // utilizando variables, operadores aritmeticos y casting para redondear el resultado

    // double fahrenheit{0.0};

    // std::cout << "Ingrese la temperatura en grados Fahrenheit: ";
    // std::cin >> fahrenheit;

    // double Celsius = ((fahrenheit - 32) * 5.0 )/9.0;
    // int resultado = static_cast<int>(Celsius);
    // std::cout << "La temperatura en grados Celsius es: " << resultado << "C" << std::endl;

    //++++++
    double pi{3.14159265358979323846};
    std::cout << std::setw(10) << pi << std::endl;
    std::cout << std::setprecision(3) << pi << std::endl;
    std::cout << std::scientific << pi << std::endl;

    //Ejercicio
    //Objetivo: Crear un programa que calcule el area y el volumen de una caja
    //pasos:
    //1 Pedimos altura, ancho y profundidad
    //2 Calculamos el area y el volumen
    //3 Mostrar el resultado con cout, usando manipuladores (iomanip), fixed y setprecision(2)

    double altura{0.0}, ancho{0.0}, profundidad{0.0};
    std::cout << "Ingrese la altura de la caja: ";
    std::cin >> altura;
    std::cout << "ingrese el ancho de la caja: ";
    std::cin >> ancho;
    std::cout << "Ingrese la profundidad de la caja: ";
    std::cin >> profundidad;

    double area = 2 * ((altura * ancho) + (altura * profundidad) + (ancho * profundidad));
    double Volumen = altura * ancho * profundidad;

    std::cout << "El area de la caja es: " <<  std::fixed << std::setprecision(2) << area << std::endl;
    std::cout << "El volumen de la caja es: " <<  std::fixed << std::setprecision(2) << Volumen << std::endl;

    return 0;
}