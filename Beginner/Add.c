#include <stdio.h>

void add(int A, int B) {
    printf("%d\n", A + B);
}

int main() {

    int n, i;
    scanf("%d", &n);
    int a[n], b[n];
    if (n >= 1 && n <= 1000) {
        for (i = 0; i < n; i++) {
            scanf("%d%d", &a[i], &b[i]);

        }
    }
    for (i = 0; i < n; i++) {
        if (a[i], b[i] >= 1 && a[i], b[i] <= 10000) {
            add(a[i], b[i]);
        }
    }

    return 0;
}
