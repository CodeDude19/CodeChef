#include<stdio.h>

int sum(int t, int n) {
    int r = 0, y = 0;
    while (n != 0) {
        r = n % 10;
        y = y + r;
        n = n / 10;
    }
    return y;


}

int main() {
    int t, i;
    long int n;

    scanf("%d", &t);
    int a[t];
    for (i = 0; i < t; i++) {
        scanf("%d", &n);
        a[i] = sum(t, n);
    }
    for (i = 0; i < t; i++) {
        printf("%d\n", a[i]);
    }
    return 0;

}
