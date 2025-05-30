## TAREA 3 - BREYSON BARRIOS - C31049

## PROBLEMA 1

## Descripción

El programa fue disenado con el propósito de permitir la interacción con un string ingresado por el usuario, ejecutando las funciones necesarias para
poder contar cuántas veces aparece un caracter específico dentro del un string. Ademas, se muestra el string en orden inverso. En general, Se trata de
un ejercicio útil para reforzar el uso de cadenas de caracteres, condiciones, ciclos y lectura de datos desde la terminal ingresados por el usaurio. 

## Funcionamiento

Al ejecutarse, el programa solicita al usuario que escriba un string, ya sea una palabra o una frase. Luego, se pide que indique un caracter específico, 
el cual se desea contar cuantas veces aaparece dentro del string ingresado. El programa recorre el texto, carácter por carácter, y lleva un conteo de 
cuántas veces aparece dicha letra. Una vez terminado el conteo, se muestra el resultado en pantalla. Finalmente, el texto ingresado se imprime en sentido
inverso, comenzando desde el último carácter hasta el primero.

## Compilacion y Ejecucion

Para compilar este programa, se debe guardar el archivo con el nombre PROBLEMA1.c. Luego, haciendno uso de gcc procedemos a compilarlo utilizando 
el comando gcc PROBLEMA1.c -o PROBLEMA1, una vez compilado correctamente el archivo generamos el ejecutable y el programa puede ejecutarse desde la 
terminal utilizando el comando ./PROBLEMA1. Durante su uso, el programa solicitará los datos necesarios y mostrará los resultados en la terminal. 

## PROBLEMA 2

## Descripción

Este programa fue diseñado para practicar cómo se leen datos línea por línea desde un archivo y cómo se muestra la salida dependiendo del contenido de 
esas líneas. Su función principal es analizar si cada línea contiene solo números. Si la línea es válida, se muestra un mensaje indicando el número; 
si no lo es, se genera un mensaje de error. Este ejercicio permite trabajar con archivos, entradas y salidas estándar (stdin, stdout y stderr), 
así como con funciones útiles como isdigit() que ayudan a verificar si un carácter es un número.

## Funcionamiento

El programa recibe varias líneas desde la entrada estándar. En cada línea, se revisa carácter por carácter para ver si todos los caracteres son dígitos.
Si lo son, entonces se considera que esa línea contiene un número válido, y se muestra un mensaje en la salida estándar indicando el número leído.
En cambio, si la línea contiene algún carácter que no sea un número, como una letra o símbolo, se considera inválida. En ese caso, el programa no lo 
imprime como número válido, sino que escribe un mensaje de error en la salida de errores (stderr) explicando que esa línea es inválida y mostrando su 
contenido. Este proceso se repite para todas las líneas hasta que ya no hay más contenido que leer. De esta manera, se separan los números válidos de las
líneas incorrectas de forma automática.

## Compilacion y Ejecucion

Para usar el programa, primero se debe compilar el archivo PROBLEMA2.c con el comando gcc PROBLEMA2.c -o PROBLEMA2 , usando la terminal. Si no hay errores,
se genera un ejecutable llamado problema2. Luego, se prepara un archivo de texto con varias líneas llamado, por ejemplo, entrada.txt. Para ejecutar el 
programa, se usa el comando ./problema2 < Entrada.txt > output.txt 2> error.txt, donde se indica que la entrada vendrá desde ese archivo, que las líneas 
válidas se guarden en output.txt, y los errores en error.txt. 
