#include<stdio.h>
void main()
{
  int t;
  scanf("%d",&t);
  while(t--)
  {
    int p1,p2,k;
    scanf("%d%d%d",&p1,&p2,&k);
    int r= (p1+p2)/k;
    if(p1==0) printf("COOK\n");
    else if (p2 == 0) printf("CHEF\n");
    else{
    if(r%2==0) printf("CHEF\n");
    else printf("COOK\n");
    }

  }
}
