#include <stdio.h>

int main() {
    int v[10];
    for(int i = 0; i < 10; i++) scanf("%d", &v[i]);
    printf("Valores repetidos: ");
    for(int i = 0; i < 10; i++) {
        for(int j = i + 1; j < 10; j++) {
            if(v[i] == v[j]) {
                printf("%d ", v[i]);
                break; // Evita imprimir o mesmo par várias vezes
            }
        }
    }
    return 0;
}
