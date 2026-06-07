#include <stdio.h>

int main() {
    int m[5][5];
    for(int i=0; i<5; i++) {
        for(int j=0; j<5; j++) {
            m[i][j] = (i == j) ? 1 : 0;
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
    return 0;
}
