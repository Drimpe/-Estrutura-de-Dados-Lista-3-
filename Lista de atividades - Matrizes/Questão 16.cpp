#include <stdio.h>

int main() {
    char gab[10], resp[3][10];
    int mat[3], notas[3] = {0}, ap = 0;
    
    for(int i=0; i<10; i++) scanf(" %c", &gab[i]);
    for(int i=0; i<3; i++) {
        scanf("%d", &mat[i]);
        for(int j=0; j<10; j++) {
            scanf(" %c", &resp[i][j]);
            if(resp[i][j] == gab[j]) notas[i]++;
        }
        if(notas[i] >= 7) ap++;
    }
    for(int i=0; i<3; i++) {
        printf("Mat: %d | Nota: %d | Resp: ", mat[i], notas[i]);
        for(int j=0; j<10; j++) printf("%c", resp[i][j]);
        printf("\n");
    }
    printf("Aprovacao: %.2f%%\n", (ap/3.0)*100);
    return 0;
}
