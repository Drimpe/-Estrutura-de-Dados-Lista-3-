#include <stdio.h>

int main() {
    int v1[10], v2[10], inter[10], k = 0;
    for(int i=0; i<10; i++) scanf("%d", &v1[i]);
    for(int i=0; i<10; i++) scanf("%d", &v2[i]);
    
    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 10; j++) {
            if(v1[i] == v2[j]) {
                int rep = 0;
                for(int x = 0; x < k; x++) if(inter[x] == v1[i]) rep = 1;
                if(!rep) inter[k++] = v1[i];
            }
        }
    }
    for(int i=0; i<k; i++) printf("%d ", inter[i]);
    return 0;
}
