#include<bits/stdc++.h>
typedef unsigned  long long ll;
using namespace std;
int main(){
    int t;cin>>t;
    while (t--)
    {
        unordered_map<ll,ll> Nmap,Mmap;
        ll n,m,q;cin>>n>>m>>q;
        while(q--){
            ll x,y;
            cin>>x>>y;
            --x;--y;
            Nmap[x]++;
            Mmap[y]++;
        }
        ll Evn=0,Oddn=0,Evm=0,Oddm=0;
        for(ll i=0;i<n;i++){
            if(Nmap[i]%2!=0) Oddn++;
            else Evn++;
        }for(ll i=0;i<m;i++){
            if(Mmap[i]%2!=0) Oddm++;
            else Evm++;
        }
        ll s = (Evn*Oddm)+(Evm*Oddn);
        cout<<s<<"\n";
    }
    return 0;
}