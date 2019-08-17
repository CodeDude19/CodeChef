#include <bits/stdc++.h>
using namespace std;

int Gcd(int m, int n) {
    if (n == 0) return m;
    else return Gcd(n,m%n);
}
int GCDM(int arr[],int element,int n){
    int g = arr[0];
    for(int i = 0;i<n;i++){
        g = Gcd(g,arr[i]);
    }
    return g+element;
}
void func()
{
    int n;
    cin>>n;
    set<int> arr;
    for(int i = 0;i<n;i++){
        int temp;cin>>temp;
        arr.insert(temp);
    }
    n = arr.size();
    int arr2[n];
    int i = 0;
    for(auto x:arr) arr2[i++] = x;
    if(n==1){cout<<arr2[0]*2<<"\n";return;}
    int val = arr2[n-1];
    int a = GCDM(arr2,val,n-1);
    int temp = arr2[n-1];
    arr2[n-1] = arr2[n-2];
    arr2[n-2] = temp;
    val = arr2[n-1];
    int b=GCDM(arr2,val,n-1);
    int ans = max(a,b);
    cout<<ans<<"\n";
}
int main() {
    int t;cin>>t;
    while (t--) {
        func();
    }
    return 0;
}
