#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long int length;
        scanf("%ld",&length);
        if(length%2==0)
        {
          printf("%ld\n",length);
        }else if(length%2!=0)
        {
          printf("%ld\n",length-1);
        }
    }
    return 0;
}
