#include<stdio.h>

int main() {

    int n;
    int i;
    scanf("%d", &n);
    int a[n], b[n], c[n], cua[n], cub[n], largest, index;
    for (i = 0; i < n; i++) {
        scanf("%d%d", &a[i], &b[i]);
    }
    cua[0] = a[0];
    cub[0] = b[0];
    for (i = 1; i < n; i++) {
        cua[i] = cua[i - 1] + a[i];
        cub[i] = cub[i - 1] + b[i];
    }

    for (i = 0; i < n; i++) {
        if (cua[i] > cub[i]) {
            c[i] = cua[i] - cub[i];
        } else {
            c[i] = cub[i] - cua[i];
        }
    }
    largest = c[0];
    for (i = 0; i < n; i++) {
        if (c[i] > largest) {
            largest = c[i];
            index = i;
        }
    }
    if (largest==(cub[index]-cua[index])) {
        printf("%d %d", 2, largest);
    } else {
        printf("%d %d", 1, largest);
    }

    return 0;
}
