
//002 PRUEBAS PRÁCTICAS CPP

//PREGUNTA 1: Define lo que es una función

// Una función es una secuencia reutilizable de declaraciones diseñada para hacer un trabajo concreto.
// Las funciones que creamos nosotros mismos se conocen como funciones definidas por el usuario.

//PREGUNTA 2: ¿Qué es llamar a una función?

// Es una expresión que le dice al programa que ejecute una función. La función desde la que se realiza la llamada, se conoce como el llamador,
// y la función que está siendo llamada, es el llamado o función llamada. 
// no debemos olvidar incluir los paréntesis después del nombre cuando hacemos una llamada a una función.

//PREGUNTA 3: ¿Qué es el cuerpo de una función?

// Son todas las declaraciones que se incluyen entre las llaves de apertura y cierre de la definición de la función

//PREGUNTA 4: ¿Qué es el tipo de retorno por valor de una función?

// El tipo de retorno de una función indica el tipo de valor que devolvera esa función tras ejecutarse. La declaración
// de retorno determina el valor de retorno específico que será devuelto al llamador. El valor de retorno es copiado desde
// la función al llamador. Este proceso es conocido como "retorno por valor."
// Un fallo en la devolución de un valor desde una función no-void dará lugar a un comportamiento indefinido.

//PREGUNTA 5: ¿Qué significa DRY?

//DRY, D'ont Repeat Yourself (No Te Repitas), es un principio programático que prima usar variables y funciones
// eliminar código redundante


//PREGUNTA 6: ¿Qué es una función void?

// Las funciones con un tipo de retorno void, no devuelv en ningún valor al llamador. Se conocen también como
// funciones sin valor de retorno. Las funciones void no pueden ser llamadas desde un llamador que necesite un valor devuelto.

// PREGUNTA 7 ¿Explica lo que es el retorno anticipado de una función?

// Cuando una declaración de retorno no es la última declaración en una función, se conoce como retorno anticipado o temprano.
// Tal declaración hace que la función vuelva (return) inmediatamente al llamador.

//PREGUNTA 8: Define lo que son parámetros y argumentos de una función

// Un párámetro es una variable usada en una función cuyo valor es provisto por el llamador de la función.
// Un argumento es el valor específico pasado desde el llamador a la función y copiado en un parámetro.

//PREGUNTA 9: Define el término pasar por valor

// Cuando un argumento es copiado y se inicializa con él un parámetro, se dice que ha sido pasado por valor.

//PREGUNTA 10: Explica lo que son las variables locales

//Son los parámetros de una función y las variables definidas dentro del cuerpo de la función. El tiempo que existe una variable se conoce como su "vida útil"
//Las variables locales son creadas y destruidas en tiemo de ejecución (runtime), que es cuando el programa se está ejecutando.

//PREGUNTA 11: ¿Qué es el alcance de una variable?

//Es el que determina desde que partes del programa puede ser accedida esa variable. Cuando puede ser accedida
//Se dice que está dentro de alcance. Cuando no puede ser accedida se dice que está fuera de alcance.
//El alcance es una propiedad en tiempo de compilación, lo que significa que debe conocerse cuando el programa se compile.

//PREGUNTA 12: ¿Qué son los espacios en blanco de un programa?

//Son los caracteres usados para formatear el código. En C++ incluyen tanto espacios, 
//como tabulaciones y saltos de línea

//PREGUNTA 13: ¿Qué es la declaración anticipada de una función?

//Una declaración anticipada nos permite informar al compilador sobre la existencia de un identificador
//antes de que sea realmente definido. Para escribir una declaración anticipada para una función,
//usamos un prototipo de función, que incluye el tipo de retorno, el nombre y los parámetros de la función, pero no su cuerpo.

//PREGUNTA 14: ¿Cuál es la diferencia entre una declaración y una definición?

//Una definición siempre implementa (para funciones y tipos) o instancia (para variables)  a un identificador de modo completo. 
//mientras que una declaración solo debe informar al compilador de la existencia de ese identificador. 
//Pero es preferible usar el término declaración anticipada (o definición anticipada), cuando no contengan la definición completa
//sino solo su prototipo.

//PREGUNTA 15: Explica lo que es una colisión de nombres

// Cuando se incluyen dos identificadores dentro del mismo programa, de modo que el compilador o el enlazador no puedan distinguirlos,
// el compilador o el enlazador producirán una colisión de nombres.

//PREGUNTA 16: Explica para que sirven los namespace o espacios de nombres

//Un namespace o espacio de nombres garantiza que todos los identificadores dentro de él sean únicos. 
// "std" es un ejemplo de esos namespace

//PREGUNTA 17: ¿Qué es el Preprocesador?

//Es un proceso que se ejecuta sobre el código antes de que éste sea compilado. Las directivas de preprocesador
//son instrucciones especiales que empiezan siempre con el símbolo "#" y finalizan con una nueva línea.

//PREGUNTA 18: ¿Qué es una macro?

// una macro es una regla que define como una texto de entrada debe sustituirse por un texto de salida

// PREGUNTA 19: ¿Qué son los archivos header o de cabecera?

// son archivos diseñados para propagar declaraciones a archivos de código. Cuando usamos la 
// directiva #include, esa directiva será sustituida por los contenidos del archivo incluido.
// cuando incluimos headers, debemos usar paréntesis angulares (< >) cuando incluimos headers
// del sistema (como librerías de la Biblioteca STD de C++), y debemos usar dobles comillas (" ")
// cuando inlcuyamos headers definidos por el usuario.
// los headers del sistema incluyen versiones sin extensión .h y con extensión .h por razones de retrocompatibilidad.

//PREGUNTA 20: ¿Qué son los Header Guards?

// Los Header Guards evitan que el contenido de un header se incluya más de una vez en un archivo de código dado.
// Pero no evitan que los contenidos de un header sean incluidos en varios archivos de código diferentes.



//PRACTICA 1: Escribe un programa con un único archivo que lea dos números enteros escritos por el usuario, los sume, y luego muestre el resultado.
// El programa debe usar tres funciones:
     // * Una función llamada "leerNumero( )" que debe usarse para obtener(y devolver) un único número entero del usuario.
    // * Una función llamada "escribirRespuesta( )" que debe usarse para mostrar la respuesta. Esta función debe tomar un único parámetro y sin valor de retorno.
   // * una función main( ) que debemos usar para comunicar las otras dos funciones.


/*#include <iostream>

int leerNumero()
{
    int valor{};
    std::cout << "Escribe un entero: ";
    std::cin >> valor;    
    return valor;
}

void escribirRespuesta(int valor)
{
    std::cout << "Los dos enteros que has escrito suman: " << valor;

}

int main()
{
    int a = leerNumero();
    int b = leerNumero();
    int c = a + b;
    escribirRespuesta(c);
    return 0;
}*/


//PRACTICA 2: Escribe una variante del programa anterior, en el que la función leerNumero( ) recupere los dos números del usuario
// en lugar de uno.


/*#include <iostream>

int leerNumero()
{
    int valor1{};
    int valor2{};
    std::cout << "Escribe un entero: ";
    std::cin >> valor1;
    std::cout << "Escribe otro entero: ";
    std::cin >> valor2;
    return valor1 + valor2;
}

void escribirRespuesta(int valor)
{
    std::cout << "Los dos enteros que has escrito suman: " << valor;

}

int main()
{
    int a = leerNumero();
    escribirRespuesta(a);
    return 0;
}*/


//PRACTICA 3: Modifica el programa anterior de modo que leerNumero( ) y escribirRespuesta( ) se encuentren en un archivo llamado "ES.cpp" dejando Main en otro
// llamado Main.cpp. Usa una declaración anticipada para acceder a ellos desde main( )
// recuerda añadir ambos archivos dentro del mismo proyecto para que sean compilados.


/* // Main.cpp

int leerNumero();
void escribirRespuesta(int valor);


int main()
{
    int a = leerNumero();
    escribirRespuesta(a);
    return 0;
}

//ES.cpp

#include <iostream>

int leerNumero()
{
    int valor1{};
    int valor2{};
    std::cout << "Escribe un entero: ";
    std::cin >> valor1;
    std::cout << "Escribe otro entero: ";
    std::cin >> valor2;
    return valor1 + valor2;
}

void escribirRespuesta(int valor)
{
    std::cout << "Los dos enteros que has escrito suman: " << valor;

}
*/


//PRACTICA 4: Modifica el programa de la PRÁCTICA 3 para que use un archivo header (llamado ES.h) para acceder a las funciones en lugar
// las declaraciones anticipadas directamente en los archivos de código (.cpp). Asegúrate de usar en el archivo header los header guards.


/*
//Main.cpp
#include "ES.h"

int main()
{
    int a = leerNumero();
    escribirRespuesta(a);
    return 0;
}

// ES.h

#pragma once
#ifndef ES_H
#define ES_H

int leerNumero();
void escribirRespuesta(int valor);

#endif


// ES.cpp

#include <iostream>
#include "Es.h"

int leerNumero()
{
    int valor1{};
    int valor2{};
    std::cout << "Escribe un entero: ";
    std::cin >> valor1;
    std::cout << "Escribe otro entero: ";
    std::cin >> valor2;
    return valor1 + valor2;
}

void escribirRespuesta(int valor)
{
    std::cout << "Los dos enteros que has escrito suman: " << valor;

}
*/

















