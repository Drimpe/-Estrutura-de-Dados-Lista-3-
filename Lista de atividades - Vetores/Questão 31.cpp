#include <stdio.h>

int main() {
    int v1[10], v2[10], uni[20], k = 0;
    for(int i=0; i<10; i++) scanf("%d", &v1[i]);
    for(int i=0; i<10; i++) scanf("%d", &v2[i]);
    
    for(int i=0; i<10; i++) {
        int rep = 0;
        for(int x=0; x<k; x++) if(uni[x] == v1[i]) rep = 1;
        if(!rep) uni[k++] = v1[i];
    }
    for(int i=0; i<10; i++) {
        int rep = 0;
        for(int x=0; x<k; x++) if(uni[x] == v2[i]) rep = 1;
        if(!rep) uni[k++] = v2[i];
    }
    for(int i=0; i<k; i++) printf("%d ", uni[i]);
    return 0;
}
