#include <stdio.h>

int main() {
    int m[20][20];
    long long maxProd = 0, prod;
    
    for(int i=0; i<20; i++)
        for(int j=0; j<20; j++) scanf("%d", &m[i][j]);
        
    for(int i=0; i<20; i++) {
        for(int j=0; j<20; j++) {
            // Horizontal
            if(j <= 16) {
                prod = m[i][j] * m[i][j+1] * m[i][j+2] * m[i][j+3];
                if(prod > maxProd) maxProd = prod;
            }
            // Vertical
            if(i <= 16) {
                prod = m[i][j] * m[i+1][j] * m[i+2][j] * m[i+3][j];
                if(prod > maxProd) maxProd = prod;
            }
            // Diagonal Principal
            if(i <= 16 && j <= 16) {
                prod = m[i][j] * m[i+1][j+1] * m[i+2][j+2] * m[i+3][j+3];
                if(prod > maxProd) maxProd = prod;
            }
            // Diagonal Secundária
            if(i <= 16 && j >= 3) {
                prod = m[i][j] * m[i+1][j-1] * m[i+2][j-2] * m[i+3][j-3];
                if(prod > maxProd) maxProd = prod;
            }
        }
    }
    printf("Maior produto: %lld\n", maxProd);
    return 0;
}
