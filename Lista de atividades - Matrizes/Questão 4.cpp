#include <stdio.h>

int main() {
    int m[4][4], maior, l=0, c=0;
    for(int i=0; i<4; i++) {
        for(int j=0; j<4; j++) {
            scanf("%d", &m[i][j]);
            printf("%d ", m[i][j]);
            if((i==0 && j==0) || m[i][j] > maior) {
                maior = m[i][j]; l = i; c = j;
            }
        }
        printf("\n");
    }
    printf("Maior: %d na Linha %d, Coluna %d\n", maior, l, c);
    return 0;
}
