
// TAREA 3 - BREYSON BARRIOS - C31049

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char linea[100]; // Guardar cada línea del archivo

    // Recorre línea por línea el archivo de entrada 
    while (fgets(linea, sizeof(linea), stdin) != NULL) {
        // Quitar el salto de línea al final
        linea[strcspn(linea, "\n")] = '\0';

        int valido = 1;

        // Revisar si todos los caracteres son validos
        for (int i = 0; linea[i] != '\0'; i++) {
            if (!isdigit(linea[i])) {
                valido = 0;
                break;
            }
        }

        if (valido) {
            // Imprime a la salida estándar
            printf("Número: %s\n", linea);
        } else {
            // Imprime a la salida de error
            fprintf(stderr, "Error - Línea inválida: %s\n", linea);
        }
    }

    return 0;
}
