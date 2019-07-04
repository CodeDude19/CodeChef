#include<stdio.h>
int main()
{
  int n,i,k,count=0;
  scanf("%d%d",&n,&k);
  int array[n];
    for(i=0;i<n;i++)
    {
      scanf("%d",&array[i]);
    }
    for(i=0;i<n;i++)
    {
      if(array[i]%k==0)
      {
        count = count + 1;
      }
    }
    printf("%d",count);

}
