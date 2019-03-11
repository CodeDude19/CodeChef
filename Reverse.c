#include<stdio.h>
int main()
{
  int t;
  scanf("%d",&t );
  while(t--)
  {
    int n =0,r=0,y=0;
    scanf("%d",&n);
    while (n!=0) {
      r = n%10;
      y = y*10 + r;
      n = n/10;
    }
    printf("%d\n",y );
  }
  return 0;
}
