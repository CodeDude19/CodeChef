#include<stdio.h>
unsigned int a[100][100];
int main()
{
  int t;
  scanf("%d",&t);
  while(t--)
  {
    int n,i=0,j=0,c1,c2;
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
      for(j=0;j<=i;j++)
      {
        scanf("%d",&a[i][j]);
      }
    }

    for(i=n-1;i>=0;i--)
    {
      for(j=0;j<i;j++)
      {
          c1 = a[i-1][j] + a[i][j];
          c2 = a[i-1][j] + a[i][j+1];
          if(c1>c2){
            a[i-1][j]=c1;
          }
          else{
            a[i-1][j]=c2;
          }
      }
    }
    printf("%d\n",a[0][0] );

  }
  return 0;
}
