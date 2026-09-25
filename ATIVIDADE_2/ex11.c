#include <stdio.h>

int main() {
    int n, i;
    float numero;
    float maior, menor;
    float soma = 0;
    float media;

    printf("Quantos numeros voce quer digitar? ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        printf("Digite o numero %d: ", i);
        scanf("%f", &numero);

        soma = soma + numero;

        if(i == 1) {
            maior = numero;
            menor = numero;
        } else {
            if(numero > maior) {
                maior = numero;
            }

            if(numero < menor) {
                menor = numero;
            }
        }
    }

    media = soma / n;

    printf("Maior valor: %.2f\n", maior);
    printf("Menor valor: %.2f\n", menor);
    printf("Media: %.2f\n", media);

    return 0;
}
