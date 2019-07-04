#include<stdio.h>


int main() {

    int t, i, k, j, temp;
    unsigned short int n, s, a, b,m, coinindex;
    scanf("%d", &t);
    //Starting test case iteration:
    for (k = 0; k < t; k++) {

        scanf("%hu%hu%hu", &n, &coinindex, &s);//scanning no. of boxes,index of coin,swaps!
        unsigned short int boxes[n];//n no. of boxes initialized!
        boxes[coinindex] = 123;
        for (j = 1; j < s + 1; j++) {

            scanf("%hu%hu", &a, &b);
            temp = boxes[a];
            boxes[a] = boxes[b];
            boxes[b] = temp;


            if (coinindex == a && coinindex != b) {
                coinindex = b;
            } else if(coinindex == b && coinindex != a) {
                coinindex = a;
            }

        }
        //No Linear Search

        printf("%d\n", coinindex);

    }

    return 0;
}
