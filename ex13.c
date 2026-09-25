#include <stdio.h>

int main() {
    float lado1, lado2, lado3;

    printf("Digite o primeiro lado: ");
    scanf("%f", &lado1);

    printf("Digite o segundo lado: ");
    scanf("%f", &lado2);

    printf("Digite o terceiro lado: ");
    scanf("%f", &lado3);

    if(lado1 + lado2 <= lado3 ||
       lado1 + lado3 <= lado2 ||
       lado2 + lado3 <= lado1) {

        printf("Os valores nao formam um triangulo valido.\n");

    } else if(lado1 == lado2 && lado2 == lado3) {

        printf("Triangulo equilatero.\n");

    } else if(lado1 == lado2 ||
              lado1 == lado3 ||
              lado2 == lado3) {

        printf("Triangulo isosceles.\n");

    } else {

        printf("Triangulo escaleno.\n");
    }

    return 0;
}