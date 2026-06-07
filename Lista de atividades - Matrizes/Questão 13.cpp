#include <stdio.h>
#include <stdlib.h>

int main() {
    int m[4][4];
    for(int i=0; i<4; i++) {
        for(int j=0; j<4; j++) {
            m[i][j] = rand() % 20 + 1;
            printf("%2d ", m[i][j]);
        }
        printf("\n");
    }
    printf("Transformada:\n");
    for(int i=0; i<4; i++) {
        for(int j=0; j<4; j++) {
            if(j > i) m[i][j] = 0;
            printf("%2d ", m[i][j]);
        }
        printf("\n");
    }
    return 0;
}
