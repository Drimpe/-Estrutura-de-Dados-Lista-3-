#include <stdio.h>

int main() {
    int v[6], somaPar = 0, qtdImpar = 0;
    printf("Pares: ");
    for(int i = 0; i < 6; i++) {
        scanf("%d", &v[i]);
        if(v[i] % 2 == 0) {
            printf("%d ", v[i]);
            somaPar += v[i];
        }
    }
    printf("\nSoma Pares: %d\nImpares: ", somaPar);
    for(int i = 0; i < 6; i++) {
        if(v[i] % 2 != 0) {
            printf("%d ", v[i]);
            qtdImpar++;
        }
    }
    printf("\nQtd Impares: %d\n", qtdImpar);
    return 0;
}
