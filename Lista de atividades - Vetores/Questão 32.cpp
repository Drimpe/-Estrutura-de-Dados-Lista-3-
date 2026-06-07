#include <stdio.h>

int main() {
    int x[5], y[5];
    for(int i=0; i<5; i++) scanf("%d", &x[i]);
    for(int i=0; i<5; i++) scanf("%d", &y[i]);

    printf("Soma: ");
    for(int i=0; i<5; i++) printf("%d ", x[i]+y[i]);
    
    printf("\nProduto: ");
    for(int i=0; i<5; i++) printf("%d ", x[i]*y[i]);
    
    printf("\nDiferenca (x-y): ");
    for(int i=0; i<5; i++) {
        int achou = 0;
        for(int j=0; j<5; j++) if(x[i] == y[j]) achou = 1;
        if(!achou) printf("%d ", x[i]);
    }

    printf("\nIntersecao: ");
    for(int i=0; i<5; i++) {
        for(int j=0; j<5; j++) {
            if(x[i] == y[j]) printf("%d ", x[i]);
        }
    }

    printf("\nUniao: ");
    for(int i=0; i<5; i++) printf("%d ", x[i]);
    for(int i=0; i<5; i++) {
        int achou = 0;
        for(int j=0; j<5; j++) if(y[i] == x[j]) achou = 1;
        if(!achou) printf("%d ", y[i]);
    }
    return 0;
}
