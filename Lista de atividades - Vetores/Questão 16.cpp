#include <stdio.h>

int main() {
    float v[5];
    int cod;
    for(int i = 0; i < 5; i++) scanf("%f", &v[i]);
    scanf("%d", &cod);
    if(cod == 0) return 0;
    else if(cod == 1) {
        for(int i = 0; i < 5; i++) printf("%.2f ", v[i]);
    } else if(cod == 2) {
        for(int i = 4; i >= 0; i--) printf("%.2f ", v[i]);
    } else {
        printf("Codigo invalido.\n");
    }
    return 0;
}
