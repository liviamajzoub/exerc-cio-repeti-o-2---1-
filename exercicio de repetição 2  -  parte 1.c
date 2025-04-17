#include <stdio.h>

int main() {
    float numero = 0, maior_numero;
    int primeiro_numero = 1;

    while (numero >= 0) {
        printf("Digite um numero: ");
        scanf("%f", &numero);

        if (numero < 0) {
            break;
        }

        if (primeiro_numero) {
            maior_numero = numero;
            primeiro_numero = 0;
        } else if (numero > maior_numero) {
            maior_numero = numero;
        }
    }

    if (!primeiro_numero) {
        printf("O maior numero digitado foi: %.2f\n", maior_numero);
    } else {
        printf("Nenhum numero valido foi digitado.\n");
    }

    return 0;
}
