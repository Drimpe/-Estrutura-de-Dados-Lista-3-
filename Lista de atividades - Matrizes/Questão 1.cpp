#include <stdio.h>

int main() {
    int m[4][4], count = 0;
    for(int i=0; i<4; i++) {
        for(int j=0; j<4; j++) {
            scanf("%d", &m[i][j]);
            if(m[i][j] > 10) count++;
        }
    }
    printf("Maiores que 10: %d\n", count);
    return 0;
}
