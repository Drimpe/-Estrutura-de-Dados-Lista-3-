#include <stdio.h>

int main() {
    int m[3][3];
    // -1 (minha), 1 (oponente), 0 (vazia)
    for(int i=0; i<3; i++)
        for(int j=0; j<3; j++) scanf("%d", &m[i][j]);

    // Estratégia simples e rigorosa para encontrar qualquer espaço vazio
    int jogada_feita = 0;
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            if(m[i][j] == 0) {
                printf("Proxima jogada (-1) na posicao: Linha %d, Coluna %d\n", i, j);
                jogada_feita = 1;
                break;
            }
        }
        if(jogada_feita) break;
    }
    return 0;
}
