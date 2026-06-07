#include <stdio.h>

int main() {
    float m[10][3];
    int p1=0, p2=0, p3=0;
    
    for(int i=0; i<10; i++) {
        for(int j=0; j<3; j++) scanf("%f", &m[i][j]);
        if(m[i][0] <= m[i][1] && m[i][0] <= m[i][2]) p1++;
        else if(m[i][1] <= m[i][0] && m[i][1] <= m[i][2]) p2++;
        else p3++;
    }
    printf("Pior na P1: %d\nPior na P2: %d\nPior na P3: %d\n", p1, p2, p3);
    return 0;
}
