#include<stdio.h>
#include<string.h>
int k;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
      int n;
      k=0;
      scanf("%d%d",&n,&k);
      int a[n];
      char b[n];
      for(int i=0;i<n;i++)
      {
        scanf("%d",&a[i]);
      }
      for(int i=0;i<n;i++)
      {
        if(a[i]<=k){
          k=k-a[i];
          b[i]='1';
        }else b[i]='0';
      }
      puts(b);

    }
    return 0;
}
