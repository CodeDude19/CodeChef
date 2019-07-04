#include<stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        long int n;
        scanf("%ld", &n);
        if (n % 2!= 0) printf("BOB\n");
        else printf("ALICE\n");
    }
    return 0;
}
