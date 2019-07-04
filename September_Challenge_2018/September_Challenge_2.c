#include<stdio.h>
int check(int n,int m,int x,int y)
{
	if(n<0||m<0)return 0;
	if(n%x==0&&m%y==0)
		return 1;
	else
		return 0;
}
int main()
{
	int n,m,x,y,t;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d%d%d",&n,&m,&x,&y);
		n--;m--;
		if(check(n,m,x,y)||check(n-1,m-1,x,y))
			printf("Chefirnemo\n");
		else
			printf("Pofik\n");
	}
	return 0;
}
