#include <stdio.h>

void multiplicacionEgipcia(int multiplicando, int multiplicador) {
    int resultado = 0;
    printf("Descomposicion de la multiplicación egipcia:\n");

    while (multiplicador > 0) {
        // Si el multiplicador es impar, suma el multiplicando al resultado.
        if (multiplicador % 2 != 0) {
            printf("%d + ", multiplicando);
            resultado += multiplicando;
        }

        // Divide el multiplicador entre 2 y el multiplicando por 2.
        multiplicador /= 2;
        multiplicando *= 2;

        // Muestra los valores actuales del multiplicando, multiplicador y resultado.
        printf("%d * %d = %d\n", multiplicando, multiplicador, resultado);
    }

    printf("\nEl resultado de la multiplicacion es: %d\n", resultado);
}

int main() {
    int multiplicando, multiplicador;

    printf("Ingresa el multiplicando: ");
    scanf("%d", &multiplicando);

    printf("Ingresa el multiplicador: ");
    scanf("%d", &multiplicador);

    if (multiplicando < 0 || multiplicador < 0) {
        printf("Ingresa numeros enteros positivos.\n");
        return 1;
    }

    multiplicacionEgipcia(multiplicando, multiplicador);

    return 0;
}
