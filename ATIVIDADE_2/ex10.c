#include <stdio.h>

int main() {
    float nota1, nota2, nota3;
    float media;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    if (2 == 0 || 3 == 0 || 5 == 0) {
        printf("Erro: peso nao pode ser 0.\n");
    } else {
        media = (nota1 * 2 + nota2 * 3 + nota3 * 5) / (2 + 3 + 5);

        printf("Media: %.1f\n", media);

        if (media >= 6) {
            printf("Aprovado\n");
        } else if (media >= 4) {
            printf("Exame\n");
        } else {
            printf("Reprovado\n");
        }
    }

    return 0;
}
