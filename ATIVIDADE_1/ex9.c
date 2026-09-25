#include <stdio.h>

int main() {
    int i, contador = 0;
    float nota;

    for(i = 1; i <= 5; i++){
        printf("Digite a nota %d: ", i);
        scanf("%f", &nota);

        if(nota >= 6.0f){
            contador++;
        }
    }

    printf("Notas maiores ou iguais a 6: %d\n", contador);

    return 0;
}
