#include<stdio.h>

int remainder(int a, int b) {
    int y;
    y = a % b;
    return y;

}

int main() {
    int t, i;
    int a, b;

    scanf("%d", &t);
    int array[t];
    for (i = 0; i < t; i++) {
        scanf("%d%d", &a, &b);
        array[i] = remainder(a, b);
    }
    for (i = 0; i < t; i++) {
        printf("%d\n", array[i]);
    }
    return 0;

}
