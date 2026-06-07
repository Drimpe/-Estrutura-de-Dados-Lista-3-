#include <stdio.h>

int main() {
    int m1[4][4], m2[4][4], m3[4][4];
    for(int i=0; i<4; i++) for(int j=0; j<4; j++) scanf("%d", &m1[i][j]);
    for(int i=0; i<4; i++) for(int j=0; j<4; j++) scanf("%d", &m2[i][j]);
    for(int i=0; i<4; i++) {
        for(int j=0; j<4; j++) {
            m3[i][j] = m1[i][j] > m2[i][j] ? m1[i][j] : m2[i][j];
            printf("%d ", m3[i][j]);
        }
        printf("\n");
    }
    return 0;
}
