
#include<stdio.h>
int main()
{
  int t;

  scanf("%d",&t);
  while (t--) {
    int r=0,index=0,i=0;
    long int n;
    int array[100]={0};
    scanf("%ld",&n);
    while (n != 0) {
        r = n % 10;
        n = n / 10;
        array[i] = r;
        i++;
    }
    printf("%d\n",(array[0]+array[i-1]));

  }
  return 0;
}
