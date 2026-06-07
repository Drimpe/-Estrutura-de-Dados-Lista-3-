#include <stdio.h>

int main() {
    int m[4][4];
    for(int i=0; i<4; i++) {
        for(int j=0; j<4; j++) {
            m[i][j] = i * j;
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
    return 0;
}
