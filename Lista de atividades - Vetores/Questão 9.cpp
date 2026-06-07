#include <stdio.h>

int main() {
    int v[6], num, i = 0;
    while(i < 6) {
        scanf("%d", &num);
        if(num % 2 == 0) {
            v[i] = num;
            i++;
        } else {
            printf("Apenas valores pares.\n");
        }
    }
    for(i = 5; i >= 0; i--) printf("%d ", v[i]);
    return 0;
}
