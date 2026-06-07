#include <stdio.h>

int main() {
    float v1[10], v2[10];
    for(int i = 0; i < 10; i++) {
        scanf("%f", &v1[i]);
        v2[i] = v1[i] * v1[i];
    }
    for(int i = 0; i < 10; i++) printf("%.2f ", v1[i]);
    printf("\n");
    for(int i = 0; i < 10; i++) printf("%.2f ", v2[i]);
    return 0;
}

