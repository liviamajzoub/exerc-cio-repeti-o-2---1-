#include <stdio.h>

int main()
{
    float numero, maior_numero;

    printf("Digite um numero: ");
    scanf("%f", &numero);

    maior_numero = numero;

    while (numero >= 0)
    {
        if (numero > maior_numero)
        {
            maior_numero = numero;
        }
        printf("Digite um numero: ");
        scanf("%f", &numero);
    }

    printf("O maior numero digitado foi: %.2f\n", maior_numero);

    return 0;
}
