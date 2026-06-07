#include <stdio.h>

int main() {
    float m[3][6], somaImpar = 0, somaCol24 = 0;
    for(int i=0; i<3; i++) {
        for(int j=0; j<6; j++) {
            scanf("%f", &m[i][j]);
            if((j+1) % 2 != 0) somaImpar += m[i][j]; // colunas 1, 3, 5 = indices 0, 2, 4
            if(j == 1 || j == 3) somaCol24 += m[i][j];
        }
    }
    for(int i=0; i<3; i++) m[i][5] = m[i][0] + m[i][1];
    
    printf("Soma cols impares: %.2f\n", somaImpar);
    printf("Media cols 2 e 4: %.2f\n", somaCol24 / 6.0); // 3 elementos col 2 + 3 na col 4
    for(int i=0; i<3; i++) {
        for(int j=0; j<6; j++) printf("%.2f ", m[i][j]);
        printf("\n");
    }
    return 0;
}
