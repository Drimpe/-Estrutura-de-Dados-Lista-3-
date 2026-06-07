#include <stdio.h>

int main() {
    int A[10], B[10], C[20];
    for(int i = 0; i < 10; i++) scanf("%d", &A[i]);
    for(int i = 0; i < 10; i++) scanf("%d", &B[i]);
    for(int i = 0; i < 10; i++) {
        C[2 * i] = A[i];
        C[2 * i + 1] = B[i];
    }
    for(int i = 0; i < 20; i++) printf("%d ", C[i]);
    return 0;
}
