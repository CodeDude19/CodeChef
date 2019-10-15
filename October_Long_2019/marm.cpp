#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        ll arr[n];
        for(ll i=0;i<n;i++){
            cin>>arr[i];
        }
        if(k>n/2 && n%2==1)
            arr[n/2]=0;
        k=k%(3*n); // bcoz if n times changes is done thrice...the value becomes the original one
        for(ll i=0;i<k;i++)
        {
            ll temp1 =i%n;
            ll temp2 =n-temp1-1;
            arr[temp1]=arr[temp1]^arr[temp2];
        }
        for(ll i=0;i<n;i++) cout<<arr[i]<<" ";
        cout<<"\n";
    }
    return 0;
}