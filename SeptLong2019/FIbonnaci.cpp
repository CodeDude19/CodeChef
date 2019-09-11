#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll seq[] = {0, 1, 1, 2, 3, 5, 8, 3, 1, 4, 5, 9,
            4, 3, 7, 0, 7, 7, 4, 1, 5, 6, 1, 7,
            8, 5, 3, 8, 1, 9, 0, 9, 9, 8, 7, 5, 
            2, 7, 9, 6, 5, 1, 6, 7, 3, 0, 3, 3, 
            6, 9, 5, 4, 9, 3, 2, 5, 7, 2, 9, 1};
ll nearestPower(ll n){
    ll count = 0;
    while(n>0){
        n = (n>>1);
        count++;
    }
    cout<<"Count = "<<count<<"\n";
    return pow(2,count-1);
}
int main(){
    ll t;cin>>t;
    while(t--){
        ll n;cin>>n;
        cout<<seq[(nearestPower(n)-1)%60]<<"\n";
    }
    return 0;
}