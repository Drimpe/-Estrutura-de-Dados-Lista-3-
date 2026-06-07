#include <stdio.h>

int main() {
    int v[10], v1[10], v2[10], t1 = 0, t2 = 0;
    for(int i = 0; i < 10; i++) {
        scanf("%d", &v[i]);
        if(v[i] % 2 != 0) { v1[t1] = v[i]; t1++; }
        else { v2[t2] = v[i]; t2++; }
    }
    printf("Impares (v1): ");
    for(int i = 0; i < t1; i++) printf("%d ", v1[i]);
    printf("\nPares (v2): ");
    for(int i = 0; i < t2; i++) printf("%d ", v2[i]);
    return 0;
}
