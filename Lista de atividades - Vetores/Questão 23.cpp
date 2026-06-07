#include <stdio.h>

int main() {
    float x[5], y[5], prod = 0;
    for(int i = 0; i < 5; i++) scanf("%f", &x[i]);
    for(int i = 0; i < 5; i++) scanf("%f", &y[i]);
    for(int i = 0; i < 5; i++) {
        printf("x[%d]: %.2f, y[%d]: %.2f\n", i, x[i], i, y[i]);
        prod += x[i] * y[i];
    }
    printf("Produto escalar: %.2f\n", prod);
    return 0;
}
