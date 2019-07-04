#include<stdio.h>
int count;
int main()
{
    int t;
    scanf("%d",&t);
    if(t<=100){
    while(t--)
    {
      count = 0;
      int n;
      scanf("%d",&n);
      while(n--)
      {
        int a,b;
        scanf("%d%d",&a,&b);
        if(a>b)
        {
          if(a-b>5) count = count+1;
          else if(a-b==5) count = count +0;
        }
        else if(b>a)
        {
          if(b-a>5) count = count+1;
          else if(b-a==5) count = count +0;
        }

      }
      printf("%d\n",count);
    }
  }
}
