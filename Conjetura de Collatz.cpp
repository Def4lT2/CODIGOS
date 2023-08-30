#include <stdio.h>

int collatz(int n) {
    if (n % 2 == 0) {
        return n / 2;
    } else {
        return 3 * n + 1;
    }
}

int main() {
    int num;

    printf("Ingresa un numero entero positivo: ");
    scanf("%d", &num);

    if (num <= 0) {
        printf("Ingresa un número entero positivo.\n");
        return 1;
    }

    printf("Secuencia de Collatz para %d: ", num);

    while (num != 1) {
        printf("%d -> ", num);
        num = collatz(num);
    }

    printf("1\n");

    return 0;
}
