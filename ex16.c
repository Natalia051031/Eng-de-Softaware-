#include <stdio.h>

int main() {
    int numero;
    int i;
    int primo = 1;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &numero);

    if(numero <= 1) {
        primo = 0;
    } else {

        for(i = 2; i < numero; i++) {

            if(numero % i == 0) {
                primo = 0;
                break;
            }
        }
    }

    if(primo == 1) {
        printf("%d e primo.\n", numero);
    } else {
        printf("%d nao e primo.\n", numero);
    }

    return 0;
}