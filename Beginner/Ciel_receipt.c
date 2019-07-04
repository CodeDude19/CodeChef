#include<stdio.h>

void check(int p) {
    int i, count = 0;
    int array[12] = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048};
    while (p > 0) {
        for (i = 11; i >= 0; i--) {
            if (p >= array[i]) {
                p = p - array[i];
                i++;
                count++;
            }
        }
    }
    printf("%d\n", count);
}

void main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int p;
        scanf("%d", &p);
        check(p);
    }
}
