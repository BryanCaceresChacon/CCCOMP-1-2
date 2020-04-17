// HelloWorld.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
/* Este sera un programa que imprima un Hello World*/
int main()
{
    // Este es un comentario de una linea /*
    /* Operador de Salida >> */
    /* Salto de linea \n */
    /* Tabulacion \t */
    /* Todo empieza en la funcion main */

    std::cout << "Hello World!\n";
    std::cout << "Bienvenidos!\n";
    std::cout << "\tAl curso Ciencia de la Computacion I !\n";
    std::cout << "\t\tParticipar es tu mejor opcion!\n";
    

    /* SUMA */
    //Debo declarar las variables
    int x;
    int y;
    int z;
    int q;
    int w;
    int a;
    int b;
    int suma;
    int resta;
    int multi;


    //Inicializar las variables
    x = 10;
    y = 15;
    z = x + y;

    std::cout << z << std::endl;

    
     //Inicializar las variables 2
    std::cout << "Ingrese un numero por favor : ";
    std::cin >> q;
    std::cout << "Ingrese otro numero por favor : ";
    std::cin >> w;
    a = q + w;
    std::cout << "El resultado de la suma es : ";
    std::cout << a << std::endl;

    resta = q - w;
    multi = q * w;

    std::cout << "El resultado de la resta es : " << resta << std::endl;
    std::cout << "El resultado de la multiplicacion es : " << multi << std::endl;

    
#include <iostream>

    using namespace std;

    int main()
    ( int a, b, c;

        cout << "dame 3 numero: " << endl;
        cin >> a;
        cin >> b;
        cin >> c;

        if (a > b && a > c)
        {
            cout << a << " es el mayor" << endl;
        }
        else if (b > a && b > c)
        {
            cout << b << " es el mayor" << endl;
        }
        else
        {
            cout << c << " es el mayor" << endl;
        }


        return 0;
    }


    return 0;
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
