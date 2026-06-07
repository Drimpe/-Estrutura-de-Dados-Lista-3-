#include <stdio.h>

int main() {
    int v[100], count = 0, num = 1;
    while(count < 100) {
        if(num % 7 != 0 && num % 10 != 7) {
            v[count] = num;
            count++;
        }
        num++;
    }
    for(int i = 0; i < 100; i++) printf("%d ", v[i]);
    return 0;
}
