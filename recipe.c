#include<stdio.h>
int GCD(int a,int b)
{
  while(a!=b)
  {
    if(a<b) b = b-a;
    else a =a-b;
  }return a;
}
  int main() {
    unsigned short int t;
    scanf("%hu", & t);
    while (t--) {
      int i;
      unsigned short int n;
      scanf("%hu", & n);
      unsigned short int a[n];
      for (i = 0; i < n; i++) {
        scanf("%hu", & a[i]);
      }

      int ele = a[0];
      for(int i=0;i<n;i++)
      {
          ele = GCD(ele ,a[i]);
      }

      if (ele > 0) {
        for (i = 0; i < n; i++) {
          printf("%d ", a[i] / ele);
        }
      } else {
        for (i = 0; i < n; i++) {
          printf("%d ", a[i]);
        }
      }
    }
    return 0;
  }
