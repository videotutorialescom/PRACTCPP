//002 PRUEBAS PR�CTICAS CPP

//PREGUNTA 1: Define lo que es una funci�n

// Una funci�n es una secuencia reutilizable de declaraciones dise�ada para hacer un trabajo concreto.
// Las funciones que creamos nosotros mismos se conocen como funciones definidas por el usuario.

//PREGUNTA 2: �Qu� es llamar a una funci�n?

// Es una expresi�n que le dice al programa que ejecute una funci�n. La funci�n desde la que se realiza la llamada, se conoce como el llamador,
// y la funci�n que est� siendo llamada, es el llamado o funci�n llamada. 
// no debemos olvidar incluir los par�ntesis despu�s del nombre cuando hacemos una llamada a una funci�n.

//PREGUNTA 3: �Qu� es el cuerpo de una funci�n?

// Son todas las declaraciones que se incluyen entre las llaves de apertura y cierre de la definici�n de la funci�n

//PREGUNTA 4: �Qu� es el tipo de retorno por valor de una funci�n?

// El tipo de retorno de una funci�n indica el tipo de valor que devolvera esa funci�n tras ejecutarse. La declaraci�n
// de retorno determina el valor de retorno espec�fico que ser� devuelto al llamador. El valor de retorno es copiado desde
// la funci�n al llamador. Este proceso es conocido como "retorno por valor."
// Un fallo en la devoluci�n de un valor desde una funci�n no-void dar� lugar a un comportamiento indefinido.

//PREGUNTA 5: �Qu� significa DRY?

//DRY, D'ont Repeat Yourself (No Te Repitas), es un principio program�tico que prima usar variables y funciones
// eliminar c�digo redundante


//PREGUNTA 6: �Qu� es una funci�n void?

// Las funciones con un tipo de retorno void, no devuelv en ning�n valor al llamador. Se conocen tambi�n como
// funciones sin valor de retorno. Las funciones void no pueden ser llamadas desde un llamador que necesite un valor devuelto.

// PREGUNTA 7 �Explica lo que es el retorno anticipado de una funci�n?

// Cuando una declaraci�n de retorno no es la �ltima declaraci�n en una funci�n, se conoce como retorno anticipado o temprano.
// Tal declaraci�n hace que la funci�n vuelva (return) inmediatamente al llamador.

//PREGUNTA 8: Define lo que son par�metros y argumentos de una funci�n

// Un p�r�metro es una variable usada en una funci�n cuyo valor es provisto por el llamador de la funci�n.
// Un argumento es el valor espec�fico pasado desde el llamador a la funci�n y copiado en un par�metro.

//PREGUNTA 9: Define el t�rmino pasar por valor

// Cuando un argumento es copiado y se inicializa con �l un par�metro, se dice que ha sido pasado por valor.

//PREGUNTA 10: Explica lo que son las variables locales

//Son los par�metros de una funci�n y las variables definidas dentro del cuerpo de la funci�n. El tiempo que existe una variable se conoce como su "vida �til"
//Las variables locales son creadas y destruidas en tiemo de ejecuci�n (runtime), que es cuando el programa se est� ejecutando.

//PREGUNTA 11: �Qu� es el alcance de una variable?

//Es el que determina desde que partes del programa puede ser accedida esa variable. Cuando puede ser accedida
//Se dice que est� dentro de alcance. Cuando no puede ser accedida se dice que est� fuera de alcance.
//El alcance es una propiedad en tiempo de compilaci�n, lo que significa que debe conocerse cuando el programa se compile.

//PREGUNTA 12: �Qu� son los espacios en blanco de un programa?

//Son los caracteres usados para formatear el c�digo. En C++ incluyen tanto espacios, 
//como tabulaciones y saltos de l�nea

//PREGUNTA 13: �Qu� es la declaraci�n anticipada de una funci�n?

//Una declaraci�n anticipada nos permite informar al compilador sobre la existencia de un identificador
//antes de que sea realmente definido. Para escribir una declaraci�n anticipada para una funci�n,
//usamos un prototipo de funci�n, que incluye el tipo de retorno, el nombre y los par�metros de la funci�n, pero no su cuerpo.

//PREGUNTA 14: �Cu�l es la diferencia entre una declaraci�n y una definici�n?

//Una definici�n siempre implementa (para funciones y tipos) o instancia (para variables)  a un identificador de modo completo. 
//mientras que una declaraci�n solo debe informar al compilador de la existencia de ese identificador. 
//Pero es preferible usar el t�rmino declaraci�n anticipada (o definici�n anticipada), cuando no contengan la definici�n completa
//sino solo su prototipo.

//PREGUNTA 15: Explica lo que es una colisi�n de nombres

// Cuando se incluyen dos identificadores dentro del mismo programa, de modo que el compilador o el enlazador no puedan distinguirlos,
// el compilador o el enlazador producir�n una colisi�n de nombres.

//PREGUNTA 16: Explica para que sirven los namespace o espacios de nombres

//Un namespace o espacio de nombres garantiza que todos los identificadores dentro de �l sean �nicos. 
// "std" es un ejemplo de esos namespace

//PREGUNTA 17: �Qu� es el Preprocesador?

//Es un proceso que se ejecuta sobre el c�digo antes de que �ste sea compilado. Las directivas de preprocesador
//son instrucciones especiales que empiezan siempre con el s�mbolo "#" y finalizan con una nueva l�nea.

//PREGUNTA 18: �Qu� es una macro?

// una macro es una regla que define como una texto de entrada debe sustituirse por un texto de salida

// PREGUNTA 19: �Qu� son los archivos header o de cabecera?

// son archivos dise�ados para propagar declaraciones a archivos de c�digo. Cuando usamos la 
// directiva #include, esa directiva ser� sustituida por los contenidos del archivo incluido.
// cuando incluimos headers, debemos usar par�ntesis angulares (< >) cuando incluimos headers
// del sistema (como librer�as de la Biblioteca STD de C++), y debemos usar dobles comillas (" ")
// cuando inlcuyamos headers definidos por el usuario.
// los headers del sistema incluyen versiones sin extensi�n .h y con extensi�n .h por razones de retrocompatibilidad.

//PREGUNTA 20: �Qu� son los Header Guards?

// Los Header Guards evitan que el contenido de un header se incluya m�s de una vez en un archivo de c�digo dado.
// Pero no evitan que los contenidos de un header sean incluidos en varios archivos de c�digo diferentes.



//PRACTICA 1: Escribe un programa con un �nico archivo que lea dos n�meros enteros escritos por el usuario, los sume, y luego muestre el resultado.
// El programa debe usar tres funciones:
     // * Una funci�n llamada "leerNumero( )" que debe usarse para obtener(y devolver) un �nico n�mero entero del usuario.
    // * Una funci�n llamada "escribirRespuesta( )" que debe usarse para mostrar la respuesta. Esta funci�n debe tomar un �nico par�metro y sin valor de retorno.
   // * una funci�n main( ) que debemos usar para comunicar las otras dos funciones.


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


//PRACTICA 2: Escribe una variante del programa anterior, en el que la funci�n leerNumero( ) recupere los dos n�meros del usuario
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
// llamado Main.cpp. Usa una declaraci�n anticipada para acceder a ellos desde main( )
// recuerda a�adir ambos archivos dentro del mismo proyecto para que sean compilados.


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


//PRACTICA 4: Modifica el programa de la PR�CTICA 3 para que use un archivo header (llamado ES.h) para acceder a las funciones en lugar
// las declaraciones anticipadas directamente en los archivos de c�digo (.cpp). Aseg�rate de usar en el archivo header los header guards.


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

















