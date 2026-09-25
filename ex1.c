#include <stdio.h>

int main() {

    char nome[20];
    int idade;
    float altura;

    printf("Qual seu nome?\n");
    scanf("%s", nome);

    printf("Qual a sua idade?\n");
    scanf("%d", &idade);

    printf("Qual sua altura?\n");
    scanf("%f", &altura);

    printf("\nNome: %s\n", nome);
    printf("Idade: %d\n", idade);
    printf("Altura: %.2f\n", altura);

    return 0;
}
