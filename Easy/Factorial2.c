#include <stdio.h>
int count;
int raise(int n ,int i)
{
  int result=1;
  for(int j=0;j<i;j++)
  {
    result = result*n;
  }
  return result;
}
int main() {
  int t;
  scanf("%d", & t);
  while (t--) {
    count = 0;
    long int n;
    scanf("%ld", & n);
    for (int i = 1; n/raise(5, i)!=0; i++) {
      count = count + (n / raise(5, i));
    }
    printf("%d\n", count);
  }
  return 0;
}
