#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
      long long  bit=1,nibble=0,byte=0;
      long long  N;
      cin>>N;
      long long temp=1;
      while(N>=0)
      {

        if(N<=2){N=-1;break;}
        if(N>2){bit = 0; nibble=temp; byte =0; N = N-2;}
        else break;
        if(N>8){bit = 0; nibble=0; byte =temp; N = N-8;}
        else break;
        if(N>16){bit = (temp =temp*2); nibble=0; byte =0; N = N-16;}
        else break;

      }
      cout<<bit<<" "<<nibble<<" "<<byte<<endl;
    }
    return 0;
}
