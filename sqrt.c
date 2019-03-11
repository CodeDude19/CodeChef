#include<stdio.h>
#include<math.h>
int main()
{
  int t;
  scanf("%d",&t );
  while(t--)
  {
    int result,n;
    scanf("%d",&n);
    result = sqrt(n);
    printf("%d\n",result );
  }
  return 0;
}
