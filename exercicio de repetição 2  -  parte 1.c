#include <stdio.h>

int main()
{
    float numero, maior_numero;

    printf("Digite um numero: ");
    scanf("%f", &numero);


    if (numero < 0)
    {
        printf("Nenhum numero valido foi digitado.\n");
        return 0;
    }

    maior_numero = numero;

    while (1)
    {
        printf("Digite um numero: ");
        scanf("%f", &numero);

        if (numero < 0)
        {
            break;
        }

        if (numero > maior_numero)
        {
            maior_numero = numero;
        }
    }

    printf("O maior numero digitado foi: %.2f\n", maior_numero);

    return 0;
}
