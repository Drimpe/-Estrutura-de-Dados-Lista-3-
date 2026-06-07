#include <stdio.h>

int main() {
    int v[10], maior, menor;
    for(int i = 0; i < 10; i++) {
        scanf("%d", &v[i]);
        if(i == 0) { maior = menor = v[i]; }
        else {
            if(v[i] > maior) maior = v[i];
            if(v[i] < menor) menor = v[i];
        }
    }
    printf("Maior: %d, Menor: %d\n", maior, menor);
    return 0;
}
