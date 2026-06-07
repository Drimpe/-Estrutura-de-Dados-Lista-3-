#include <stdio.h>

int main() {
    char mat[5][10], gab[10];
    int notas[5] = {0};
    
    for(int i=0; i<10; i++) scanf(" %c", &gab[i]);
    for(int i=0; i<5; i++) {
        for(int j=0; j<10; j++) {
            scanf(" %c", &mat[i][j]);
            if(mat[i][j] == gab[j]) notas[i]++;
        }
    }
    for(int i=0; i<5; i++) printf("Aluno %d - Nota: %d\n", i+1, notas[i]);
    return 0;
}
