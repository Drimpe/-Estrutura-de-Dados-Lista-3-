#include <stdio.h>

int isPrimo(int n) {
    if(n < 2) return 0;
    for(int i = 2; i * i <= n; i++)
        if(n % i == 0) return 0;
    return 1;
}

int main() {
    int v[10];
    for(int i = 0; i < 10; i++) {
        scanf("%d", &v[i]);
        if(isPrimo(v[i])) printf("Primo %d na posicao %d\n", v[i], i);
    }
    return 0;
}
