#include <stdio.h>

int main() {
    int a, b, va[4] = {0}, vb[4] = {0}, vsoma[5] = {0};
    scanf("%d %d", &a, &b);
    
    for(int i = 0; i < 4; i++) {
        va[i] = a % 10; a /= 10;
        vb[i] = b % 10; b /= 10;
    }
    
    int vaiUm = 0;
    for(int i = 0; i < 4; i++) {
        int soma = va[i] + vb[i] + vaiUm;
        vsoma[i] = soma % 10;
        vaiUm = soma / 10;
    }
    vsoma[4] = vaiUm;
    
    int inicio = vsoma[4] == 0 ? 3 : 4;
    for(int i = inicio; i >= 0; i--) printf("%d", vsoma[i]);
    return 0;
}
