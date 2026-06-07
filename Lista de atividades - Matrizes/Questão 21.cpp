#include <stdio.h>

int main() {
    float m1[2][2], m2[2][2], m3[3][3] = {0}; // a regra diz criar 3x3 nas duas primeiras, apesar de operar em 2x2
    int op; float c;
    for(int i=0; i<2; i++) for(int j=0; j<2; j++) scanf("%f", &m1[i][j]);
    for(int i=0; i<2; i++) for(int j=0; j<2; j++) scanf("%f", &m2[i][j]);
    
    printf("1.Soma 2.Sub 3.Constante 4.Imprimir\n"); scanf("%d", &op);
    if(op == 1) {
        for(int i=0; i<2; i++) for(int j=0; j<2; j++) m3[i][j] = m1[i][j] + m2[i][j];
    } else if(op == 2) {
        for(int i=0; i<2; i++) for(int j=0; j<2; j++) m3[i][j] = m2[i][j] - m1[i][j];
    } else if(op == 3) {
        scanf("%f", &c);
        for(int i=0; i<2; i++) for(int j=0; j<2; j++) { m1[i][j]+=c; m2[i][j]+=c; }
    } else if(op == 4) {
        for(int i=0; i<2; i++) {
            for(int j=0; j<2; j++) printf("%.2f ", m1[i][j]); printf("\n");
        }
        for(int i=0; i<2; i++) {
            for(int j=0; j<2; j++) printf("%.2f ", m2[i][j]); printf("\n");
        }
    }
    return 0;
}
