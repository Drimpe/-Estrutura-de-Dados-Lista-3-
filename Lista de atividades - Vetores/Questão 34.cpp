#include <stdio.h>

int main() {
    int v[10], i = 0;
    while(i < 10) {
        int num, repetido = 0;
        scanf("%d", &num);
        for(int j = 0; j < i; j++) {
            if(v[j] == num) {
                repetido = 1;
                printf("Ja existe. Digite outro.\n");
                break;
            }
        }
        if(!repetido) v[i++] = num;
    }
    for(i = 0; i < 10; i++) printf("%d ", v[i]);
    return 0;
}
