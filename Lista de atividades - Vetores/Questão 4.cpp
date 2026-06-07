#include <stdio.h>

int main() {
    int v[8], x, y;
    for(int i = 0; i < 8; i++) scanf("%d", &v[i]);
    scanf("%d %d", &x, &y);
    if(x >= 0 && x < 8 && y >= 0 && y < 8)
        printf("Soma: %d\n", v[x] + v[y]);
    else
        printf("Posicoes invalidas\n");
    return 0;
}
