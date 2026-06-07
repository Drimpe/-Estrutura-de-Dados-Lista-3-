#include <stdio.h>

int main() {
    int A[11];
    for(int i = 0; i < 11; i++) scanf("%d", &A[i]);
    // Algoritmo clássico de ordenação serve para qualquer arranjo prévio
    for(int i = 0; i < 10; i++) {
        for(int j = i+1; j < 11; j++) {
            if(A[i] > A[j]) {
                int temp = A[i]; A[i] = A[j]; A[j] = temp;
            }
        }
    }
    for(int i = 0; i < 11; i++) printf("%d ", A[i]);
    return 0;
}
