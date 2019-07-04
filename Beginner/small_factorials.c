#include<stdio.h>

void fact(int a, int n) {

    int i,factorial= 1;
    for(i=1;i<=a;i++)
    {
      factorial=factorial*i;
    }
    printf("%d\n",factorial);


}

int main() {
    int n, i, number;
    scanf("%d", &n);
    int a[n];
    for (i = 1; i <= n; i++) {
        scanf("%d", &a[i]);
    }
    for (i = 1; i <= n; i++) {
        number = a[i];
        fact(number, n);
    }

    return 0;
}
