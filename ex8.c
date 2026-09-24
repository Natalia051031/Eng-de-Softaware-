#include <stdio.h>

int main{
    int numero;

    scanf("%d", &numero);

    while(numero != 0) {
        printf("Você digitou %d\n", numero);

        scanf("%d", &numero);
    }

    printf("Programa encerrado.\n");

    return 0;

}