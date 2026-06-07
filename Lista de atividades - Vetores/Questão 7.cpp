#include <stdio.h>

int main() {
    int v[10], maior, pos = 0;
    for(int i = 0; i < 10; i++) {
        scanf("%d", &v[i]);
        if(i == 0 || v[i] > maior) {
            maior = v[i];
            pos = i;
        }
    }
    for(int i = 0; i < 10; i++) printf("%d ", v[i]);
    printf("\nMaior: %d na posicao: %d\n", maior, pos);
    return 0;
}
