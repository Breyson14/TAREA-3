
// TAREA 3 - BREYSON BARRIOS - C31049

#include <stdio.h>
#include <string.h>  

int main() {
    char texto[100];    
    char letra;          
    int contador = 0;    

    // Pedir al usuario que ingrese un string
    printf("Ingrese un String: ");
    fgets(texto, sizeof(texto), stdin);  
    texto[strcspn(texto, "\n")] = '\0';

    // Pedir al usuario el caracter que quiere contar
    printf("¿Cual caracter quieres contar? ");
    scanf(" %c", &letra);  

    //Recorrido del String 
    for (int i = 0; texto[i] != '\0'; i++) {
        if (texto[i] == letra) {
            contador++;
        }
    }

    printf("El caracter '%c' aparece %d veces.\n", letra, contador);

    //Imprimimor el string en orden inverso
    printf("String en orden inverso: ");
    for (int i = strlen(texto) - 1; i >= 0; i--) {
        printf("%c", texto[i]);
    }
    printf("\n");

    return 0;
}
