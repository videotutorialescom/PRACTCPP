// 001 PRUEBAS PRÁCTICAS CPP

//PREGUNTA 1: Define lo que es una declaración.

// Una declaración es un tipo de instrucción que hace que el programa realice una acción.
// Las declaraciones suelen terminar con punto y coma (;).


//PREGUNTA 2: Define lo que es una función.

// Una función es un conjunto de sentencias que se ejecutan secuencialmente Cada programa C++ debe incluir una función especial
// llamada main. Cuando el programa se inicia, la ejecución comienza en la parte superior de la función main.


//PREGUNTA 3: Define lo que es sintaxis.

//Sintaxis son las reglas que siguen los elementos del lenguaje C++. Un error de sintaxis ocurre cuando se vulnera 
// alguna de esas reglas sintácticas.

// PREGUNTA 4: Explica el funcionamiento de los Comentarios en C++.

//Los comentarios permiten al programador dejar notas en el código, para que el programador pueda leerlo y entenderlo. 
// C++ admite dos tipos de comentarios: los comentarios en línea comienzan con "//" y se extienden hasta el final de la línea. 
// Los comentarios en bloque comienzan con "/*" y finalizan con "*/.
// No se permite el anidamiento de comentarios.

// PREGUNTA 5: Define lo que son los Datos.

// Los datos son cualquier secuencia de símbolos que se puede interpretar con un significado.
// Una sola pieza de datos almacenada en algún lugar de la memoria se llama "valor."

// PREGUNTA 6: Define lo que es una variable.

// Una variable es una ubicación de memoria con nombre en la que se almacena un valor. El nombre de una variable se llama identificador. 
// Para crear una variable se usa la llamada " declaración de definición."
// Cuando se ejecuta un programa, se instancia cada variable definida, asignándosele una dirección en memoria.

// PREGUNTA 7: ¿Para qué sirven los tipos de datos?

// Le dicen al compilador como interpretar los valores.
// de un modo significativo

// PREGUNTA 8: Define lo que es inicialización.

// Inicialización es dar valor a una variable en el momento de su creación. C++ admite tres tipos de inicialización: 
// inicialización por copia, inicialización directa e inicialización uniforme.
// Debe preferirse la inicialización sobre la asignación, y la inicialización uniforme sobre las otras.

// PREGUNTA 9: ¿Qué es una variable no inicializada?

// Una variable no inicializada es una variable creada sin darle ningún valor.
// Intentar obtener el valor de una variable no inicializada provocará un comportamiento indefinido.

// PREGUNTA 10: ¿Qué son las palabras clave?

//Las palabras clave son palabras reservadas que se utilizan para definir una acción específica en un programa.
//Sus nombres no pueden usarse como nombres de variables.

// PREGUNTA 11: ¿Qué es una constante literal?

// Una constante literal es un valor fijo insertado directamente en el código fuente. 
// 5 y "Hola Mundo" son ejemplos de constantes literales.

// PREGUNTA 12: ¿Qué es una operación?

// Una operacion es un cálculo matemático que involucra a valores de entrada llamados operandos y se realiza a través de un operador.
// El resultado de una operación produce un valor de salida.

// PREGUNTA 13: ¿Qué tipos de operadores existen según su número de operandos?

//Los operadores unarios toman un operando. Los operadores binarios toman dos operandos.
//Los operadores ternarios toman tres operandos.

//PREGUNTA 14: ¿Qué es una expresión?

//Una expresión es una combinación de literales, variables, operadores y llamadas a funciones, 
// que se evalúa para producir un valor de salida. El cálculo de ese valor de salida se llama evaluación.
// El valor producido es el resultado de la expresión.

//PREGUNTA 15: ¿Cuál es la diferencia entre inicialización y asignación?

//La inicialización proporciona un valor a una variable en el momento de su creación.
//La asignación le da a una variable un nuevo valor después de que ya se haya creado.

// PREGUNTA 16: ¿Cuando se produce un comportamiento indefinido y que consecuencias tiene?

// Un comportamiento indefinido es cuando el programa no puede determinar el valor de una expresión.
// las consecuencias pueden ser casi cualquier cosa: fallar, devolver un resultado erróneo, o correcto, o no devolver nada.

// PREGUNTA 17: Escribe un programa que le pida al usuario que ingrese un número, luego que ingrese un segundo número.
// Y el programa debe imprimir el resultado de sumar y restar los dos números.

#include <iostream>

int main()
{
	setlocale(LC_ALL, "es_ES.UTF-8");// para caracteres español
	int numero1{};
	int numero2{};
	std::cout << "Ingrese un número: ";
	std::cin >> numero1;
	std::cout << "Ingrese otro número: ";
	std::cin >> numero2;
	std::cout << numero1 << " + " << numero2 << " es: " << numero1 + numero2 << std::endl;
	std::cout << numero1 << " - " << numero2 << " es: " << numero1 - numero2 << std::endl;
	return 0;

}