#include<stdio.h>

void main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        long int a[3], temp;
        int i, j;
        scanf("%ld%ld%ld", &a[0], &a[1], &a[2]);
        for (i = 0; i < 3; i++) {
            for (j = 0; j < 2; j++) {
                if (a[j] > a[j + 1]) {
                    temp = a[j + 1];
                    a[j + 1] = a[j];
                    a[j] = temp;
                }
            }
        }
        printf("%d\n", a[1]);


    }
}
