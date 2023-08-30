#include <stdio.h>

int multiplicacionRusa(int multiplicando, int multiplicador) {
    int resultado = 0;

    while (multiplicador > 0) {
        if (multiplicador % 2 != 0) {
            resultado += multiplicando;
        }
        multiplicando *= 2;
        multiplicador /= 2;
    }

    return resultado;
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

    int resultado = multiplicacionRusa(multiplicando, multiplicador);

    printf("El resultado de la multiplicacion es: %d\n", resultado);

    return 0;
}
