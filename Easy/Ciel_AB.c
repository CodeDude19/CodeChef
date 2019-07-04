#include<stdio.h>

int main() {
        int n1, n2, ldigit = 0, y = 0;
        scanf("%d", &n1);
        scanf("%d", &n2);
        y = n1 - n2;
        ldigit = y % 10;
        if (ldigit <=8 && ldigit >= 0) {
            y = y + 1;
        } else if(ldigit==9) {
          y = y - 1;
        }
        printf("\n%d", y);
    return 0;
}
