#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int cart[5][5], num, achou;
    srand(time(NULL));
    for(int i=0; i<5; i++) {
        for(int j=0; j<5; ) {
            num = rand() % 100;
            achou = 0;
            for(int r=0; r<=i; r++) {
                for(int c=0; c<(r==i ? j : 5); c++) {
                    if(cart[r][c] == num) achou = 1;
                }
            }
            if(!achou) { cart[i][j] = num; j++; }
        }
    }
    for(int i=0; i<5; i++) {
        for(int j=0; j<5; j++) printf("%02d ", cart[i][j]);
        printf("\n");
    }
    return 0;
}
