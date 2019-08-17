
#include<bits/stdc++.h>
using namespace std;
void checker(string atdn,int d,int min,int first_last){
    int find = ceil(d*0.75);
    for(int i=0;i<d;i++){
        if(atdn[i] =='P') first_last+=1;
    }
    if(first_last>=find){
        cout<<"0\n";
        return;
    }
    for(int i=2;i<d-2;i++){
        if((atdn[i]!='P')&& ((atdn[i-1]=='P'||atdn[i-2]=='P') && (atdn[i+1]=='P'||atdn[i+2]=='P'))){
            min+=1;
            first_last +=1;
            if(first_last==find){
                cout<<min<<"\n";
                return;
            }
        }
    }
    cout<<"-1\n";
}
int main()
{
    int t;cin>>t;
    while(t--){
        int d;int min=0;cin>>d;
        int first_last = 0;
        string atdn;
        cin>>atdn;
        if(d<=4){
            cout<<"-1\n";
        }
        else{
            checker(atdn,d,min,first_last);
        }
    }
    return 0;
}
