// 001 PRUEBAS PR�CTICAS CPP

//PREGUNTA 1: Define lo que es una declaraci�n.

// Una declaraci�n es un tipo de instrucci�n que hace que el programa realice una acci�n.
// Las declaraciones suelen terminar con punto y coma (;).


//PREGUNTA 2: Define lo que es una funci�n.

// Una funci�n es un conjunto de sentencias que se ejecutan secuencialmente Cada programa C++ debe incluir una funci�n especial
// llamada main. Cuando el programa se inicia, la ejecuci�n comienza en la parte superior de la funci�n main.


//PREGUNTA 3: Define lo que es sintaxis.

//Sintaxis son las reglas que siguen los elementos del lenguaje C++. Un error de sintaxis ocurre cuando se vulnera 
// alguna de esas reglas sint�cticas.

// PREGUNTA 4: Explica el funcionamiento de los Comentarios en C++.

//Los comentarios permiten al programador dejar notas en el c�digo, para que el programador pueda leerlo y entenderlo. 
// C++ admite dos tipos de comentarios: los comentarios en l�nea comienzan con "//" y se extienden hasta el final de la l�nea. 
// Los comentarios en bloque comienzan con "/*" y finalizan con "*/.
// No se permite el anidamiento de comentarios.

// PREGUNTA 5: Define lo que son los Datos.

// Los datos son cualquier secuencia de s�mbolos que se puede interpretar con un significado.
// Una sola pieza de datos almacenada en alg�n lugar de la memoria se llama "valor."

// PREGUNTA 6: Define lo que es una variable.

// Una variable es una ubicaci�n de memoria con nombre en la que se almacena un valor. El nombre de una variable se llama identificador. 
// Para crear una variable se usa la llamada " declaraci�n de definici�n."
// Cuando se ejecuta un programa, se instancia cada variable definida, asign�ndosele una direcci�n en memoria.

// PREGUNTA 7: �Para qu� sirven los tipos de datos?

// Le dicen al compilador como interpretar los valores.
// de un modo significativo

// PREGUNTA 8: Define lo que es inicializaci�n.

// Inicializaci�n es dar valor a una variable en el momento de su creaci�n. C++ admite tres tipos de inicializaci�n: 
// inicializaci�n por copia, inicializaci�n directa e inicializaci�n uniforme.
// Debe preferirse la inicializaci�n sobre la asignaci�n, y la inicializaci�n uniforme sobre las otras.

// PREGUNTA 9: �Qu� es una variable no inicializada?

// Una variable no inicializada es una variable creada sin darle ning�n valor.
// Intentar obtener el valor de una variable no inicializada provocar� un comportamiento indefinido.

// PREGUNTA 10: �Qu� son las palabras clave?

//Las palabras clave son palabras reservadas que se utilizan para definir una acci�n espec�fica en un programa.
//Sus nombres no pueden usarse como nombres de variables.

// PREGUNTA 11: �Qu� es una constante literal?

// Una constante literal es un valor fijo insertado directamente en el c�digo fuente. 
// 5 y "Hola Mundo" son ejemplos de constantes literales.

// PREGUNTA 12: �Qu� es una operaci�n?

// Una operacion es un c�lculo matem�tico que involucra a valores de entrada llamados operandos y se realiza a trav�s de un operador.
// El resultado de una operaci�n produce un valor de salida.

// PREGUNTA 13: �Qu� tipos de operadores existen seg�n su n�mero de operandos?

//Los operadores unarios toman un operando. Los operadores binarios toman dos operandos.
//Los operadores ternarios toman tres operandos.

//PREGUNTA 14: �Qu� es una expresi�n?

//Una expresi�n es una combinaci�n de literales, variables, operadores y llamadas a funciones, 
// que se eval�a para producir un valor de salida. El c�lculo de ese valor de salida se llama evaluaci�n.
// El valor producido es el resultado de la expresi�n.

//PREGUNTA 15: �Cu�l es la diferencia entre inicializaci�n y asignaci�n?

//La inicializaci�n proporciona un valor a una variable en el momento de su creaci�n.
//La asignaci�n le da a una variable un nuevo valor despu�s de que ya se haya creado.

// PREGUNTA 16: �Cuando se produce un comportamiento indefinido y que consecuencias tiene?

// Un comportamiento indefinido es cuando el programa no puede determinar el valor de una expresi�n.
// las consecuencias pueden ser casi cualquier cosa: fallar, devolver un resultado err�neo, o correcto, o no devolver nada.

// PREGUNTA 17: Escribe un programa que le pida al usuario que ingrese un n�mero, luego que ingrese un segundo n�mero.
// Y el programa debe imprimir el resultado de sumar y restar los dos n�meros.

#include <iostream>

int main()
{
	setlocale(LC_ALL, "es_ES.UTF-8");// para caracteres espa�ol
	int numero1{};
	int numero2{};
	std::cout << "Ingrese un n�mero: ";
	std::cin >> numero1;
	std::cout << "Ingrese otro n�mero: ";
	std::cin >> numero2;
	std::cout << numero1 << " + " << numero2 << " es: " << numero1 + numero2 << std::endl;
	std::cout << numero1 << " - " << numero2 << " es: " << numero1 - numero2 << std::endl;
	return 0;

}