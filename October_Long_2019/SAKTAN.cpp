#include<bits/stdc++.h>
typedef unsigned  long long ll;
using namespace std;
int main(){
    int t;cin>>t;
    while (t--)
    {
        unordered_map<ll,ll> N,M;
        ll n,m,q;cin>>n>>m>>q;
        while(q--){
            ll x,y;
            cin>>x>>y;
            --x;--y;
            N[x]++;
            M[y]++;
        }
        ll En=0,On=0,Em=0,Om=0;
        for(ll i=0;i<n;i++){
            if(N[i]%2!=0) On++;
            else En++;
        }for(ll i=0;i<m;i++){
            if(M[i]%2!=0) Om++;
            else Em++;
        }
        ll s = (En*Om)+(Em*On);
        cout<<s<<"\n";
    }
    return 0;
}