#include<stdio.h>
#include<string.h>
int count;

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
      count = 0;
      char text[100];
      scanf("%s",text);
      int n = strlen(text);
      for(int i=0;i<n;i++)
      {
        if(text[i]=='A'||text[i]=='D'||text[i]=='O'||text[i]=='P'||text[i]=='Q'||text[i]=='R')
        {
          count = count + 1;
        }
        else if(text[i]=='B')
        {
          count = count + 2;
        }
        else
        {
          count = count + 0;
        }

      }
      printf("%d\n",count);
    }
    return 0;
}
