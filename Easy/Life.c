#include<stdio.h>

int main()
{
    unsigned short int t;
    while(t!=42)
    {
      scanf("%hu",&t);
      if(t<100){
        if(t==42) break;
        else printf("%hu\n",t);
      }
      else break;

    }
    return 0;
}
