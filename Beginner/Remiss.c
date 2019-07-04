#include<stdio.h>
void main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int a=0,b=0;
		scanf("%d%d",&a,&b);
		if(a>b)
		{
			printf("%d\n%d\n",a,a+b);
		}else
		{
			printf("%d\n%d\n",b,a+b);
		}
	}
}
