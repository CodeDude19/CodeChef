#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n,temp;cin>>n;
        int arr[n+5];
        for(int i=0;i<5;i++) arr[i] = INT_MAX;
        for(int i=5;i<n+5;i++){
            cin>>temp;
            arr[i] = temp;
        }
        int count = 0;
        for(int i=5;i<n+5;i++){
            if(arr[i]<arr[i-1] && arr[i]<arr[i-2] && arr[i]<arr[i-3] && arr[i]<arr[i-4] &&arr[i]<arr[i-5]) count++;
        }
        cout<<count<<"\n";
    }
    return 0;
}