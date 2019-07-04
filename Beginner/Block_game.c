#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
      int n,r=0,y=0;
      scanf("%d",&n);
      int store = n;
      while (n!=0) {
        r = n%10;
        y = y*10 + r;
        n = n/10;
      }
      if(y == store) printf("wins\n");
      else printf("losses\n");
    }
}
