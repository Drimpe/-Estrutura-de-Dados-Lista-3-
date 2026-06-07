#include <stdio.h>

int main() {
    int v[15], k = 0;
    for(int i = 0; i < 15; i++) {
        int val;
        scanf("%d", &val);
        if(val != 0) v[k++] = val;
    }
    for(int i = 0; i < k; i++) printf("%d ", v[i]);
    return 0;
}
