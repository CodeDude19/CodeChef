#include<stdio.h>
#include<stdlib.h>

int main()
{
      int t;
      scanf("%d",&t);
      while(t--)
      {
        int n;
        scanf("%d",&n);
        long int a[n];
        for(int i=0;i<n;i++) scanf("%d",&a[i]);
        for(int i=0;i<n;i++)printf("\t%d",a[i]);

      }
}
