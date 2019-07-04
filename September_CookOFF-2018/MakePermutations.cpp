  #include <bits/stdc++.h>
  using namespace std;
  int main()
  {
      int count;
      int t;
      cin>>t;
      while(t--)
      {
        count = 0;
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
          cin>>a[i];
        }
        int c = sizeof(a)/sizeof(a[0]);
        int x=0;
        sort(a,a+c);
        for(int i=0;i<n;i++)
        { if(a[i]==0 || a[i]>n){
           count = count + 1;
        }
          else if(a[i]!=x){
            x = a[i];
          }
          else if (a[i]==x)
          {
            count = count + 1;
          }
        }
        cout<<count<<endl;
      }

      return 0;
  }
