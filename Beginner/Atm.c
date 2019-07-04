#include<stdio.h>
void main()
{
  int a; float b;
  scanf("%d%f",&a,&b);
  if((a<b-0.5) && (a%5==0))
  {
    printf("%.2f",b-a-0.5);
  }
  else if(b>a)
  {
    printf("%.2f\n",b);
  }
  else
  {
    printf("%.2f\n",b);
  }
  return 0;
}
