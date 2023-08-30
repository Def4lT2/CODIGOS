#include <stdio.h>
#include <stdlib.h>

// Función para ordenar los dígitos de un número en orden ascendente
int ascenderDigitos(int num) {
    int digitos[4];
    for (int i = 0; i < 4; i++) {
        digitos[i] = num % 10;
        num /= 10;
    }

    // Ordenar los dígitos en orden ascendente
    for (int i = 0; i < 3; i++) {
        for (int j = i + 1; j < 4; j++) {
            if (digitos[i] > digitos[j]) {
                int temp = digitos[i];
                digitos[i] = digitos[j];
                digitos[j] = temp;
            }
        }
    }

    // Reconstruir el número ordenado
    int numeroAscendente = 0;
    for (int i = 0; i < 4; i++) {
        numeroAscendente = numeroAscendente * 10 + digitos[i];
    }

    return numeroAscendente;
}

// Función para ordenar los dígitos de un número en orden descendente
int descenderDigitos(int num) {
    int digitos[4];
    for (int i = 0; i < 4; i++) {
        digitos[i] = num % 10;
        num /= 10;
    }

    // Ordenar los dígitos en orden descendente
    for (int i = 0; i < 3; i++) {
        for (int j = i + 1; j < 4; j++) {
            if (digitos[i] < digitos[j]) {
                int temp = digitos[i];
                digitos[i] = digitos[j];
                digitos[j] = temp;
            }
        }
    }

    // Reconstruir el número ordenado
    int numeroDescendente = 0;
    for (int i = 0; i < 4; i++) {
        numeroDescendente = numeroDescendente * 10 + digitos[i];
    }

    return numeroDescendente;
}

int kaprekarConstant(int numero) {
    if (numero == 6174) {
        return 0; // Ya hemos llegado al ciclo 6174
    }

    int contador = 0;
    while (numero != 6174) {
        int ascendente = ascenderDigitos(numero);
        int descendente = descenderDigitos(numero);

        numero = descendente - ascendente;
        contador++;
    }

    return contador;
}

int main() {
    int num;

    printf("Ingresa un numero entero de cuatro digitos: ");
    scanf("%d", &num);

    if (num < 1000 || num > 9999) {
        printf("Ingresa un numero de cuatro digitos valido.\n");
        return 1;
    }

    int pasos = kaprekarConstant(num);

    printf("La Constante de Kaprekar para %d es %d.\n", num, pasos);

    return 0;
}
