#include <stdio.h>

int main() {
    float v[5], maior, menor;
    int pMaior = 0, pMenor = 0;
    for(int i = 0; i < 5; i++) {
        scanf("%f", &v[i]);
        if(i == 0) { maior = menor = v[i]; }
        else {
            if(v[i] > maior) { maior = v[i]; pMaior = i; }
            if(v[i] < menor) { menor = v[i]; pMenor = i; }
        }
    }
    printf("PosMaior: %d, PosMenor: %d\n", pMaior, pMenor);
    return 0;
}
