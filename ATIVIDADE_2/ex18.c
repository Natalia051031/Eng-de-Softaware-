#include <stdio.h>

int main() {
    int n;
    int i;
    int a = 0;
    int b = 1;
    int proximo;

    printf("Quantos termos voce quer ver? ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {

        printf("%d ", a);

        proximo = a + b;
        a = b;
        b = proximo;
    }

    printf("\n");

    return 0;
}
