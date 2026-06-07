#include <stdio.h>

int main() {
    int m[3][3], v[3] = {0};
    for(int i=0; i<3; i++)
        for(int j=0; j<3; j++) scanf("%d", &m[i][j]);
    
    for(int j=0; j<3; j++)
        for(int i=0; i<3; i++) v[j] += m[i][j];
        
    for(int j=0; j<3; j++) printf("%d ", v[j]);
    return 0;
}
