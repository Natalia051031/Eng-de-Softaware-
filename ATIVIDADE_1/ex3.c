#include <stdio.h>

int main() {
    float nota1, nota2, media;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    media = (nota1 + nota2) / 2.0f;

    printf("A MEDIA DAS NOTAS E: %.1f\n", media);
    
    return 0;
}
