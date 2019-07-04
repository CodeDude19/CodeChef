#include<stdio.h>

int main() {
    unsigned short int t;
    scanf("%hu", &t);
    while (t--) {
        short int n;
        scanf("%hu", &n);
        if (n <= 20 && n >= -20) {
            printf(n < 10 ? "What an obedient servant you are!\n" : "-1\n");
        } else
            break;
    }
    return 0;
}
