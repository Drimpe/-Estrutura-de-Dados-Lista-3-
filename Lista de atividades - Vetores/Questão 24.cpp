#include <stdio.h>

int main() {
    int num, numAlto, numBaixo;
    float alt, maxAlt = 0, minAlt = 999;
    for(int i = 0; i < 10; i++) {
        scanf("%d %f", &num, &alt);
        if(alt > maxAlt) { maxAlt = alt; numAlto = num; }
        if(alt < minAlt) { minAlt = alt; numBaixo = num; }
    }
    printf("Mais baixo: %d (%.2fm), Mais alto: %d (%.2fm)\n", numBaixo, minAlt, numAlto, maxAlt);
    return 0;
}
