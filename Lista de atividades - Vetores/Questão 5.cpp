#include <stdio.h>

int main() {
    int v[10], count = 0;
    for(int i = 0; i < 10; i++) {
        scanf("%d", &v[i]);
        if(v[i] % 2 == 0) count++;
    }
    printf("Pares: %d\n", count);
    return 0;
}

