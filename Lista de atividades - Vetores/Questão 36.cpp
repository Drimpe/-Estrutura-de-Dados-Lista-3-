#include <stdio.h>

int main() {
    float v[10], aux;
    for(int i = 0; i < 10; i++) scanf("%f", &v[i]);
    
    for(int i = 0; i < 9; i++) {
        for(int j = i+1; j < 10; j++) {
            if(v[i] > v[j]) {
                aux = v[i]; v[i] = v[j]; v[j] = aux;
            }
        }
    }
    for(int i = 0; i < 10; i++) printf("%.2f ", v[i]);
    return 0;
}
