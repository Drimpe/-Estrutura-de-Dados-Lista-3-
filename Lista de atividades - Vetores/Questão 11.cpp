#include <stdio.h>

int main() {
    float v[10], somaPos = 0;
    int qtdNeg = 0;
    for(int i = 0; i < 10; i++) {
        scanf("%f", &v[i]);
        if(v[i] < 0) qtdNeg++;
        else if(v[i] > 0) somaPos += v[i];
    }
    printf("Negativos: %d, Soma Positivos: %.2f\n", qtdNeg, somaPos);
    return 0;
}
