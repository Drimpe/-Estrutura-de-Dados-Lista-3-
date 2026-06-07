#include <stdio.h>

int main() {
    int v[10], x, count = 0;
    for(int i = 0; i < 10; i++) scanf("%d", &v[i]);
    scanf("%d", &x);
    for(int i = 0; i < 10; i++) {
        if(v[i] % x == 0) {
            printf("%d ", v[i]);
            count++;
        }
    }
    printf("\nTotal de multiplos: %d\n", count);
    return 0;
}
