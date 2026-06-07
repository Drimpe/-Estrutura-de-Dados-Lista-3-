#include <stdio.h>

int main() {
    int v1[10], v2[10], j = 0;
    for(int i = 0; i < 10; i++) {
        do { scanf("%d", &v1[i]); } while(v1[i] < 0 || v1[i] > 50);
        if(v1[i] % 2 != 0) { v2[j] = v1[i]; j++; }
    }
    printf("Vetor 1:\n");
    for(int i = 0; i < 10; i+=2) printf("%d %d\n", v1[i], i+1<10?v1[i+1]:0);
    printf("Vetor 2 (Impares):\n");
    for(int i = 0; i < j; i+=2) printf("%d %d\n", v2[i], i+1<j?v2[i+1]:0);
    return 0;
}
