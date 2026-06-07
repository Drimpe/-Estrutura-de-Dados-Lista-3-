#include <stdio.h>

int main() {
    int mat[5][4], maiorMat, maxNota = -1;
    float somaTotal = 0;
    
    for(int i=0; i<5; i++) {
        for(int j=0; j<3; j++) scanf("%d", &mat[i][j]);
        mat[i][3] = mat[i][1] + mat[i][2]; // soma
        somaTotal += mat[i][3];
        if(mat[i][3] > maxNota) {
            maxNota = mat[i][3];
            maiorMat = mat[i][0];
        }
    }
    printf("Matricula maior nota: %d\n", maiorMat);
    printf("Media notas finais: %.2f\n", somaTotal/5.0);
    return 0;
}
