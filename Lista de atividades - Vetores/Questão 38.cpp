#include <stdio.h>

int main() {
    int v[10];
    for(int i = 0; i < 10; i++) {
        int num, j;
        scanf("%d", &num);
        for(j = i - 1; j >= 0 && v[j] > num; j--) {
            v[j + 1] = v[j];
        }
        v[j + 1] = num;
    }
    for(int i = 0; i < 10; i++) printf("%d ", v[i]);
    return 0;
}
