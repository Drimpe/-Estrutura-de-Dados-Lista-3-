#include <stdio.h>

int main() {
    int v[20];
    for(int i = 0; i < 20; i++) {
        scanf("%d", &v[i]);
        int repetido = 0;
        for(int j = 0; j < i; j++) {
            if(v[i] == v[j]) { repetido = 1; break; }
        }
        if(!repetido) printf("%d ", v[i]);
    }
    return 0;
}
