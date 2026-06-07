#include <stdio.h>

int main() {
    float v[5], maior, menor, soma = 0;
    for(int i = 0; i < 5; i++) {
        scanf("%f", &v[i]);
        soma += v[i];
        if(i == 0) { maior = menor = v[i]; }
        else {
            if(v[i] > maior) maior = v[i];
            if(v[i] < menor) menor = v[i];
        }
    }
    for(int i = 0; i < 5; i++) printf("%.2f ", v[i]);
    printf("\nMaior: %.2f, Menor: %.2f, Media: %.2f\n", maior, menor, soma / 5);
    return 0;
}
