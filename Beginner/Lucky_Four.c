#include<stdio.h>
int main()
{
  int t,n,r=0,count;
  scanf("%d",&t);
  while (t--) {
    scanf("%d",&n);
    count = 0;
    while (n != 0) {
        r = n % 10;
        n = n / 10;
        if(r==4)
        {
          count++;
        }
    }
    printf("%d\n",count);
  }
  return 0;
}
