#include <stdio.h>
#include <math.h>

int main() {
    float v[10], soma = 0, media, somaQuad = 0, desvio;
    for(int i = 0; i < 10; i++) {
        scanf("%f", &v[i]);
        soma += v[i];
    }
    media = soma / 10;
    for(int i = 0; i < 10; i++) {
        somaQuad += pow(v[i] - media, 2);
    }
    desvio = sqrt(somaQuad / 9); // n-1 = 9
    printf("Desvio padrao: %.4f\n", desvio);
    return 0;
}
